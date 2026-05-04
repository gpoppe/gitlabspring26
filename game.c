//Contributors
//GP+
//LS
//Ryan Rodriguez
//Anthony Farris
//Charles Parker
//Kristopher Willet
//Albert Bautista
//
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
void khprinter(void);

void ANFUN(void);
void dcFunc(void);
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
void AMaderaFun(void);
void CAYfrog(void);
void afFun(void);  
void jmItsGoTime(void);
void stanPush(void);
void printdAfeworkIntials(void);
void kwillett48(void);
void ncInitial(void);
void mtorres(void);
void hOsuna(void);


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
				CAYfrog();
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
				dcFunc();
				puts("room19");
				break;
			}
			case 20:
			{
				AMaderaFun();
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
				puts("room29");
				abFun();
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
				mtorres();
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
				khprinter();
				puts("room44");
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
				afFun();
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
				jmItsGoTime();
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
				hOsuna();
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


void afFun(void)
{ 
	puts("AFroom52");
}
void dcFunc(void)
{
    printf("DCroom19\n");
}


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

void AMaderaFun(void)
{
	printf("AMadera\n");
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
	printf("KDH");
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
	printf("AB\n");

	int choice = 0;
	int danger[5] = {1, 2, 3, 4, 5};
	int health = 100;

	printf("\nYou find yourself in a zombie apocalypse.\n");
	printf("Make the right choices to survive!\n");
	printf("Health: %d\n", health);

	// Choice 1
	printf("\nYou hear a survivor screaming for help\n");
	printf("1. Help the survivor? (1 = yes, 0 = no)\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	while(choice != 0 && choice != 1)
	{
		printf("Invalid input. Enter 1 or 0: ");
		scanf("%d", &choice);
	}

	if(choice == 1)
	{
		if(danger[rand() % 5] <= 4)
		{
			printf("\nYou save the survivor. He thanks you and gives you a health pack for your help\n");
			printf("You gain +20 health\n");
			health += 20;
			printf("Health: %d\n", health);
		}
		else
                {
                        printf("\nYou try to save the survivor but he is overrun and killed by zombies. You get hurt, but manage to escape.\n");
			printf("You lose -20 health\n");
                        health -= 20;
                        printf("Health: %d\n", health);
                }
	}
	else
	{
		printf("The survivor is overrun by zombies and dies\n");
	}

	// Choice 2
        printf("\nIt's starting to get dark, and you need to rest. You stumble upon an eerie building that you could potentially sleep for the night. \n");
        printf("2. Sleep at this building? (1 = yes, 0 = no)\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        while(choice != 0 && choice != 1)
        {
                printf("Invalid input. Enter 1 or 0: ");
                scanf("%d", &choice);
        }

        if(choice == 1)
        {
                if(danger[rand() % 5] <= 3)
                {
                        printf("\nYou enter the building and sleep soundly. You wake up the next morning and feel well rested\n");
                        printf("You gain +20 health\n");
                        health += 20;
                        printf("Health: %d\n", health);
                }
                else
                {
                        printf("\nYou enter the building and sleep. Your sleep is interrupted by a loud growl, you were not alone...\n");
			printf("You swiftly try to escape the building, but are bit by a zombie on the way out.\n");
                        printf("You lose -20 health\n");
                        health -= 20;
                        printf("Health: %d\n", health);
                }
        }
        else
        {
                printf("You do not get sleep for the night, and feel weak by next morning.\n");
		printf("You lose -10 health\n");
		health -= 10;
        }
	
	// Choice 3
        printf("\nAs you explore the city, you begin to feel hungry. You stumble across a convenience store. While looting the scarce supplies, you find some expired canned food\n");
        printf("3. Eat the expired food? (1 = yes, 0 = no)\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        while(choice != 0 && choice != 1)
        {
                printf("Invalid input. Enter 1 or 0: ");
                scanf("%d", &choice);
        }

        if(choice == 1)
        {
                if(danger[rand() % 5] <= 2)
                {
                        printf("\nYou eat the food and feel feel satiated. The food was expired, but still edible.\n");
                        printf("You gain +20 health\n");
                        health += 20;
                        printf("Health: %d\n", health);
                }
                else
                {
                        printf("\nYou eat the food and feel satiated. Later in the day you begin to feel sick, and you throw up the food you ate.\n");
                        printf("You lose -20 health\n");
                        health -= 20;
                        printf("Health: %d\n", health);
                }
        }
        else
        {
                printf("You do not eat the expired food, but your hunger remains.\n");
                printf("You lose -10 health\n");
                health -= 10;
        }

	// Choice 4
        printf("\nAfter days of roaming, you eventually find yourself in the woods in the dead of night. You feel cold, and see some sticks you could use to make a campfire.\n");
        printf("4. Make a campfire? (1 = yes, 0 = no)\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        while(choice != 0 && choice != 1)
        {
                printf("Invalid input. Enter 1 or 0: ");
                scanf("%d", &choice);
        }

        if(choice == 1)
        {
                if(danger[rand() % 5] <= 3)
                {
                        printf("\nYou make a campfire and stay warm for the night.\n");
                        printf("You gain +20 health\n");
                        health += 20;
                        printf("Health: %d\n", health);
                }
                else
                {
                        printf("\nYou make a campfire. The campfire attracts the attention of bandits. The bandits attack you and steal your belongings, but you make it out alive.\n");
                        printf("You lose -20 health\n");
                        health -= 20;
                        printf("Health: %d\n", health);
                }
        }
        else
        {
                printf("You do not make a campfire, and shiver through the cold night.\n");
                printf("You lose -10 health\n");
                health -= 10;

        }
	
	 // Choice 5
        printf("\nYou see flyers and posters about a CDC evacuation site. You hear rumors that only those who are healthy are allowed entry.\n");
        printf("5. Go to the evacuation site? (1 = yes, 0 = no)\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        while(choice != 0 && choice != 1)
        {
                printf("Invalid input. Enter 1 or 0: ");
                scanf("%d", &choice);
        }

        if(choice == 1)
        {
                if(health >= 100)
                {
                        printf("\nYou make it to the CDC evacuation site. You are inspected people in hazmat suits, and they determine you are infected.\n");
			printf("However, you have good health. You are given the cure, and escorted to a helicopter. You escape the Zombie Apocalypse Alive!\n");
                }
                else
                {
                        printf("\nYou make it to the CDC evacuation site. You are inspected people in hazmat suits, and they determine you are infected.\n");
			printf("However, you have bad health. You are denied the cure and entry to the evacuation site.\n");
		       	printf("You are devastated, and begin to feel like you are losing control over your body...\n");
                }
        }
        else
        {
                if(health >= 100)
		{
			printf("You choose to not go to the evacuation site, and continue living as a nomad in this Zombie Apocalypse.\n");
			printf("You don't know where you're heading, but you know you have what it takes to survive...\n");
		}
		else
		{
			printf("You choose to not go to the evacuation site, but you feel like you are beginning to lose control over your body.\n");
			printf("You barricade yourself inside of a safe room, as you wait for the worst...\n");
		}
        }	
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

void CAYfrog(void)
{
	printf("CAY");
}

void jmItsGoTime(void)
{
	printf("JM\n");
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

void mtorres(void)
{
	printf("MT");
}


void hOsuna(void)
{
        printf("\nHAO\n");
}



void stanPush(void)
{
	puts(" S J \n");
}


