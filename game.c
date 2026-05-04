//Contributors
//GP
//
//



#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

//place function prototypes here
bool pinballPark(int max_player_HP, int max_enemy_HP, int max_numOfPotions);
bool musicalMadness(int max_player_HP, int max_enemy_HP, int max_numOfPotions);
bool televisionTroubles(int max_player_HP, int max_enemy_HP, int max_numOfPotions);
bool laughingLaboratory(int max_player_HP, int max_enemy_HP, int max_numOfPotions);
bool spaceSpectacle(int max_player_HP, int max_enemy_HP, int max_numOfPotions);





int main(int argc, char *argv[])
{
	int choice = 0;
	char name[30] = "bob";
	srand(time(NULL));
	
	printf("Please enter your name: ");
	scanf("%s",name);
	printf("Hello %s welcome to the RPG Game!\n",name);
	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
		puts("As you look around you see the room has 75 doors, each labeled with a number.");
		puts("The room starts filling with water and a loud voice tells you that you must choose a door to open and enter or you will likely drown. you may quit anytime by selecting option 99.");
		puts("What door do you choose?");
		scanf("%d",&choice);
		switch(choice)
		{
			
			case 22:
			{
				puts("room22");
				bool hasMedals[5] = {false,false,false,false,false};
				
				while (true)
				{
				    
				    if(hasMedals[0] && hasMedals[1] && hasMedals[2] && hasMedals[3] && hasMedals[4])
				    {
				        puts("CONGRATULATIONS HERO! You have won all medals from all 5 rooms! You are a superstar! I will be taking those medals from you. You can keep playing and earning these medals again if you want. Thank you so much!!!!\n\n");
				        hasMedals[0] = false;
				        hasMedals[1] = false;
				        hasMedals[2] = false;
				        hasMedals[3] = false;
				        hasMedals[4] = false;
				    }
				    
				    printf("Here are your rooms: Try to get a medal for each room for a congratulations message! (%d/5 medals collected)\n\n", hasMedals[0] + hasMedals[1] + hasMedals[2] + hasMedals[3] + hasMedals[4]);
				    puts("1) Pinball Park");
			        puts("2) Musical Madness");
				    puts("3) Television Troubles");
				    puts("4) Laughing Laboratory");
				    puts("5) Space Spectacle\n");
				    puts("Enter one of the corresponding numbers or a different number to exit the door. You will lose all the collected medals if you exit.\n");
				    printf("Enter your choice: ");
				    scanf("%d", &choice);
				    puts("");

				    if (choice == 1)
				    {
				        if (pinballPark(rand() % (250 - 100 + 1) + 100, rand() % (300 - 280 + 1) + 280,  rand() % (5 - 3 + 1) + 3))
				        {
				            hasMedals[0] = true;
				        }
				    }

				    else if (choice == 2)
                    {
                        if (musicalMadness(rand() % (200 - 100 + 1) + 100, rand() % (250 - 150 + 1) + 150, rand() % (4 - 2 + 1) + 2))
                        {
                            hasMedals[1] = true;
                        }
                    }

				    else if (choice == 3)
				    {
					    if (televisionTroubles(rand() % (400 - 300 + 1) + 300, rand() % (440 - 420 + 1) + 420, rand() % (7 - 6 + 1) + 6))
					    {
					        hasMedals[2] = true;
					    }

				    }

				    else if (choice == 4)
                    {
                        if(laughingLaboratory(rand() % (275 - 200 + 1) + 200, rand() % (290 - 230 + 1) + 230, rand() % (5 - 4 + 1) + 4))
                        {
                            hasMedals[3] = true;
                        }

                    }

				    else if (choice == 5)
                    {
                        if (spaceSpectacle(rand() % (755 - 600 + 1) + 600, rand() % (1064 - 880 + 1) + 880, rand() % (8 - 4 + 1) + 4))
                        {
                            hasMedals[4] = true;
                        }
            				
				    }
				
				    else
				    {
				        printf("Goodbye!\n\n");
				        break;
				    }
				}

				break;
			}

			case 99:
			{
				puts("You have escaped");
				break;
			}

			default:
			{
				puts("invalid choice");
			}			
			
	}
	}
	puts("Game Over");
	return EXIT_SUCCESS;
}

//place functions here
bool pinballPark(int max_player_HP, int max_enemy_HP, int max_numOfPotions)
{

	char choice;
	int current_player_HP = max_player_HP, current_enemy_HP = max_enemy_HP, current_NumOfPotions = max_numOfPotions;
	bool isPlayerTurnOver = false;

	puts("Welcome to a park...inside of a pinball machine, what?? Anyways, you will be going against...\n\n\t\tPsychotic Clanker:\n\t\tBOBBINATOR-X67\n\n");

	while(true)
	{
		    
	    while(!isPlayerTurnOver) 
	    {

		    printf("\t\tPLAYER'S TURN\n\nPLAYER\t\t\t\t\t\tBOBBINATOR-X67\nHP: %d/%d\t\t\t\t\tHP: %d/%d\nPotions: %d/%d\n\nA) Punch\tB) Kick\nC) Special\tD) Heal\n\n", current_player_HP, max_player_HP, current_enemy_HP, max_enemy_HP, current_NumOfPotions,max_numOfPotions);

		    printf("What will you do?: ");

		    scanf(" %c", &choice);

		    while(choice != 'A' && choice != 'a' && choice != 'B' && choice != 'b' && choice != 'C' && choice != 'c' && choice != 'D' && choice != 'd')
		    {
			    printf("Invalid choice. Please try again.\n\nWhat will you do?: ");
			    scanf(" %c", &choice);
		    }

		    switch(choice)
		    {
			    case 'A':
			    case 'a':
			    {
				    int damage = rand() % (50 - 30 + 1) + 30;
				    current_enemy_HP -= damage;
				    printf("You punched your enemy and dealt %d damage.\n\n", damage);
				    isPlayerTurnOver = true;
				    break;
			    }

			    case 'B':
			    case 'b':
			    {
				    int damage = rand() % (80 - 40 + 1) + 40;
                    current_enemy_HP -= damage;
                    printf("You kicked your enemy and dealt %d damage.\n\n", damage);
                    isPlayerTurnOver = true;
				    break;
			    }

			    case 'C':
			    case 'c':
			    {
				    int random_number = rand() % (5 - 1 + 1) + 1, guessed_number;

				    printf("Guess the correct number from 1-5 to use your special attack: ");
				    scanf("%d", &guessed_number);

				    while (guessed_number < 1 || guessed_number > 5)
				    {
					    printf("OUT OF RANGE. Please try again.\n Guess the correct number from 1-5 to use your special attack: \n\n");
					    scanf("%d", &guessed_number);
				    }

				    if(guessed_number == random_number)
				    {
					    int damage = rand() % (130 - 100 + 1) + 100;
					    current_enemy_HP -= damage;
					    printf("BOOYAH! You guessed it right and used your special attack against your opponent to deal %d damage.\n\n", damage);	     
				        isPlayerTurnOver = true;
				    }

				    else
				    {
					    printf("I'm sorry, but you guessed the number wrong. You lost your turn.\n\n");
					    isPlayerTurnOver = true;
				    }

				    break;
			    }

			    case 'D':
			    case 'd':
			    {
			    
			        if(current_player_HP == max_player_HP)
				    {
				        printf("Your HP is already full, so there is no need to heal.\n\n");
				    
				    }
				    else if(current_NumOfPotions > 0)
				    {
					    --current_NumOfPotions;
					    int HP_Healed = rand() % (90 - 75 + 1) + 75;
					    current_player_HP += HP_Healed;
					    
					    if(current_player_HP > max_player_HP)
					    {
					        current_player_HP = max_player_HP;
					    }
					    printf("You used a potion to heal %d HP\n\n", HP_Healed);
					    break;
				    }

				    else
				    {
					    printf("I'm sorry, but you don't have anymore potions, so you can't heal.\n\n");
				    }
				
			    break;
			    }
		    }
		    
		}
	    
	    if(current_enemy_HP <= 0)
		{
		        printf("CONGRATULATIONS! You won the battle and got the Pinball Park medal. You will be taken back to the room selection screen.\n\n");
			    return true;
		}
	    
	    printf("\t\tBOBBINATOR-X67's TURN!\n\n");
	    
	    int random_number = rand() % (3 - 1 + 1) + 1;
	    
	    printf("BOBBINATOR-X67 used ");
	    
	    switch (random_number)
	    {
	       case 1:
	       {
	           int damage = rand() % (50 - 40 + 1) + 50;
	           current_player_HP -= damage;
	           printf("laser blast on you. You took %d damage.\n\n", damage);
	           break;
	       }
	        
	       case 2:
	       {
	           int damage = rand() % (60 - 30 + 1) + 30;
	           current_player_HP -= damage;
	           printf("bomb throw on you. You took %d damage.\n\n", damage);
	           break;
	       }
	        
	       case 3:
	       {
	           int damage = rand() % (40 - 20 + 1) + 20;
	           current_player_HP -= damage;
	           printf("scratch on you. You took %d damage.\n\n", damage);
	           break;
	       }
	    }
	    
	    if(current_player_HP <= 0)
		{
		        printf("Oh no! You lost the battle! I'm sorry, but you have to go back to the room selection screen.\n\n");
			    return false;
		}
        
        printf("\t\tINCOMING STAGE HAZARD\n\nWoah, a pinball. What will it do?\n\n");
        
        random_number = rand() % (3 - 1 + 1) + 1;
        
        switch (random_number)
	    {
	            case 1:
	            {
	                current_player_HP -= 75;
	                printf("Oof! The pinball decided to hit you for 75 damage!\n\n");
	                break;
	            }
	        
	            case 2:
	            {
	                current_enemy_HP -= 75;
	                printf("JEEPERS! The pinball decided to hit BOBBINATOR-X67 for 75 damage!\n\n");
	                break;
	            }
	            
	            case 3:
	            {
	                current_enemy_HP -= 75;
	                printf("Phew that was scary, but it looks like the pinball didn't hit you or BOBBINATOR-X67.\n\n");
	                break;
	            }
	    }
	    
	    if(current_player_HP <= 0)
		{
		        printf("Oh no! You lost the battle! I'm sorry, but you have to go back to the room selection screen.\n\n");
			    return false;
		}
		
		if(current_enemy_HP <= 0)
		{
		        printf("CONGRATULATIONS! You won the battle and got the Pinball Park medal. You will be taken back to the room selection screen.\n\n");
			    return true;
		}
		
		isPlayerTurnOver = false;
	}
	
	
}

bool musicalMadness(int max_player_HP, int max_enemy_HP, int max_numOfPotions)
{
    

	char choice;
	int current_player_HP = max_player_HP, current_enemy_HP = max_enemy_HP, current_NumOfPotions = max_numOfPotions;
	bool isPlayerTurnOver = false, isPlayerAsleep = false, isEnemyAsleep = false;

	puts("Welcome to a musical area called Musical Madness (uh oh, it says madness, I don't like the sound of that). There are plenty of musical instruments here. You will be going against...\n\n\t\tUnfriendly Musician:\n\t\tC Sharp\n\n");

	while(true)
	{
		    
	    while(!isPlayerTurnOver) 
	    {
	        if(!isPlayerAsleep)
	        {

		        printf("\t\tPLAYER'S TURN\n\nPLAYER\t\t\t\t\t\tC Sharp\nHP: %d/%d\t\t\t\t\tHP: %d/%d\nPotions: %d/%d\n\nA) Punch\tB) Kick\nC) Special\tD) Heal\n\n", current_player_HP, max_player_HP, current_enemy_HP, max_enemy_HP, current_NumOfPotions,max_numOfPotions);

		        printf("What will you do?: ");

		        scanf(" %c", &choice);

		        while(choice != 'A' && choice != 'a' && choice != 'B' && choice != 'b' && choice != 'C' && choice != 'c' && choice != 'D' && choice != 'd')
		        {
			        printf("Invalid choice. Please try again.\n\nWhat will you do?: ");
			        scanf(" %c", &choice);
		        }

		        switch(choice)
		        {
			        case 'A':
			        case 'a':
			        {
				        int damage = rand() % (40 - 20 + 1) + 20;
				        current_enemy_HP -= damage;
				        printf("You punched your enemy and dealt %d damage.\n\n", damage);
				        isPlayerTurnOver = true;
				        break;
			        }

			        case 'B':
			        case 'b':
			        {
				        int damage = rand() % (50 - 35 + 1) + 35;
                        current_enemy_HP -= damage;
                        printf("You kicked your enemy and dealt %d damage.\n\n", damage);
                        isPlayerTurnOver = true;
				        break;
			        }

			        case 'C':
			        case 'c':
			        {
				        int random_number = rand() % (5 - 1 + 1) + 1, guessed_number;

				        printf("Guess the correct number from 1-5 to use your special attack: ");
				        scanf("%d", &guessed_number);

				        while (guessed_number < 1 || guessed_number > 5)
				        {
					        printf("OUT OF RANGE. Please try again.\n Guess the correct number from 1-5 to use your special attack: \n\n");
					        scanf("%d", &guessed_number);
				        }

				        if(guessed_number == random_number)
				        {
					        int damage = rand() % (110 - 95 + 1) + 95;
					        current_enemy_HP -= damage;
					        printf("BOOYAH! You guessed it right and used your special attack against your opponent to deal %d damage.\n\n", damage);	     
				            isPlayerTurnOver = true;
				        }

				        else
				        {
					        printf("I'm sorry, but you guessed the number wrong. You lost your turn.\n\n");
					        isPlayerTurnOver = true;
				        }

				        break;
			        }

			        case 'D':
			        case 'd':
			        {
			    
			            if(current_player_HP == max_player_HP)
				        {
				            printf("Your HP is already full, so there is no need to heal.\n\n");
				    
				        }
				        else if(current_NumOfPotions > 0)
				        {
					        --current_NumOfPotions;
					        int HP_Healed = rand() % (70 - 50 + 1) + 50;
					        current_player_HP += HP_Healed;
					    
					        if(current_player_HP > max_player_HP)
					        {
					            current_player_HP = max_player_HP;
					        }
					        printf("You used a potion to heal %d HP\n\n", HP_Healed);
					        break;
				        }

				        else
				        {
					        printf("I'm sorry, but you don't have anymore potions, so you can't heal.\n\n");
				        }
				
			        break;
			        }
		        }
	        }
	        
	        else
	        {
	            printf("You are asleep, so your turn has been skipped!\n\n");
	            isPlayerAsleep = false;
	            isPlayerTurnOver = true;
	        }
		
	    }
	    
	    if(current_enemy_HP <= 0)
		{
		        printf("CONGRATULATIONS! You won the battle and got the Musical Madness Medal. You will be taken back to the room selection screen.\n\n");
			    return true;
		}
	    
	    if(!isEnemyAsleep)
	    {
	        
	        printf("\t\tC Sharp's TURN!\n\n");
	    
	        int random_number = rand() % (3 - 1 + 1) + 1;
	    
	        printf("C Sharp used his");
	    
	        switch (random_number)
	        {
	            case 1:
	            {
	                int damage = rand() % (30 - 20 + 1) + 20;
	                current_player_HP -= damage;
	                printf(" (not so) good clarinet skills on you. You took %d damage.\n\n", damage);
	                break;
	            }
	        
	            case 2:
	            {
	                int damage = rand() % (60 - 30 + 1) + 30;
	                current_player_HP -= damage;
	                printf(" kazoo solo on you (cringe). You took %d damage.\n\n", damage);
	                break;
	            }
	        
	            case 3:
	            {
	                int damage = rand() % (40 - 20 + 1) + 20;
	                current_player_HP -= damage;
	                printf(" his chillin drum beats on you. You took %d damage.\n\n", damage);
	                break;
	            }
	        }

        }
        
        else
        {
            printf("C Sharp is asleep, so his turn has been skipped!\n\n");
            isEnemyAsleep = false;
        }
        
        if(current_player_HP <= 0)
		{
		        printf("Oh no! You lost the battle! I'm sorry, but you have to go back to the room selection screen.\n\n");
			    return false;
		}
        
        printf("\t\tINCOMING STAGE HAZARD\n\nIt's the magic piano. What is it doing?\n\n\t\t*plays beethoven's music*\n\n");
        
        int random_number = rand() % (3 - 1 + 1) + 1;
        
        switch (random_number)
	    {
	            case 1:
	            {
	                printf("Oh, it's just playing musi- wait, why am I...*snoring*\n\n");
	                isPlayerAsleep = true;
	                break;
	            }
	        
	            case 2:
	            {
	                printf("WOW! Look at that, C SHARP is falling asleep. Now he won't be able to use his turn.\n\n");
	                isEnemyAsleep = true;
	                break;
	            }
	            
	            case 3:
	            {
	                printf("That piano just played Beethoven's music. I remember this one, but I don't understand the point of that?\n\n");
	                break;
	            }
	    }
		
		isPlayerTurnOver = false;
	}
	
	

        

}

bool televisionTroubles(int max_player_HP, int max_enemy_HP, int max_numOfPotions)
{
  
    char choice;
	int current_player_HP = max_player_HP, current_enemy_HP = max_enemy_HP, current_NumOfPotions = max_numOfPotions;
	bool isPlayerTurnOver = false, isPlayerConfused = false, isEnemyConfused = false;

	puts("Welcome is this place? A TV dimension where there's nothing but TVs? Who would live in this place? Eeek, it's the...\n\n\t\tStrong Wielded Warrior:\n\t\tJim The Knight\n\n");
	
	

	while(true)
	{
		    
	    while(!isPlayerTurnOver) 
	    {
	        if(!isPlayerConfused)
	        {

		        printf("\t\tPLAYER'S TURN\n\nPLAYER\t\t\t\t\t\tJim The Knight\nHP: %d/%d\t\t\t\t\tHP: %d/%d\nPotions: %d/%d\n\nA) Punch\tB) Kick\nC) Special\tD) Heal\n\n", current_player_HP, max_player_HP, current_enemy_HP, max_enemy_HP, current_NumOfPotions,max_numOfPotions);

		        printf("What will you do?: ");

		        scanf(" %c", &choice);

		        while(choice != 'A' && choice != 'a' && choice != 'B' && choice != 'b' && choice != 'C' && choice != 'c' && choice != 'D' && choice != 'd')
		        {
			        printf("Invalid choice. Please try again.\n\nWhat will you do?: ");
			        scanf(" %c", &choice);
		        }

		        switch(choice)
		        {
			        case 'A':
			        case 'a':
			        {
				        int damage = rand() % (115 - 70 + 1) + 70;
				        current_enemy_HP -= damage;
				        printf("You punched your enemy and dealt %d damage.\n\n", damage);
				        isPlayerTurnOver = true;
				        break;
			        }

			        case 'B':
			        case 'b':
			        {
				        int damage = rand() % (140 - 60 + 1) + 60;
                        current_enemy_HP -= damage;
                        printf("You kicked your enemy and dealt %d damage.\n\n", damage);
                        isPlayerTurnOver = true;
				        break;
			        }

			        case 'C':
			        case 'c':
			        {
				        int random_number = rand() % (5 - 1 + 1) + 1, guessed_number;

				        printf("Guess the correct number from 1-5 to use your special attack: ");
				        scanf("%d", &guessed_number);

				        while (guessed_number < 1 || guessed_number > 5)
				        {
					        printf("OUT OF RANGE. Please try again.\n Guess the correct number from 1-5 to use your special attack: \n\n");
					        scanf("%d", &guessed_number);
				        }

				        if(guessed_number == random_number)
				        {
					        int damage = rand() % (130 - 100 + 1) + 100;
					        current_enemy_HP -= damage;
					        printf("BOOYAH! You guessed it right and used your special attack against your opponent to deal %d damage.\n\n", damage);	     
				            isPlayerTurnOver = true;
				        }

				        else
				        {
					        printf("I'm sorry, but you guessed the number wrong. You lost your turn.\n\n");
					        isPlayerTurnOver = true;
				        }

				        break;
			        }

			        case 'D':
			        case 'd':
			        {
			    
			            if(current_player_HP == max_player_HP)
				        {
				        printf("Your HP is already full, so there is no need to heal.\n\n");
				    
				        }
				        else if(current_NumOfPotions > 0)
				        {
					        --current_NumOfPotions;
					        int HP_Healed = rand() % (150 - 100 + 1) + 100;
					        current_player_HP += HP_Healed;
					    
					        if(current_player_HP > max_player_HP)
					        {
					            current_player_HP = max_player_HP;
					        }
					        printf("You used a potion to heal %d HP\n\n", HP_Healed);
					        break;
				        }

				        else
				        {
					        printf("I'm sorry, but you don't have anymore potions, so you can't heal.\n\n");
				        }
				
			        break;
			        }
		        }
		    
		    }
		    
		    else
		    {
		        

                printf("Since you have been confused, your moves can either hurt YOU, or your enemy. As a result, a \"Do Nothing\" option has been added. Choose wisely.\n\nWhat will you do?: ");

		        printf("\t\tPLAYER'S TURN\n\nPLAYER\t\t\t\t\t\tJim The Knight\nHP: %d/%d\t\t\t\t\tHP: %d/%d\nPotions: %d/%d\n\nA) Punch\tB) Kick\nC) Special\tD) Heal\nE) Do Nothing\n\n", current_player_HP, max_player_HP, current_enemy_HP, max_enemy_HP, current_NumOfPotions,max_numOfPotions);
		        
		        printf("What will you do?: ");

		        scanf(" %c", &choice);

		        while(choice != 'A' && choice != 'a' && choice != 'B' && choice != 'b' && choice != 'C' && choice != 'c' && choice != 'D' && choice != 'd' && choice != 'E' && choice != 'e')
		        {
			        printf("Invalid choice. Please try again.\n\nWhat will you do?: ");
			        scanf(" %c", &choice);
		        }

		        switch(choice)
		        {
			        case 'A':
			        case 'a':
			        {
				        int damage = rand() % (115 - 70 + 1) + 70, random_number = rand() % (2 - 1 + 1) + 1;
				        
				        if(random_number == 1)
				        {
				            current_player_HP -= damage;
				            printf("OUCH! You just punched yourself in the face for %d damage.\n\n", damage);
				            
				        }
				        
				        else
				        {
				            current_enemy_HP -= damage;
				            printf("Yes! You were lucky to punch your enemy for %d damage.\n\n", damage);
				        }
				        
				        isPlayerTurnOver = true;
				        isPlayerConfused = false;
				        break;
			        }

			        case 'B':
			        case 'b':
			        {
			            int damage = rand() % (140 - 60 + 1) + 60, random_number = rand() % (2 - 1 + 1) + 1;
			            
				        if(random_number == 1)
				        {
				            current_player_HP -= damage;
				            printf("YIKES! You just kicked yourself in the nuts for %d damage.\n\n", damage);
				            
				        }
				        
				        else
				        {
				            current_enemy_HP -= damage;
				            printf("Yes! You were lucky to kick your enemy and dealt %d damage.\n\n", damage);
				        }
				        
                        isPlayerTurnOver = true;
                        isPlayerConfused = false;
				        break;
			        }

			        case 'C':
			        case 'c':
			        {
				        int random_number = rand() % (2 - 1 + 1) + 1, guessed_number;

				        printf("Guess the correct number from 1-2 to use your special attack: ");
				        scanf("%d", &guessed_number);

				        while (guessed_number < 1 || guessed_number > 2)
				        {
					        printf("OUT OF RANGE. Please try again.\n Guess the correct number from 1-2 to use your special attack: \n\n");
					        scanf("%d", &guessed_number);
				        }

				        if(guessed_number == random_number)
				        {
					        int damage = rand() % (200 - 150 + 1) + 150, random_number = rand() % (2 - 1 + 1) + 1;
					        
					        if(random_number == 1)
				            {
				                current_player_HP -= damage;
				                printf("OH NO! You used your own special attack to hurt yourself %d damage. You unlucky soul.\n\n", damage);
				            }
				        
				            else
				            {
				                current_enemy_HP -= damage;
				                printf("HOW ARE YOU THIS LUCKY AND RISKY?? I can't believe you sucessfully used your special attack against your opponent to deal %d damage. Great Job!\n\n", damage);
				                
				            }
				            
				            isPlayerTurnOver = true;
				            isPlayerConfused = false;
				        }

				        else
				        {
				            current_player_HP = current_player_HP - current_player_HP / 3;
					        printf("I'm sorry, but you guessed the number wrong. You lost both your turn and a third of your health.\n\n");
					        isPlayerTurnOver = true;
					        isPlayerConfused = false;
				        }

				        break;
			        }

			        case 'D':
			        case 'd':
			        {
			    
			            if(current_player_HP == max_player_HP)
				        {
				            printf("Your HP is already full, so there is no need to heal (as well as possibly hurting yourself).\n\n");
				    
				        }
				        else if(current_NumOfPotions > 0)
				        {
					        --current_NumOfPotions;
					        int HP_HealedOrDrained = rand() % (150 - 100 + 1) + 100, random_number = rand() % (2 - 1 + 1) + 1;
					        
					        if(random_number == 1)
				            {
				                current_player_HP -= HP_HealedOrDrained;
				                printf("Blech! That potion for some reason took away %d of your HP and ended your turn. How terrible!.\n\n", HP_HealedOrDrained);
				                isPlayerTurnOver = true;
				                isPlayerConfused = false;
				                
				            }
				        
				            else
				            {
				                current_enemy_HP -= HP_HealedOrDrained;
				                printf("You used a potion to heal %d HP\n\n", HP_HealedOrDrained);
				                
				            }
					    
					        if(current_player_HP > max_player_HP)
					        {
					            current_player_HP = max_player_HP;
					        }
					        break;
				        }

				        else
				        {
					        printf("I'm sorry, but you don't have anymore potions, so you can't heal. (But maybe that's a good thing.)\n\n");
				        }
				
			        break;
			        }
			        
			        case 'E':
			        case 'e':
			        {
			    
			            printf("You did nothing.\n\n");
			            isPlayerTurnOver = true;
			            isPlayerConfused = false;
				
			        break;
			        }
		        }
		    
		    
		    }
	    }
	    
	    if(current_player_HP <= 0)
		{
		        printf("Oh no! You lost the battle! I'm sorry, but you have to go back to the room selection screen.\n\n");
			    return false;
		}
	    
	    if(current_enemy_HP <= 0)
		{
		        printf("CONGRATULATIONS! You won the battle and got the Telivision Troubles Medal. You will be taken back to the room selection screen.\n\n");
			    return true;
		}
	    
	  
	        
	    printf("\t\tJim The Knight's TURN!\n\n");
	    
	    if(!isEnemyConfused)
	    {
	    
	        int random_number = rand() % (2 - 1 + 1) + 1;
	    
	        printf("Jim The Knight used ");
	    
	        switch (random_number)
	        {
	            case 1:
	            {
	                int damage = rand() % (160 - 90 + 1) + 90;
	                current_player_HP -= damage;
	                printf("sword draw on you. You took %d damage.\n\n", damage);
	                break;
	            }
	        
	            case 2:
	            {
	                int damage = rand() % (140 - 120 + 1) + 120;
	                current_player_HP -= damage;
	                printf("a war hammer on you. You took %d damage.\n\n", damage);
	                break;
	            }
	        }
	    }
	    
	    else
	    {
	        printf("Jim The Knight has been confused, so his attacks will either hurt you or him. He could also do nothing if he wants.\n\n");
	        
	        int random_number = rand() % (3 - 1 + 1) + 1;
	    
	        printf("Jim The Knight used ");
	    
	        switch (random_number)
	        {
	            case 1:
	            {
	                int random_number = rand() % (2 - 1 + 1) + 1, damage = rand() % (160 - 90 + 1) + 90;
	                
	                if(random_number == 1)
	                {
	                    current_enemy_HP -= damage;
	                    printf("sword draw on HIMSELF (OH MY GOD)! He took %d damage.\n\n", damage);
	                    isEnemyConfused = false;
	                    
	                }
	                
	                else 
	                {
	                    current_player_HP -= damage;
	                    printf("sword draw on you. You took %d damage.\n\n", damage);
	                    isEnemyConfused = false;
	                    
	                }
	                
	                break;
	            }
	        
	            case 2:
	            {
	                int random_number = rand() % (2 - 1 + 1) + 1, damage = rand() % (220 - 120 + 1) + 120;
	                
	                if(random_number == 1)
	                {
	                    current_enemy_HP -= damage;
	                    printf("a war hammer on HIMSELF (OH MY GOODNESS)!. He took %d damage.\n\n", damage);
	                    isEnemyConfused = false;
	                    
	                }
	                
	                else 
	                {
	                    current_player_HP -= damage;
	                    printf("a war hammer on you. You took %d damage.\n\n", damage);
	                    isEnemyConfused = false;
	                    
	                }
	                
	                break;
	            }
	            
	            case 3:
	            {
	                printf("Jim The Knight decided to play it safe and do nothing.\n\n");
	                isEnemyConfused = false;
	                break;
	            }
	        }
	        
	    }
	        
	   

        
        
        if(current_player_HP <= 0)
		{
		        printf("Oh no! You lost the battle! I'm sorry, but you have to go back to the room selection screen.\n\n");
			    return false;
		}
	    
	    if(current_enemy_HP <= 0)
		{
		        printf("CONGRATULATIONS! You won the battle and got the Musical Madness Medal. You will be taken back to the room selection screen.\n\n");
			    return true;
		}
        
        printf("\t\tINCOMING STAGE HAZARD\n\nWhy is there a floating TV near us? What's happening?\n\n");
        
        int random_number = rand() % (3 - 1 + 1) + 1;
        
        switch (random_number)
	    {
	            case 1:
	            {
	                isPlayerConfused = true;
	                printf("That TV showed us a bunch of graphic horror TV shows! I feel so confused.\n\n");
	                break;
	            }
	        
	            case 2:
	            {
	                isEnemyConfused = true;
	                printf("Jim The Knight is getting confused from the graphic TV shows he watched from that TV. That's good for us.\n\n");
	                break;
	            }
	            
	            case 3:
	            {
	                printf("Huh? That TV was trying to shows us something, but it couldn't work.\n\n");
	                break;
	            }
	    }
	    
		
		isPlayerTurnOver = false;
	}
	
	

}

bool laughingLaboratory(int max_player_HP, int max_enemy_HP, int max_numOfPotions)
{
    char choice;
	int current_player_HP = max_player_HP, current_enemy_HP = max_enemy_HP, current_NumOfPotions = max_numOfPotions;
	bool isPlayerTurnOver = false, isPlayerWeakened = false, isPlayerDizzy = false;
	
    puts("It appears to be a laboratory, but why is everyone laughing? Is that...no it can't be,\n\n\t\tComedic Goofball:\n\t\tTalzeke The Clown\n\n");
	
	

	while(true)
	{
		    
	    while(!isPlayerTurnOver) 
	    {

		    printf("\t\tPLAYER'S TURN\n\nPLAYER\t\t\t\t\t\tTalzeke The Clown\nHP: %d/%d\t\t\t\t\tHP: %d/%d\nPotions: %d/%d\n\nA) Punch\tB) Kick\nC) Special\tD) Heal\n\n", current_player_HP, max_player_HP, current_enemy_HP, max_enemy_HP, current_NumOfPotions,max_numOfPotions);

		    printf("What will you do?: ");

		    scanf(" %c", &choice);

		    while(choice != 'A' && choice != 'a' && choice != 'B' && choice != 'b' && choice != 'C' && choice != 'c' && choice != 'D' && choice != 'd')
		    {
			    printf("Invalid choice. Please try again.\n\nWhat will you do?: ");
			    scanf(" %c", &choice);
		    }

		    switch(choice)
		    {
			    case 'A':
			    case 'a':
			    {
				    int damage = rand() % (130 - 90 + 1) + 90;
				    
				    if(isPlayerWeakened)
				    {
				        damage /= 2;
				        current_enemy_HP -= damage;
				        printf("You punched your enemy and dealt %d damage.\n\n", damage);
				    }
				    
				    else if(isPlayerDizzy)
				    {
				        int random_number = rand() % (2 - 1 + 1) + 1;
				        
				        if(random_number == 1)
				        {
				            printf("Your attack missed.\n\n");
				        }
				        
				        else
				        {
				            current_enemy_HP -= damage;
				            printf("You punched your enemy and dealt %d damage.\n\n", damage);
				            
				        }
				        
				    }
				    
				    else 
				    {
				        current_enemy_HP -= damage;
				        printf("You punched your enemy and dealt %d damage.\n\n", damage);
				    }
				    
				    isPlayerTurnOver = true;
				    
				    break;
			    }

			    case 'B':
			    case 'b':
			    {
				    int damage = rand() % (166 - 80 + 1) + 80;
				    
				    if(isPlayerWeakened)
				    {
				        damage /= 2;
				        current_enemy_HP -= damage;
				        printf("You kicked your enemy and dealt %d damage.\n\n", damage);
				    }
				    
				    else if(isPlayerDizzy)
				    {
				        
				        int random_number = rand() % (2 - 1 + 1) + 1;
				        
				        if(random_number == 1)
				        {
				            printf("Your attack missed.\n\n");
				        }
				        
				        else
				        {
				            current_enemy_HP -= damage;
				            printf("You kicked your enemy and dealt %d damage.\n\n", damage);
				            
				        }
				        
				    }
				    
				    else
				    {
                        current_enemy_HP -= damage;
                        printf("You kicked your enemy and dealt %d damage.\n\n", damage);
				    }
				    
                    isPlayerTurnOver = true;
				    break;
			    }

			    case 'C':
			    case 'c':
			    {
				    int random_number = rand() % (5 - 1 + 1) + 1, guessed_number;

				    printf("Guess the correct number from 1-5 to use your special attack: ");
				    scanf("%d", &guessed_number);

				    while (guessed_number < 1 || guessed_number > 5)
				    {
					    printf("OUT OF RANGE. Please try again.\n Guess the correct number from 1-5 to use your special attack: \n\n");
					    scanf("%d", &guessed_number);
				    }

				    if(guessed_number == random_number)
				    {
					    int damage = rand() % (130 - 100 + 1) + 100;
					    
					    if(isPlayerWeakened)
				        {
				            damage /= 2;
				        }
				    
					    current_enemy_HP -= damage;
					    printf("BOOYAH! You guessed it right and used your special attack against your opponent to deal %d damage.\n\n", damage);	     
				        isPlayerTurnOver = true;
				    }

				    else
				    {
					    printf("I'm sorry, but you guessed the number wrong. You lost your turn.\n\n");
					    isPlayerTurnOver = true;
				    }

				    break;
			    }

			    case 'D':
			    case 'd':
			    {
			    
			        if(current_player_HP == max_player_HP)
				    {
				        printf("Your HP is already full, so there is no need to heal.\n\n");
				    
				    }
				    else if(current_NumOfPotions > 0)
				    {
					    --current_NumOfPotions;
					    int HP_Healed = rand() % (135 - 90 + 1) + 100;
					    current_player_HP += HP_Healed;
					    
					    if(current_player_HP > max_player_HP)
					    {
					        current_player_HP = max_player_HP;
					    }
					    printf("You used a potion to heal %d HP\n\n", HP_Healed);
					    break;
				    }

				    else
				    {
					    printf("I'm sorry, but you don't have anymore potions, so you can't heal.\n\n");
				    }
				
			    break;
			    }
		    
		    }
	    }
		
		isPlayerWeakened = false;
		isPlayerDizzy = false;
	    
	    if(current_enemy_HP <= 0)
		{
		        printf("CONGRATULATIONS! You won the battle and got the Laughing Laboratory medal. You will be taken back to the room selection screen.\n\n");
			    return true;
		}
	    
	        
	   printf("\t\tTalzeke The Clown's TURN!\n\n");
	    
	   int random_number = rand() % (4 - 1 + 1) + 1;
	    
	   printf("Talzeke The Clown is telling a pun. He says: ");
	    
	   switch (random_number)
	   {
	       case 1:
	       {
	           printf("\"Water you waiting for? Let's get poppin'!\"\n\n");
	           int damage = rand() % (90 - 75 + 1) + 75;
	           current_player_HP -= damage;
	           isPlayerWeakened = true;
	           printf("He throws a water balloon on you. You took %d damage and you are weakened.\"\n\n", damage);
	           break;
	       }
	        
	       case 2:
	       {
	           printf("\"I don't just like boxing, I glove it!\"\n\n");
	           int damage = rand() % (100 - 60 + 1) + 60;
	           current_player_HP -= damage;
	           printf("He uses a boxing glove on you. You took %d damage and you are dizzy. It means that your punches and kicks could miss.\n\n", damage);
	           isPlayerDizzy = true;
	           break;
	       }
	        
	       case 3:
	       {
	           printf("\"That’s how the pie-face crumbles.\"\n\n");
	           int damage = rand() % (105 - 70 + 1) + 70;
	           current_player_HP -= damage;
	           current_enemy_HP += damage;
	           printf("He throws a vamp pie on yo FACE. You took %d damage and he healed all of that damage he did to you.\n\n", damage);
	           break;
	       }
	            
	       case 4:
	       {
	           printf("\"Looks like my joke wasn't the only one that fell off.\"\n\nOof! He fell down. He really is a goofball.\n\n");
	           break;
	       }
	   }
        
        if(current_player_HP <= 0)
		{
		        printf("Oh no! You lost the battle! I'm sorry, but you have to go back to the room selection screen.\n\n");
			    return false;
		}
        
		
		isPlayerTurnOver = false;
	}
}

bool spaceSpectacle(int max_player_HP, int max_enemy_HP, int max_numOfPotions)
{
    
    
    char choice;
	int current_player_HP = max_player_HP, current_enemy_HP = max_enemy_HP, current_NumOfPotions = max_numOfPotions;
	bool isPlayerTurnOver = false, isEnemyTurnOver = false;
	
    puts("Are we in space? This is crazy! And there are no battle gimmicks this time unlike the previous 4. It's just a ONE ON ONE battle against\n\n\t\tShadowy Duplicator:\n\t\tFury Shadow\n\nWAIT A MINUTE! He has all the same moves as you do and gets unlimited potions?! C'MON, that's not fair! We'll have to beat him as quick as we can before things get nasty.\n\n");
	
	

	while(true)
	{
		    
	    while(!isPlayerTurnOver) 
	    {

		    printf("\t\tPLAYER'S TURN\n\nPLAYER\t\t\t\t\t\tFury Shadow\nHP: %d/%d\t\t\t\t\tHP: %d/%d\nPotions: %d/%d\n\nA) Punch\tB) Kick\nC) Special\tD) Heal\n\n", current_player_HP, max_player_HP, current_enemy_HP, max_enemy_HP, current_NumOfPotions,max_numOfPotions);

		    printf("What will you do?: ");

		    scanf(" %c", &choice);

		    while(choice != 'A' && choice != 'a' && choice != 'B' && choice != 'b' && choice != 'C' && choice != 'c' && choice != 'D' && choice != 'd')
		    {
			    printf("Invalid choice. Please try again.\n\nWhat will you do?: ");
			    scanf(" %c", &choice);
		    }

		    switch(choice)
		    {
			    case 'A':
			    case 'a':
			    {
			        int damage = rand() % (265 - 175 + 1) + 175;
				    current_enemy_HP -= damage;
				    printf("You punched your enemy and dealt %d damage.\n\n", damage);
				    isPlayerTurnOver = true;
				    isEnemyTurnOver = false;
				    break;
				
			    }

			    case 'B':
			    case 'b':
			    {
				    int damage = rand() % (360 - 140 + 1) + 140;
				    current_enemy_HP -= damage;
                    printf("You kicked your enemy and dealt %d damage.\n\n", damage);
                    isPlayerTurnOver = true;
                    isEnemyTurnOver = false;
				    break;
			    }

			    case 'C':
			    case 'c':
			    {
				    int random_number = rand() % (5 - 1 + 1) + 1, guessed_number;

				    printf("Guess the correct number from 1-5 to use your special attack: ");
				    scanf("%d", &guessed_number);

				    while (guessed_number < 1 || guessed_number > 5)
				    {
					    printf("OUT OF RANGE. Please try again.\n Guess the correct number from 1-5 to use your special attack: \n\n");
					    scanf("%d", &guessed_number);
				    }

				    if(guessed_number == random_number)
				    {
					    int damage = rand() % (500 - 250 + 1) + 250;
				    
					    current_enemy_HP -= damage;
					    printf("BOOYAH! You guessed it right and used your special attack against your opponent to deal %d damage.\n\n", damage);	     
				        isPlayerTurnOver = true;
				        isEnemyTurnOver = false;
				    }

				    else
				    {
					    printf("I'm sorry, but you guessed the number wrong. You lost your turn.\n\n");
					    isPlayerTurnOver = true;
					    isEnemyTurnOver = false;
				    }

				    break;
			    }

			    case 'D':
			    case 'd':
			    {
			    
			        if(current_player_HP == max_player_HP)
				    {
				        printf("Your HP is already full, so there is no need to heal.\n\n");
				    
				    }
				    else if(current_NumOfPotions > 0)
				    {
					    --current_NumOfPotions;
					    int HP_Healed = rand() % (405 - 300 + 1) + 300;
					    current_player_HP += HP_Healed;
					    
					    if(current_player_HP > max_player_HP)
					    {
					        current_player_HP = max_player_HP;
					    }
					    printf("You used a potion to heal %d HP\n\n", HP_Healed);
				    }

				    else
				    {
					    printf("I'm sorry, but you don't have anymore potions, so you can't heal.\n\n");
				    }
				
			    break;
			    }
		    
		    }
	    }
	    
	    if(current_enemy_HP <= 0)
		{
		        printf("CONGRATULATIONS! You won the battle and got the Space Spectacle medal. You will be taken back to the room selection screen.\n\n");
			    return true;
		}
	    
	    while(!isEnemyTurnOver)
	    {
	        
	        printf("\t\tFury Shadow's TURN!\n\n");
	    
	        int random_number = rand() % (4 - 1 + 1) + 1;
	    
	        printf("Fury Shadow ");
	    
	        switch (random_number)
	        {
	            case 1:
	            {
	                int damage = rand() % (265 - 175 + 1) + 175;
	                current_player_HP -= damage;
	                printf("punched you in the face. You took %d damage.\n\n", damage);
	                isPlayerTurnOver = false;
	                isEnemyTurnOver = true;
	                break;
	            }
	        
	           case 2:
	           {
	                int damage = rand() % (360 - 140 + 1) + 140;
	                current_player_HP -= damage;
	                printf("kicked you in the shin. You took %d damage.\n\n", damage);
	                isPlayerTurnOver = false;
	                isEnemyTurnOver = true;
	                break;
	           }
	        
	           case 3:
	           {
	                printf("is guessing a number from 1-5 to do his special attack.\n\n");
	                int random_number = rand() % (5 - 1 + 1) + 1, guessed_number = rand() % (5 - 1 + 1) + 1;
	           
	                if(guessed_number == random_number)
	                {
	                    int damage = rand() % (500 - 250 + 1) + 250;
	                    current_player_HP -= damage;
	                    printf("Oh No! He guessed the number correct and used his special attack to deal %d damage to you.\n\n", damage);
	                    isPlayerTurnOver = false;
	                    isEnemyTurnOver = true;
	                }
	           
	                else
	                {
	                    printf("Oof! He guessed the number wrong and lost his turn. That's a good thing.\n\n");
	                    isPlayerTurnOver = false;
	                    isEnemyTurnOver = true;
	                }
	           
	                break;
	           }
	       
	           case 4:
	           {
	               printf("heals.\n\n");
	               if(current_enemy_HP == max_enemy_HP)
				    {
				        printf("But his HP is already full, so there is no need to heal.\n\n");
				    
				    }
				    else
				    {
					    int HP_Healed = rand() % (405 - 300 + 1) + 300;
					    current_enemy_HP += HP_Healed;
					    
					    if(current_enemy_HP > max_enemy_HP)
					    {
					        current_enemy_HP = max_enemy_HP;
					    }
					    printf("He healed %d HP\n\n", HP_Healed);
				    }
	                
	                break;
	           
	           }
	   }
        
            if(current_player_HP <= 0)
		    {
		        printf("Oh no! You lost the battle! I'm sorry, but you have to go back to the room selection screen.\n\n");
			    return false;
		    }
	    }

        

     }
}