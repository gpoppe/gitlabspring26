//Contributors
//GP
//Christine Pham
//GP+
//LS
//Ryan Rodriguez
//Anthony Farris
//Charles Parker
//Kristopher Willet
//Albert Bautista
//Kristopher Willett
//Nishat Nawshin
//Angel Martinez
//Dagmawe (Bobby) Afework
//Kenny Huynh

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>


//place function prototypes here
void khprinter(void);
void room44dice(int *playerhealth, int *playerwins);
void room44rps(int *playerhealth, int *playerwins);
void room4421(int *playerhealth, int *playerwins);
void room44coinflip(int *playerhealth, int *playerwins);
void room44cups(int *playerhealth, int *playerwins);

void ANFUN(void);
void cparkerFun(void);
void rgarcia_fun(void);
void ls(void);
void mnFun(void);
void JMfun(void);
void RRlab(void);
void jwFunc(void);
void jsl();
void dcFun(void);
void abFun(void);
void function13AG(void);
void theSigmaMethod(void);
void jbInit(void);
void ip21(void);
void folksamEV(void);
void sonionRH(void);
void ip21(void);
void rtFun(void);
void JLeyva(void);
void fish(void);
void printStudent30(void);
void printInitialsAjewett(void);
void jgFun(void);
void printInitialsSMarkos(void);
void brooklynstitt(void);
void PogoAM(void);
void aaGM(void);
void room49game(void);
void dleyva14(void);
void stanPush(void);
void printdAfeworkIntials(void);
void kwillett48(void);
void ncInitial(void);

int main(int argc, char *argv[])
{
	int choice = 0;
	char name[30] = "bob";
	srand(time(NULL));
	
	printf("Please enter your name: ");
	scanf("%s",name);
	printf("Hello %s welcome to THE RPG Game!\n",name);
	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
		puts("As you look around you see the room has 75 doors, each labeled with a number.");
		puts("The room starts filling with water and a loud voice tells you that you must choose a door to open and enter or you will likely drown. you may quit anytime by selecting option 99.");
		puts("What door do you choose?");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				puts("room1");
				break;
			}
			case 2:
			{
				puts("room2");
				break;
			}
			case 3:
			{
				cparkerFun();
				puts("room3");
				break;
			}
			case 4:
			{
				puts("room4");
				break;
			}
			case 5:
			{
				puts("room5");
				break;
			}
			case 6:
			{
				puts("room6");
				break;
			}
			case 7:
			{
				jwFunc();
				puts("room7");
				break;
			}
			case 8:
			{
				folksamEV();
				puts("room8");
				break;
			}
			case 9:
			{
				puts("room9");
				printInitialsAjewett();
				break;
			}
			case 10:
			{
				fish();
				puts("room10");
				break;
			}
			case 11:
			{
				dleyva14();
				puts("room11");
				break;
			}
			case 12:
			{
				ANFUN();
				puts("room12");
				break;
			}
			case 13:
			{
				function13AG();
				puts("room13");
				break;
			}
			case 14:
			{
				dcFun();
				puts("room14");
				break;
			}
			case 15:
			{
				ncInitial();
				puts("room15");
				break;
			}
			case 16:
			{
				puts("room16");
				break;
			}
			case 17:
			{
				jbInit();
				puts("room17");
				break;
			}
			case 18:
			{
				puts("room18");
				break;
			}
			case 19:
			{
				puts("room19");
				break;
			}
			case 20:
			{
				puts("room20");
				break;
			}
			case 21:
			{
				ip21();
				puts("room21");
				break;
			}
			case 22:
			{
				puts("room22");
				printdAfeworkIntials();
				break;
			}
			case 23:
			{
				puts("room23");
				break;
			}
			case 24:
			{
				JMfun();
				puts("room24");
				break;
			}
			case 25:
			{

				mnFun(); 
				puts("room25");
				break;
			}
			case 26:
			{
				puts("room26");
				break;
			}
			case 27:
			{
				puts("room27");
     				theSigmaMethod();
				break;
			}
			case 28:
			{
				puts("room28");
				break;
			}
			case 29:
			{	
				abFun();
				puts("room29");
				break;
			}
			case 30:
			{
				puts("room30");
				printStudent30();
				break;
			}
			case 31:
			{
				PogoAM();

				puts("room31");
				break;
			}
			case 32:
			{
				aaGM();
				puts("room32");
				break;
			}
			case 33:
			{
				puts("room33");
				break;
			}
			case 34:
			{
				puts("room34");
				break;
			}
			case 35:
			{
				sonionRH();
				puts("room35");
				break;
			}
			case 36:
			{
				puts("room36");
				break;
			}
			case 37:
			{
				puts("room37");
				break;
			}
			case 38:
			{
				puts("room38");
				break;
			}
			case 39:
			{
				puts("room39");
				break;
			}
			case 40:
			{      
                                ls();
				puts("room40");
				break;
			}
			case 41:
			{
				puts("room41");
				break;
			}
			case 42:
			{
				jgFun();
				puts("room42");
				break;
			}
			case 43:
			{
				puts("room43");
				stanPush();
				break;
			}
			case 44:
			{
				//srand(time(NULL));
				
				int inroom44 = 1;
				int playerhealth = 10;
				int playerwins = 0;
				int doorchoice = 0;
				
				//int playerdice[] = {1, 2, 3, 4, 5, 6};
				//int npcdice[] = {1, 2, 3, 4, 5, 6};
				//int npcloadeddice[] = {2, 2, 4, 4, 6, 6};
				//int playerdiceloss = 0;
				//char playerdicechoice[7];
				
				khprinter();

				/*
				
				if (playerhealth <= 0)
				{
					printf("You have lost all your health!\n");
					printf("You black out...\n You slowly open your eyes again.");
					break;
				}
				else if (playerwins >= 5)
				{
					break;
				}
				*/

				//puts("\nWelcome to Room  44");

				while (inroom44)
				{
					//choice screen 
					
					if (playerhealth <= 0)
					{
						printf("You have lost all your health!\n");
						printf("You black out...\n You slowly open your eyes again.");
						inroom44 = 0;
						break;
					}
                                
					/*
					else if (playerwins >= 5)
					{
						break;
					}
					*/

					printf("You entered through the door...\n");
					printf("Now there are more doors...\n"); 
					printf("5 of them all with different symbols on them.\n");
					printf("Which door will you choose?\n\n\n");
					
					if (playerwins <= 4)
					{
					
						printf("+---------------------------+\n");
						printf("|        Door Choice        |\n");
						printf("+---------------------------+\n");
						printf("|  1. Dice Door             |\n");
						printf("|  2. RPS Door              |\n");
						printf("|  3. Card  Door            |\n");
						printf("|  4. Coin Door             |\n");
						printf("|  5. Cups                  |\n");
						printf("|---------------------------|\n");			
						printf("|  6. Give Up               |\n");				
						printf("+---------------------------+\n");				
						printf("%d out of 5 wins to leave (repeating wins ok) \n", playerwins);									
						printf("Enter your choice (in number please): ");								
						scanf("%d", &doorchoice);
					}
					else
					{
 						printf("+---------------------------+\n");
						printf("|        Door Choice        |\n");
						printf("+---------------------------+\n");
						printf("|  1. Dice Door             |\n");
						printf("|  2. RPS Door              |\n");
						printf("|  3. Card  Door            |\n");
						printf("|  4. Coin Door             |\n");
						printf("|  5. Cups                  |\n");
						printf("|---------------------------|\n");
						printf("|  6. Give Up               |\n");
						printf("|---------------------------|\n");
						printf("|  7. Win and Leave         |\n");
						printf("+---------------------------+\n");
						printf("%d out of 5 wins to leave (repeating wins ok) \n", playerwins);
						printf("Enter your choice (in number please): ");
						scanf("%d", &doorchoice);

					}

				
					switch(doorchoice)
					{
						case 1:
							{
								room44dice(&playerhealth, &playerwins);
								break;
							}
						case 2:
							{
								room44rps(&playerhealth, &playerwins);
								break;
							}

						case 3:
	
							{
								room4421(&playerhealth, &playerwins);
								break;
							}
						case 4:
							{
								room44coinflip(&playerhealth, &playerwins);
								break;
							}

						case 5:
			
							{

								room44cups(&playerhealth, &playerwins);
								break;
							}

						case 6:
				
							{
					
								printf("You gave up");
								inroom44 = 0;
								break;
							}
						case 7:
							{
								//printf("\nCongratz!!!! YOU WIN!\n");
  								
								printf("___  _ ____  _       _      ____  _      _  _  _ \n");
								printf("\\  \\///  _ \\/ \\ /\\  / \\  /|/  _ \\/ \\  /|/ \\/ \\/ \\\n");
								printf(" \\  / | / \\|| | ||  | |  ||| / \\|| |\\ ||| || || |\n");
								printf(" / /  | \\_/|| \\_/|  | |/\\||| \\_/|| | \\||\\_/\\_/\\_/\n");
								printf("/_/   \\____/\\____/  \\_/  \\|\\____/\\_/  \\|(_)(_)(_)\n");
								printf("                                                 \n");
								printf(" ____  ____  _      _____ ____  ____ _____ ____  \n");
								printf("/   _\\/  _ \\/ \\  /|/  __//  __\\/  _ Y__ __Y_   \\ \n");
								printf("|  /  | / \\|| |\\ ||| |  _|  \\/|| / \\| / \\  /   / \n");
								printf("|  \\__| \\_/|| | \\||| |_//|    /| |-|| | | /   /_ \n");
								printf("\\____/\\____/\\_/  \\|\\____\\\\_/\\_\\\\_/ \\| \\_/ \\____/ \n");
								printf("                                                  \n");

								inroom44 = 0;	
								break;
							}
					}
				}

				/*
				printf("\nYou appear into a dimly lit room with nothing but a table in the center with a person standing behind it. The room is to dark for you to see their face put they invite you with gestures to the table. It appears to be a game of dice.");
				printf("\nThe stranger shows you your dice and theirs. You decide to try it.");
				
				while (playerhealth > 0)
				{	
					printf("\nEnter your choice: \"roll\" or \"observe\" or \"return\"\n\n");
					scanf("%s", playerdicechoice);
					printf("\nYou chose: %s\n", playerdicechoice);

					
					if (strcmp(playerdicechoice, "return") == 0)
					{
						break;
					}
					else if (strcmp(playerdicechoice, "roll") == 0)
				
					{
   						printf("You roll!\n");
						
						int playerroll = playerdice[rand() % 6];
						int npcroll = npcloadeddice[rand() % 6];
						printf("You rolled: %d\n", playerroll);
						printf("Opponent rolled: %d\n", npcroll);

						if (playerroll > npcroll)
						{
							printf("You win this round!\n");
							playerwins++;
						}
						else if (playerroll < npcroll)
						{
							printf("You lose this round!\n");
							playerhealth--;
							playerdiceloss++;
						}
						else
						{
							printf("It's a tie!\n");
						}
						
						printf("Health: %d | Wins: %d\n", playerhealth, playerwins);

						if (playerhealth <= 0)
						{
							printf("You have lost all your health!\n");
							break;
						}
					}
				
					else if (strcmp(playerdicechoice, "observe") == 0)
				
					{
    						printf("You observe...\n");

						if (playerdiceloss <= 2)
						{
							printf("Everything looks normal\n");
						}
						else if (playerdiceloss <= 4)
						{
							printf("You notice the opponents dice always land on even numbers.\n");
						}
						else if (playerdiceloss >=6)
						{
							printf("THOSE ARE LOADED DICE!!!\n");
						}
						else
						{
							printf("Something doesn't seem right");
						}

					}
				
					else
				
					{
				       		printf("Invalid choice. Please enter a correct one. \n");
					}
			
				*/	
			//	}
				
				break;
			}
			case 45:
			{
				puts("room45");
				brooklynstitt();
				break;
			}
			case 46:
			{
				puts("room46");
				break;
			}
			case 47:
			{
				rgarcia_fun();
				puts("room47");
				break;
			}
			case 48:
			{
				kwillett48();
				puts("room48");
				break;
			}
			case 49:
			{
				puts("room49");
				room49game();
				break;
			}
			case 50:
			{
				puts("room50");
				break;
			}
			case 51:
			{
				puts("room51");
				break;
			}
			case 52:
			{
				puts("room52");
				break;
			}
			case 53:
			{
				puts("room53");
				break;
			}
			case 54:
			{
				puts("room54");
				break;
			}
			case 55:
			{
				puts("room55");
				break;
			}
			case 56:
			{
                                JLeyva();
				puts("room56");
                                break;
			}
			case 57:
			{
				rtFun();
                                puts("room57");
                                break;
			}
			case 58:
			{
				printInitialsSMarkos();
                                puts("room58");
                                break;
			}
			case 59:
			{
				jsl();
                                puts("room59");
                                break;
			}
			case 60:
			{
				puts("room60");
                                break;
			}
			case 61:
			{
				RRlab();
                                puts("room61");
                                break;
			}
			case 62:
			{
                                puts("room62");
                                break;
			}
			case 63:
			{
                                puts("room63");
                                break;
			}
			case 64:
			{
                                puts("room64");
                                break;
			}
			case 65:
			{
                                puts("room65");
                                break;
			}
			case 66:
			{
                                puts("room66");
                                break;
			}
			case 67:
			{
                                puts("room67");
                                break;
			}
			case 68:
			{
                                        
                    
                                puts("room68");
                                break;
			}
			case 69:
                        {
                                puts("room69");
                                break;
                        }
			case 70:
                        {
                                puts("room70");
                                break;
                        }
			case 71:
                        {
                                puts("room71");
                                break;
                       }
			case 72:
                        {
                                puts("room72");
                                break;
                        }
			case 73:
                        {
                                puts("room73");
                                break;
                        }
			case 74:
                        {
                                puts("room74");
                                break;
                        }
			case 75:
                        {
                                puts("room75");
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

//place function definitions below this comment


void room49game(void)
{
	printf("G.C\n");
}

void mnFun(void)
{
	puts("MNroom25");
}



//place functions here
//
void cparkerFun(void)
{
	printf("C P\n");
}
void rgarcia_fun(void)
{
	printf("RJG");
}



void ls(void)
{
	printf("LS\n");
       
}
void JMfun(void)
{
	printf("JM");
}


void RRlab(void)
{
	printf("RRroom61\n");
}


void jwFunc(void)
{
	printf("JW\n");
}



void jsl(void)
{
	printf("JSL\n");
}

void khprinter(void)
{
	printf("KDH\n");
}

void room44dice(int *playerhealth, int *playerwins)
{
	int playerdice[] = {1,2,3,4,5,6};
	int npcloadeddice[] = {2,2,4,4,6,6};
	int playerdiceloss = 0;
	char playerdicechoice[20];
	
	printf("\nYou appear into a dimly lit room with nothing but a table in the center with a person standing behind it. The room is to dark for you to see their face put they invite you with gestures to the table. It appears to be a game of dice.");
	
	printf("\nThe stranger shows you your dice and theirs. You decide to try it.");


	while (*playerhealth > 0)
    {
	    printf("\nEnter choice: roll / observe / return\n");
	    scanf("%s", playerdicechoice);
	  
	    if (strcmp(playerdicechoice, "return") == 0) 
	   
	    {
		   return;
		   // break;
	    }
	   
	    else if (strcmp(playerdicechoice, "roll") == 0)
	   
	    {
		    int playerroll = playerdice[rand() % 6];
		    int npcroll = npcloadeddice[rand() % 6];
		    printf("You rolled: %d\n", playerroll);
		    printf("NPC rolled: %d\n", npcroll);
		    
		    if (playerroll > npcroll)
		    {
			    (*playerwins)++;
			    printf("You win!\n");
		    }
		    
		    else if (playerroll < npcroll)
		    {
			    (*playerhealth)--;
			    playerdiceloss++;
			    printf("You lose!\n");
		    }
		    
		    printf("Health: %d | Wins: %d\n", *playerhealth, *playerwins);
		    
		    if (*playerhealth <= 0)
		    {
			    printf("You have lost all your health!\n");
			    break;
		    }
	    }
	    
	    else if (strcmp(playerdicechoice, "observe") == 0)
	    
	    {
		    printf("You observe...\n");

		    if (playerdiceloss <= 2)

		    {
			    printf("Everything looks normal\n");
		    }
		    else if (playerdiceloss <= 4)

		    {
			    printf("You notice the opponents dice always land on even numbers.\n");
		    }
		    else if (playerdiceloss >=6)

		    {
			    printf("THOSE ARE LOADED DICE!!!\n");
		    }
		    else

		    {
			    printf("Something doesn't seem right");
		    }
	    }
	    else
	    {
		    printf("Invalid choice. Please enter a correct one. \n");
	    }
    }
}

void room44rps(int *playerhealth, int *playerwins)
{
	int playerscore = 0;
	int npcscore = 0;
	int playerchoice;
	int npcchoice;
	
	printf("\nYou approach a shadowy figure with a coke can and cheetos in his hand.\n");
	printf("They challenge you to Rock Paper Scissors.\n");
	printf("First to 2 wins leaves victorious.\n");

	while (playerscore < 2 && npcscore < 2)
	{
		printf(" \n");
		printf("+----------------+\n");
		printf("|      Choose    |\n");
		printf("+________________+\n");
		printf("|                |\n");
		printf("|1. Rock         |\n");
		printf("|                |\n");
		printf("|2. Paper        |\n");
		printf("|                |\n");
		printf("|3. Scissors     |\n");
		printf("|                |\n");
		printf("+----------------+\n");

		printf("Enter Choice (numbers please): ");
		scanf("%d", &playerchoice);

		npcchoice = rand() % 3 + 1;

		if (playerchoice == 99)
                {
			//should not be visable to player.
			
			printf("returning...");
			return;
                }    
		
		printf("Shadowy figures chose: ");
		
		if (npcchoice == 1)
		{
			printf("ROCK\n");
		}
		
		else if (npcchoice == 2)
       		{
			printf("PAPER\n");
	       	}
	       
		else if (npcchoice == 3)
        	{
			printf("SCISSOR\n");
		}
	
		if (playerchoice == npcchoice)
		{	
			printf("Tie!\n");
		}
		
		else if ((playerchoice == 1 && npcchoice == 3) || (playerchoice == 2 && npcchoice == 1) || (playerchoice == 3 && npcchoice == 2))
	       
		{
			printf("You win this round!\n");
			playerscore++;
		}
		else
	 	{
	    		printf("You lose this round!\n");
	    		npcscore++;
		}
	       
		printf("Score → You: %d | NPC: %d\n", playerscore, npcscore);
       	}
      
	if (playerscore == 2)
       	{
	       	printf("\nYou won the match!\n");
	       	(*playerwins)++;
       	}
	else
       	{
	      	printf("\nYou lost the match...\n");
	       	(*playerhealth)--;
       	}
	
	printf("Health: %d | Wins: %d\n", *playerhealth, *playerwins);
}

void room4421(int *playerhealth, int *playerwins)
{
	int playertotal = 0;
	int dealertotal = 0;
	int choice;
	
	printf("\nYou approach a shadowy figure...\n");
	printf("They challenge you to BLACK JACK.(VERY SIMPLIFIED)\n");
	printf("One game. All of nothing.\n\n");

	int playercard1 = rand() % 10 + 1;
	int playercard2 = rand() % 10 + 1;
	playertotal = playercard1 + playercard2;

	int dealercard1 = rand() % 10 + 1;
	int dealercard2 = rand() % 10 + 1;
	dealertotal = dealercard1 + dealercard2;

	printf("---------------------\n");
	printf("Your total: %d\n", playertotal);
	printf("---------------------\n");
	//easiest way to reveal 1 card
	printf("Dealer reveals: %d\n", dealercard1);
	printf("---------------------\n");
	
	//player
	while (playertotal < 21)
	{
		printf("\n");
		printf("+-------------------------+\n");
		printf("|          CHOSE          |\n");
		printf("+-------------------------+\n");
		printf("|                         |\n");
		printf("|1. HIT                   |\n");
		printf("|                         |\n");
		printf("|2. STAND                 |\n");
		printf("|                         |\n");
		printf("|99. RETURN               |\n");
		printf("|_________________________|\n");
		printf(" Choice: ");

		scanf("%d", &choice);

		if (choice == 99)
		{
			printf("You ran away.");
			return;
		}
		
		if (choice == 1)
		{
			int card = rand() % 10 + 1;
			playertotal += card;

			printf("You drewl %d\n", card);
			printf("Your total: %d\n", playertotal);

			if (playertotal >21)
			{
				  printf("You busted!\n");
				  (*playerhealth)--;
				  printf("You got punched in the face!\n");
				  printf("You loss 1 health and stumbled to a door.\n");
				  printf("Health: %d | Wins: %d\n", *playerhealth, *playerwins);
				  return;
			}
		}
		
		else if (choice == 2)
	 	{
	    		break;
	       	}
		
		else
	       	{
	    		printf("Invalid choice.\n");
		}
	}
	
	//dealr
	
	printf("\nDealer's turn...\n");
	printf("Dealer total: %d\n", dealertotal);

    	while (dealertotal < 18)
    	{
		int card = rand() % 10 + 1;
		dealertotal += card;
		printf("Dealer draws: %d (Total: %d)\n", card, dealertotal);
       	}

    //winner
    if (dealertotal > 21 || playertotal > dealertotal)
    {
        printf("\nYou win the game!\n");
        printf("You victoriously approached a door\n");
	(*playerwins)++;
    }
    else if (playertotal < dealertotal)
    {
        printf("\nDealer wins...\n");
       	printf("You got punched in the face!\n");
	printf("You loss 1 health and stumbled through a door.\n");
       	(*playerhealth)--;
    }
    else
    {
        printf("\nIt's a tie!\n");
    }

    printf("Health: %d | Wins: %d\n", *playerhealth, *playerwins);
}

void  room44coinflip(int *playerhealth, int *playerwins)
{	
	int playerscore = 0;
	int npcscore = 0;
	int playerchoice;
	int coin;
	
	printf("\nA hooded figure pulls out a coin...\n");
	printf("First to 2 wins.\n");
      	/*
	printf("+-------------------------+\n");
	printf("|          CHOSE          |\n");
	printf("+-------------------------+\n");
	printf("| 1.  Heads               |\n"); 
	printf("|-------------------------|\n");
	printf("| 2.  Tails               |\n");
	printf("|-------------------------|\n");
	printf("| 99, Return              |\n");
	printf("|_________________________|\n");
	*/

	while (playerscore < 2 && npcscore <2)
	{
		printf("+-------------------------+\n");
		printf("|          CHOSE          |\n");
		printf("+-------------------------+\n");
		printf("| 1.  Heads               |\n"); 
		printf("|-------------------------|\n");
		printf("| 2.  Tails               |\n");
		printf("|-------------------------|\n");
		printf("| 99, Return              |\n");
		printf("|_________________________|\n");
		printf("\nChoose Heads or Tails (numbers only): ");
		scanf("%d",&playerchoice);

		if (playerchoice == 99)
		{
			printf("You chickened out...\n");
			return;
		}

		else if (playerchoice != 1 && playerchoice != 2)
		{
			printf("Enter a correct choice dummy.\n");
		}

		else
		{
			coin = rand() % 2 + 1;

			printf("The coin lands on...");
			if (coin == 1)
			{
				printf("HEADS\n");
			}

			else
			{
				printf("TAILS\n");
			}

			if (playerchoice == coin)
			{
				printf("You win this round!\n");
				playerscore++;
			}

			else
			{
				printf("You loose this round!\n");
				npcscore++;
			}

			printf("Score → You: %d | Opponent: %d\n", playerscore, npcscore);
		}
	}

	if (playerscore == 2)
	{
		printf("You won the match!\n");
		(*playerwins)++;
	}
	
	else
	{
		printf("You lost the match...\n");
		(*playerhealth)--;
	}
	
	printf("\n");
	printf("----------------------------\n");
	printf("Health: %d | Wins: %d\n", *playerhealth, *playerwins);
	printf("----------------------------\n");
	printf("You approach a door.\n");


}

void room44cups(int *playerhealth, int *playerwins)
{
	int ballposition;
	int guess;
    
	printf("\nA shadowy figure places a ball under one of three cups...\n");
	printf("Pick the correct cup and win.\n");
  	printf("1, 2, 3 or 99 to return.\n");
       
	ballposition = rand() % 3 + 1;   // 1–3


	printf("\n");
	printf("+-----------+\n");
	printf("| 1 | 2 | 3 |\n"); 
	printf("+-----------+\n");
	printf("Your guess (in numbers please): ");
	
	scanf("%d", &guess);
       
	if (guess == 99)
    	{
	    	printf("You step away from the table...\n");
		return;
	}

    	if (guess < 1 || guess > 3)
      	{
	       	printf("Invalid choice.\n");
		return;
       	}
	
	printf("The ball was under cup %d.\n", ballposition);
       
	if (guess == ballposition)
    	{
	    	printf("You guessed correctly!\n");
		(*playerwins)++;
	}
	
	else
       	{
	       	printf("Wrong cup...\n");
		(*playerhealth)--;
       	}
    
	printf("\n");
	printf("----------------------------\n");
	printf("Health: %d | Wins: %d\n", *playerhealth, *playerwins);
	printf("----------------------------\n");
	printf("You approach a door.\n");

}

void PogoAM(void)
{
	printf("AM\n");
}
void dcFun(void)
{
	printf("DC\n");
}




void function13AG(void)
{
	printf("AG\n");
}
void abFun(void)
{
	printf("AB");
}



void theSigmaMethod(void)
{
  printf("J.Q.\n");

}


void folksamEV(void) 
{
	printf("EV\n");
}

void sonionRH(void) 
{
	printf("RAOOL-HIG\n");
}

void jbInit()
{
	puts("jbRoom17");
}

// Case 45:
void brooklynstitt(void)
{
	printf("Initials: BAS\n\n");
}

void ip21(void)
{
	printf("IP\n");
}

void rtFun(void)
{
	printf("RT");
}

void JLeyva(void)
{
	printf("JL");
}

void fish(void) 
{
	printf("JF");

}

void printStudent30(void)
{
	printf("Student initials CP\n");
}

void printInitialsAjewett(void)
{
	printf("AJ\n");
}

void jgFun(void)
{
	printf("JGB");	

}

void printInitialsSMarkos(void) 
{
	printf("SM\n");
}

void aaGM(void)
{
	printf("AA\n");
}

void ANFUN(void)
{
    printf("AN");
}
void dleyva14(void)
{
	printf("DL\n");
}

void printdAfeworkIntials(void)
{
	puts("DA");
}


void kwillett48(void)
{
	printf("KDW");
}

void ncInitial(void)
{
	printf("NC");
}



void stanPush(void)
{
	puts(" S J \n");
}

