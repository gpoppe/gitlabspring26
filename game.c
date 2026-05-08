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
//John Keroles 
//Dagmawe (Bobby) Afework
//YaYu Wang
//Danya Leyva
// Neal Hannon
//Alejandro Garcia
//Nathaniel Corteza
//Meretrout(J.Q)
//Ivan Peralta
//Dominic Carreto
//Fernando Gomez






#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>


//place function prototypes here
void khprinter(void);
void coolGame(void);
int iAmLazy(int);

//dcortez function prototypes 
void ANFUN(void);
void dcFunc(void);
void dcFuncEnding(int rep[], char *factions[]);

void cparkerFun(void);
void rgarcia_fun(void);
void ls(void);
void mnFun(void);
void JMfun(void);
void RRlab(void);
void RyansRoom(int inventoryRR[]);
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
void gameroom30(void);

void printInitialsAjewett(void);
void startRoom9(void);

void jgFun(void);
void room58SM(void);
int getLitCount58SM(int candles[]);
void brooklynstitt(void);
void PogoAM(void);
void aaGM(void);
void room49game(void);
void dleyva14(void);

void sgarcia6(void);
void GuckMan(void);

void AMaderaFun(void);
void CAYfrog(void);
void afFun(void);  
void jmItsGameTime(void);
void stanPush(void);
void printdAfeworkIntials(void);
void kwillett48(void);
void ncInitial(void);

void phas22(void);

void RT_room57(void);
void RT_playCupRound(void);
void mtorres(void);
void hOsuna(void);
void nnawshin(void);
void WMRoom(void);
void act1Version(void);

void nhfun(void);
void printInitialsAngelM(void);

void dGMyName(void);
bool pinballPark(int max_player_HP, int max_enemy_HP, int max_numOfPotions);
bool musicalMadness(int max_player_HP, int max_enemy_HP, int max_numOfPotions);
bool televisionTroubles(int max_player_HP, int max_enemy_HP, int max_numOfPotions);
bool laughingLaboratory(int max_player_HP, int max_enemy_HP, int max_numOfPotions);
bool spaceSpectacle(int max_player_HP, int max_enemy_HP, int max_numOfPotions);

void showStarterInfo(int choice);
int jwStory(void);
bool getChoiceDL(void);
void jkFun(void);
void jkRoom41(void); 

void printInFG(void);
void showStats(int Intelligence, int Reconnaissance, int fleetStrength, int Midway, int carrierDamage, int carrierLocated, int fighterSupport, int midwayCaptured);
void intelligenceRoom(int *Intelligence, int *fleetStrength);
void reconnaissanceRoom(int *Reconnaissance, int *carrierLocated, int *fleetStrength, int carrierDamage);
int calCarrierAttack(int Intelligence, int Reconnaissance, int carrierLocated, int fighterSupport);
void carrierDeck(int Intelligence, int Reconnaissance, int carrierLocated, int fighterSupport, int *carrierDamage, int *midwaydDamage, int *fleetStrength);
void fighterCommand(int *fighterSupport, int *fleetStrength);
void invasionPlanningRoom(int *midwayDamage, int carrierDamage, int *fleetStrength, int *midwayCaptured);
void enemyCounterAttack(int *fleetStrength, int Intelligence, int Reconnaissance, int fighterSupport);
void showFinalResult(int fleetStrength, int midwayDamage, int carrierDamage, int carrierLocated, int midwayCaptured);



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
				sgarcia6();
				puts("room6");
				break;
			}
			case 7:
			{
				jwStory();
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
				puts("room9 ");
				printInitialsAjewett();
				startRoom9();
				printf("And with that you exit room 9.\n");
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
                int userChoice[1] = {0};
                printf("\nYou open door 14 and the entrance is glowing. You step forward with your eyes covered.");
                printf("\nYou uncover your eyes and see that you are in a forest in the middle of the night.");
                printf("\nYou look around you and you are surrounded by trees but you are currently at a camp site.");
                printf("\nYou see that in the middle is a fire and next to you is a backpack.");
                printf("\nYou also noticed that the door you walked to is gone.");
                printf("\nAs you are looking at your surroundings a bear appears and is approaching you.");
                printf("\nYou look at what you can do and you have 3 options.");
                printf("\n\t1. You can make yourself look \"big\".");
                printf("\n\t2. Get something that is potentially useful from the backpack next to you.");
                printf("\n\t3. You can run away.\n");
                printf("Select an option: ");
                scanf("%d",&userChoice[0]);
                while(userChoice[0] != 1 && userChoice[0] != 2 && userChoice[0] != 3)
                {
                    printf("\nInvalid choice. Please enter a valid number: ");
                    scanf("%d",&userChoice[0]);
                }
                if(userChoice[0] == 1)
                {
                    printf("\nYou make yourself look big by spreading your arms and legs out.");
                    printf("\nYou are nervous but are willing to stay still to survive.");
                    printf("\nBecause you are \"bigger\" the bear ignores you and walks away.");
                }
                if(userChoice[0] == 2)
                {
                    int randomNum = (rand() % 3) + 1;
                    /*   Generates a number between 1 - 3 because the user is getting something quickly from the backpack
                     *   and is not looking at what they got since they needed something quickly, so the item is random
                     */
                    if(randomNum == 1)
                    {
                        printf("\nYou grab something quickly from the backpack and you got a flashlight.");
                        printf("\nYou look at the bear and the bear looks at you...");
                        printf("\nYou turn on the flashlight but find out it doesn't have the batteries on it.");
                        printf("\nThe bear jumps at you and bites you.");
                        printf("\nYou scream in agony while the bear bites you.");
                        printf("\nYour vision turns red as you lose consciousness and die.");
                        printf("\n\n-----------------------------GAME OVER------------------------------\n\n");
                        break;
                    }
                    if(randomNum == 2)
                    {
                        printf("\nYou grab something quickly from the backpack and you got bear spray.");
                        printf("\nYou react quickly and use the bear spray on the bear.");
                        printf("\nThe bear screams and runs away from your camp site.");
                    }
                    if(randomNum == 3)
                    {
                        printf("\nYou grab something quickly from the backpack and you got a sandwich.");
                        printf("\nThe bear is very hungry so it bit your hand that was holding the sandwich.");
                        printf("\nThe bear walks away satisfied.");
                        printf("\nYou scream and lose consciousness slowly due to the blood lose.");
                        printf("\n\n-----------------------------GAME OVER------------------------------\n\n");
                        break;
                    }
                }
                if(userChoice[0] == 3)
                {
                    printf("\nYou run away into the dark forest full of trees.");
                    printf("\nAs you were running you fall due to a branch on the forest floor you didn't see due to the darkness.");
                    printf("\nYou turn around and see that the bear is right behind you looking down at you.");
                    printf("\nThe bear jumps at you and bites you while you are on ground.");
                    printf("\nYou scream in agony while the bear bites you.");
                    printf("\nYour vision turns red as you lose consciousness and die.");
                    printf("\n\n-----------------------------GAME OVER------------------------------\n\n");
                    break;
                }
                printf("\nYou are relived of the terrifying encounter you just experienced.");
                printf("\nYou look at the backpack and grab the flashlights and put in the batteries");
                printf("\nYou put on the backpack and prepare to walk to the deep forest since the area is dangerous");
                printf("\nYou turn on the flashlight and walk to the deep forest trusting your gut.");
                printf("\n10 minutes pass and you are still in the forest looking for a way to get out of this dimension like space.");
                printf("\nAfter walking for a while you encounter an abandoned cabin.");
                printf("\nYou are curious and walked into the abandoned cabin.");
                printf("\nYou look around and you see that it is moldy and very dirty.");
                printf("\nYou continue looking and you find 2 items at a dirty table.");
                printf("\n\t1. A medical kit");
                printf("\n\t2. Canned food");
                printf("\nSelect an option: ");
                scanf("%d",&userChoice[0]);
                while(userChoice[0] != 1 && userChoice[0] != 2)
                {
                    printf("\nInvalid choice. Please enter a valid number: ");
                    scanf("%d",&userChoice[0]);
                }
                if(userChoice[0] == 1)
                {
                    printf("\nYou grab the medical kit and use it on yourself.");
                    printf("\nYou feel like a new person and left the abandoned cabin.");
                }
                if(userChoice[0] == 2)
                {
                    printf("\nYou open the canned food and start eating the food.");
                    printf("\nAfter you are done eating you look at the can and see that the expiration date was 20 years ago.");
                    printf("\nYou throw up the food but it is too late and your stomach hurts a lot.");
                    printf("\nAfter a few minutes of experiencing the stomach pain you collapse and your consciousness fades away.");
                    printf("\n\n-----------------------------GAME OVER------------------------------\n\n");
                    break;
                }
                printf("\nYou continue walking forward into the dark forest.");
                printf("\nYou encounter a trail and it has two paths");
                printf("\n\t1. Take the left path.");
                printf("\n\t2. Take the right path.");
                printf("\nSelect an option: ");
                scanf("%d",&userChoice[0]);
                if(userChoice[0] == 1)
                {
                    printf("\nYou decide to take the left path and walk that path.");
                    printf("\nYou walk for a few minutes until you see a sign saying that the path leads to a town.");
                    printf("\nYou smile and keep walking forward hoping to ask someone they know where you are located.");
                }
                else if(userChoice[0] == 2)
                {
                    printf("\nYou decide to take the right path and walk that path,");
                    printf("\nYou walk for you think was 30 minutes and then see a faint light between 2 trees and some bushes.");
                    printf("\nYou approach the source of the light and find out that you came back to where your started.");
                    printf("\nIt begins to rain and you have given up on finding a way out the mysterious forest.");
                    printf("\n\n-----------------------------GAME OVER?------------------------------\n\n");
                    break;
                }
                else
                {
                    printf("\nYou decide to make your own path and determined you start walking torwards a direction following your gut.");
                    printf("\nYou are confident so confident in fact you feel like you can do anything.");
                    printf("\n20 minutes later you are still walking and you encounter an empty circle with a cave on your path.");
                    printf("\nYou later see a pack of wolves walking to you from the cave.");
                    printf("\nYou can't let a pack of wolves stop you from walking your own path.");
                    printf("\nYou say \"I won't let anything stop me from walking my own path not even wolves.\".");
                    printf("\nThe wolves seem to have understood what you said and backed away from you.");
                    printf("\nThe wolves then make way for their pack leader who walks torward you.");
                    printf("\nYou look at the wolf pack leader and they are looking at you as if they are saying...");
                    printf("\nIf you want to walk your own path you have to get through me!\"");
                    printf("\nYou and the wolf get ready to fight!");
                    printf("\nGet ready for a turn-based minigame!");
                    //Start of a mini turn-based game
                    int wolfLeaderHP = 115;
                    int protagHP = 100;
                    while(wolfLeaderHP > 0 && protagHP > 0)
                    {
                        int choice;
                        int wolfDmg = rand() % 13 + 8;
                        printf("\nYour HP: %d", protagHP);
                        printf("\nWolf HP: %d", wolfLeaderHP);
                        printf("\n\t1.Attack  \n\t2.Heavy  \n\t3.Heal\n ");
                        printf("\nSelect an option: ");
                        scanf("%d", &choice);
                        if(choice == 1)
                        {
                            //Attack 10 - 20 dmg
                            int dmg = rand() % 10 + 11;
                            wolfLeaderHP -= dmg;
                        }
                        else if(choice == 2)
                        {
                            // %50 chance of heavy attack doing dmg
                            if(rand()%2)
                            {
                                //Attack 15 - 30 dmg
                                int dmg = rand()%16 + 15;
                                printf("Heavy hit %d!", dmg);
                                wolfLeaderHP -= dmg;
                            }
                            else
                            {
                                printf("\nThe wolf saw through you and missed your attack!");
                            }
                        }
                        else if(choice == 3)
                        {
                            protagHP += 20;
                            if (protagHP > 100) protagHP = 100;
                            printf("\nHeal +15");
                        }
                        else
                        {
                            printf("\nYou are confused giving up your next turn.");
                        }
                        if(wolfLeaderHP <= 0)
                        {
                            printf("\nYou have defeated the wolf pack leader!");
                            break;
                        }
                        printf("\nWolf hits you and you lose %d HP", wolfDmg);
                        protagHP -= wolfDmg;
                        if(protagHP <= 0)
                        {
                            printf("\nDefeated!");
                            break;
                        }
                    }
                    if(protagHP > 0)
                    {
                        printf("\nThe wolf pack runs away seeing their leader laying on the floor unconscious and you continue walking.");
                        printf("\nYou continue walking for what you think is an hour and you see a door in the middle of the forest.");
                        printf("\nYou decide walk towards the door and open the door.");
                        printf("\nThe entrance is glowing and you step forward with your eyes covered and smiling.");
                        printf("\nYou successfully escaped the forest!");
                        printf("\n\n-----------------------------Hidden Ending------------------------------\n\n");
                        break;
                    }
                    else if(wolfLeaderHP > 0)
                    {
                        printf("\nThe wolf pack leader jumps at you and bites you.");
                        printf("\nThe other wolves also start to bite you.");
                        printf("\nYou scream in agony and experience pain like never before.");
                        printf("\nYou tell yourself \"I should have not walked my own path...\".");
                        printf("\nYour vision turns red as you lose consciousness and die.");
                        printf("\n\n-----------------------------GAME OVER------------------------------\n\n");
                        break;
                    }
                }
                printf("\nYou walk the path and eventually arrive at a town and you find out no human or light in sight.");
                printf("\nThe town looks old and abandoned so you decide to explore the town.");
                printf("\nYou walk around see an abandoned hospital.");
                printf("\nYou walk to the entrance and you see a long hall with multiple doors left and right.");
                printf("\nYou walk at the long hall for what seems to be 5 minutes and think something isn't right.");
                printf("\nYou look around and see a room number 14 so you remember that and continue walking.");
                printf("\nYou continue walking while looking at the room number and you encounter room number 14 again.");
                printf("\nYou realized you are walking in an infinite hallway and you start to think of what you can do.");
                printf("\nSince you are in an infinite hallway you can think of a few things you can do.");
                userChoice[0] = 0;
                while(userChoice[0] != 2)
                {
                    printf("\n\t1. Walk forward.\n\t2. Listen carefully for clues.\n\t3. Open a nearby door.");
                    printf("\nSelect an option: ");
                    scanf("%d",&userChoice[0]);
                    while(userChoice[0] != 1 && userChoice[0] != 2 && userChoice[0] != 3)
                    {
                        printf("\nInvalid choice. Please enter a valid number: ");
                        scanf("%d",&userChoice[0]);
                    }
                    if(userChoice[0] == 1)
                    {
                        printf("\nYou walk forward and continue walking at the hallway.");
                        printf("\nYou then walk at the beginning of the hallway.");
                        printf("\nSince you are in an infinite hallway you can think of a few things you can do.");
                    }
                    if(userChoice[0] == 2)
                    {
                        printf("\nYou listen for any type of noise and there is a door that is playing music behind it.");
                        printf("\nYou open the door and you see a hospital room with a radio playing music.");
                        printf("\nYou look around the room and their is an open window.");
                        printf("\nYou decide to escape the infinite hallway by hopping out the window.");
                    }
                    if(userChoice[0] == 3)
                    {
                        printf("\nYou open a nearby door and see the same infinite hallway.");
                        printf("\nSince you are in an infinite hallway you can think of a few things you can do.");
                    }
                }
                printf("\nAfter you hopped out the window there are 2 places you can go.");
                printf("\n\t1. Go back to town\n\t2. Go back to the forest");
                printf("\nSelect an option: ");
                scanf("%d",&userChoice[0]);
                while(userChoice[0] != 1 && userChoice[0] != 2)
                {
                    printf("\nInvalid choice. Please enter a valid number: ");
                    scanf("%d",&userChoice[0]);
                }
                if(userChoice[0] == 1)
                {
                    printf("\nYou decide to go back to town and keep walking until you reach the middle of the town.");
                    printf("\nYou are surrounded by houses and then you hear footsteps.");
                    printf("\nYou get close to the source of the footsteps and it is behind a door so you get close to it.");
                    printf("\nAs you get closer the door the door gets slammed open and you see a zombie.");
                    printf("\nThe zombies says brains and you run but then all of the towns houses doors are opened by zombies and you are surrounded.");
                    printf("\nYou run as fast as you can but the zombies catch up you and start brutally biting you.");
                    printf("\nYou scream in agony while the zombies bites you and start biting to your brain.");
                    printf("\nYour vision turns red and you instantly die.");
                    printf("\n\n-----------------------------GAME OVER------------------------------\n\n");
                    break;

                }
                if(userChoice[0] == 2)
                {
                    printf("\nYou decide to walk into the forest and walk until you reach an underground bunker.");
                    printf("\nYou open the bunker door and walk down the bunker.");
                    printf("\nAs you walk down the bunker you hear multipe foot steps behind you.");
                    printf("\nThey are walking the same pace as you and when you are starting you walk faster.");
                    printf("\nSo do they...");
                    printf("\nThe footsteps gets louder and faster so you run as fast as you can without looking behind you.");
                    printf("\nAs you are running you see a door similar to the one you opened before you walked to the forest.");
                    printf("\nYou run and then you open the door.");
                    printf("\nAs you open the door something grabs and pulls your shoulder.");
                    printf("\nYou quickly take off the hand off your shoulder and escape.");
                    printf("\n\n-----------------------------The End------------------------------\n\n");
                    break;
                }
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
				nnawshin();
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
			case 23:
			{
				puts("room23");
				nhfun();
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
				GuckMan();
				puts("room26");
				break;
			}
			case 27:
			{
				puts("room27");
     			theSigmaMethod();
              	coolGame();
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
				gameroom30();
				puts("If you would like to choose a new door, please select a door number. Otherwise, you can quit by selecting option 99.");
				scanf("%d",&choice);
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
				printInitialsAngelM();
				puts("room36");
				break;
			}
			case 37:
			{
				phas22();
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
				jkFun();
				jkRoom41();
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
				WMRoom();
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
				jmItsGameTime();
				puts("You have entered Room 55!\n");
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
				RT_room57();
                                puts("room57");
                                break;
			}
			case 58:
			{
				room58SM();
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
				dGMyName();
								puts("room60");
                                break;
			}
			case 61:
			{
				int inventoryRR[] ={0,0};
				RRlab();
				RyansRoom(inventoryRR);
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
								printInFG();
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
                                break;                        }
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
void room58SM(void)
{
	int candles[6] = {0, 0, 0, 0, 0, 0};
	int choice = 0;
	int decisions = 0;
	int smoke = 0;
	int litCount = 0;
	int randomEvent = 0;
	char *candleNames[6] = {"Candle 1", "Candle 2", "Candle 3", "Candle 4", "Candle 5", "Candle 6"};

	printf("\nYou enter Room 58.\n");
	printf("Six magic candles sit on a stone table.\n");
	printf("You must survive five decisions to unlock the exit.\n");

	while (decisions < 5)
	{
		printf("\nRoom 58 Status\n");
		printf("Decision: %d of 5\n", decisions + 1);
		printf("Smoke level: %d\n", smoke);
		printf("Lit candles: %d\n", getLitCount58SM(candles));

		if (decisions == 0)
		{
			printf("\nDecision 1: You see two candles glowing faintly.\n");
			printf("1. Light Candle 1\n");
			printf("2. Light Candle 2\n");
			printf("Enter choice: ");
			scanf("%d", &choice);

			if (choice == 1)
			{
				candles[0] = 1;
				printf("%s is now lit.\n", candleNames[0]);
			}
			else if (choice == 2)
			{
				candles[1] = 1;
				printf("%s is now lit.\n", candleNames[1]);
			}
			else
			{
				printf("Invalid choice. Smoke rises.\n");
				smoke++;
			}
		}
		else if (decisions == 1)
		{
			printf("\nDecision 2: Smoke begins to fill the room.\n");
			printf("1. Search for a hidden vent\n");
			printf("2. Light Candle 3 quickly\n");
			printf("Enter choice: ");
			scanf("%d", &choice);

			if (choice == 1)
			{
				randomEvent = rand() % 2;

				if (randomEvent == 0)
				{
					printf("You found a vent. The smoke level goes down.\n");

					if (smoke > 0)
					{
						smoke--;
					}
				}
				else
				{
					printf("The vent was blocked. Smoke rises.\n");
					smoke++;
				}
			}
			else if (choice == 2)
			{
				candles[2] = 1;
				printf("%s is now lit.\n", candleNames[2]);
			}
			else
			{
				printf("Invalid choice. Smoke rises.\n");
				smoke++;
			}
		}
		else if (decisions == 2)
		{
			printf("\nDecision 3: You find a hidden spark on the floor.\n");
			printf("1. Use it on Candle 4\n");
			printf("2. Save it and look around\n");
			printf("Enter choice: ");
			scanf("%d", &choice);

			if (choice == 1)
			{
				candles[3] = 1;
				printf("%s is now lit.\n", candleNames[3]);
			}
			else if (choice == 2)
			{
				randomEvent = rand() % 3;

				if (randomEvent == 0)
				{
					printf("The spark jumps to Candle 5.\n");
					candles[4] = 1;
				}
				else if (randomEvent == 1)
				{
					printf("The spark disappears. Smoke rises.\n");
					smoke++;
				}
				else
				{
					printf("The spark reveals a clue on the wall.\n");
				}
			}
			else
			{
				printf("Invalid choice. Smoke rises.\n");
				smoke++;
			}
		}
		else if (decisions == 3)
		{
			printf("\nDecision 4: The wall says, 'The hidden candle opens the way.'\n");
			printf("1. Search for Candle 6\n");
			printf("2. Ignore the clue and wait\n");
			printf("Enter choice: ");
			scanf("%d", &choice);

			if (choice == 1)
			{
				randomEvent = rand() % 2;

				if (randomEvent == 0)
				{
					printf("You found Candle 6 and lit it.\n");
					candles[5] = 1;
				}
				else
				{
					printf("You found dust instead. Smoke rises.\n");
					smoke++;
				}
			}
			else if (choice == 2)
			{
				printf("Waiting was dangerous. Smoke rises.\n");
				smoke++;
			}
			else
			{
				printf("Invalid choice. Smoke rises.\n");
				smoke++;
			}
		}
		else if (decisions == 4)
		{
			printf("\nDecision 5: The exit begins to glow.\n");
			printf("1. Try to open the exit\n");
			printf("2. Light one more candle first\n");
			printf("Enter choice: ");
			scanf("%d", &choice);

			if (choice == 1)
			{
				printf("You try to open the exit.\n");
			}
			else if (choice == 2)
			{
				randomEvent = rand() % 6;
				candles[randomEvent] = 1;
				printf("%s lights up from the final spark.\n", candleNames[randomEvent]);
			}
			else
			{
				printf("Invalid choice. Smoke rises.\n");
				smoke++;
			}
		}

		decisions++;
		litCount = getLitCount58SM(candles);

		if (smoke >= 3)
		{
			printf("The room fills with smoke. You run back to the hallway.\n");
			return;
		}
	}

	litCount = getLitCount58SM(candles);

	if (litCount >= 4)
	{
		printf("The candles glow together and unlock the exit.\n");
		printf("You escape Room 58 and return to the hallway.\n");
	}
	else
	{
		printf("Not enough candles are lit.\n");
		printf("You return to the hallway.\n");
	}
}

int getLitCount58SM(int candles[])
{
	int i = 0;
	int count = 0;

	for (i = 0; i < 6; i++)
	{
		if (candles[i] == 1)
		{
			count++;
		}
	}

	return count;
}

//dcortez function definintion
typedef struct
{
	int health;
}  DCJPlayer;

//dcortez RPG Game


void afFun(void)
{ 
	puts("AFroom52");
}

void jkFun(void)
{
	printf("PSG\n");
}



void dcFunc(void)
{
	//struct usage
	DCJPlayer player;
	player.health = 100;

	int choice;
	int i = 0;

	//array: (faction names and reputation scores)
	char *factions[4];
	factions[0] = "The Ordained (Theocratic Moral Authority)";
	factions[1] = "The New Meridian (Sacrificial Utopian Civilization)";
	factions[2] = "The Hollow Feast (Brotherhood of Endurance)";
	factions[3] = "The Cartographers of the Unnamed (Keepers of Old Questions)";

	int rep[4] = {0, 0, 0, 0};

	printf("\n=== ROOM 19: THE LAST BROADCAST ===\n");
	printf("You wake up at the crossroads of four territories.\n");
	printf("A pre-war broadcast tower looms above you, still humming.\n");
	printf("You don't remember who you are. But four factions do.\n");
	printf("Health: %d\n", player.health);

	//loop: (displaying factions)
	printf("\nThe four factions vying for this tower:\n");

	for(i = 0; i < 4; i++)
	{
		printf("  %d. %s\n", i+1, factions[i]);
	}

	//CHOICE 1
	printf("\n--- CHOICE 1 ---\n");
	printf("A robed figure from the Ordained approaches. \n");
	printf("They utter a creed:\n");
	printf("\"We are the law that God forgot to write, every soul we've\n");
	printf("ended was already damned, we simply made it official.\"\n");
	printf("They demand you hand over a wounded stranger hiding behind you.\n");
	printf("Do you comply? (1=yes, 0=no): ");
	scanf("%d", &choice);
	printf("\n");
	//loop (input validation)
	while(choice != 0 && choice != 1)
	{
		printf("Invalid, Enter 1 or 0: ");
		scanf("%d", &choice);
	}
	if(choice == 1)
	{
		rep[0] += 2;
		rep[2] -= 1;
		printf("The stranger is taken. The Ordained nod approvingly. \n");
		printf("The Hollow Feast witnessed this. They are disappointed.\n");
	}
	else
	{
		rep[0] -= 1;
		rep[2] += 1;
		rep[3] += 1;
		player.health -= 5;
		printf("You refuse. The robed figure leaves with a warning.\n");
		printf("Somewhere, a Cartographer wrote that down.\n");
		printf("Health: %d\n", player.health);
	}

    //CHOICE 2
    printf("\n--- CHOICE 2 ---\n");
    printf("You find a pre-war document in the rubble.\n");
    printf("It proves The New Meridian's first sacrifice could have been an innocent man.\n");
    printf("You question if their sacrificial ritual was built on a lie.\n");
    printf("What do you do?\n");
    printf("  1. Give it to The Ordained (weaponize it)\n");
    printf("  2. Give it to The Cartographers (let truth decide)\n");
    printf("  3. Burn it (protect stability)\n");
    printf("Choice (1-3): ");
    scanf("%d", &choice);
    printf("\n");

    while(choice < 1 || choice > 3)
    {
        printf("Invalid. Enter 1, 2, or 3: ");
        scanf("%d", &choice);
    }
    if(choice == 1)
    {
        rep[0] += 2;
        rep[1] -= 2;
        printf("The Ordained use it as propaganda immediately.\n");
        printf("New Meridian citizens riot. People die.\n");
    }
    else if(choice == 2)
    {
        rep[3] += 3;
        rep[1] -= 1;
        printf("The Cartographers publish it as a question, not an accusation.\n");
        printf("New Meridian is shaken but survives. Truth costs something.\n");
    }
    else
    {
        rep[1] += 1;
        rep[3] -= 2;
        printf("You burn it. Stability preserved.\n");
        printf("The Cartographers lose interest in you.\n");
        printf("Some lies hold civilizations together.\n");
    }

    //random number: chance encounter between choices
    printf("\n--- A CHANCE ENCOUNTER ---\n");
    int event = rand() % 3;

    if(event == 0)
    {
        printf("A Hollow Feast initiate collapses near you, starving.\n");
        printf("You share your rations. -10 health, +1 Hollow Feast rep.\n");
        player.health -= 10;
        rep[2] += 1;
    }
    else if(event == 1)
    {
        printf("A New Meridian scout patches your wounds unprompted.\n");
        printf("\"We help first. We ask questions at the altar.\" +15 health.\n");
        player.health += 15;
        rep[1] += 1;
    }
    else
    {
        printf("You find a cache of pre-war rations. +20 health.\n");
        player.health += 20;
    }
    printf("Health: %d\n", player.health);

    //CHOICE 3
    printf("\n--- CHOICE 3 ---\n");
    printf("The Hollow Feast and The New Meridian clash at the tower base.\n");
    printf("\"The Hollow Feast yells:\n");
    printf("\"Pain is the only honest teacher left in this world, we just\n");
    printf("can't always remember where the lesson ends and the hunger begins!\"\n");
    printf("The Hollow Feast are losing. Intervene for them? (1=yes, 0=no): ");
    scanf("%d", &choice);
    printf("\n");

    while(choice != 0 && choice != 1)
    {
        printf("Invalid. Enter 1 or 0: ");
        scanf("%d", &choice);
    }
    if(choice == 1)
    {
        rep[2] += 3;
        rep[1] -= 2;
        player.health -= 20;
        printf("You pull The Hollow Feast back from the brink.\n");
        printf("You take damage doing it. Health: %d\n", player.health);
    }
    else
    {
        rep[1] += 1;
        printf("You watch. New Meridian wins. Order is maintained.\n");
        printf("The Hollow Feast remember your face.\n");
    }

    //CHOICE 4
    printf("\n--- CHOICE 4 ---\n");
    printf("The Cartographers find you alone.\n");
    printf("\"We don't follow leaders, we follow questions, ask us something\n");
    printf("we've never heard before and we'll die for you,\n");
    printf("ask us nothing and we'll forget you exist.\"\n");
    printf("They ask: do you believe any faction deserves the tower?\n");
    printf("  1. Yes, one of them does\n");
    printf("  2. No, none of them do\n");
    printf("  3. Stay silent\n");
    printf("Choice (1-3): ");
    scanf("%d", &choice);
    printf("\n");

    while(choice < 1 || choice > 3)
    {
        printf("Invalid. Enter 1, 2, or 3: ");
        scanf("%d", &choice);
    }
    if(choice == 1)
    {
        rep[3] -= 1;
        printf("They are disappointed.\n");
        printf("\"Certainty is the beginning of every atrocity.\"\n");
    }
    else if(choice == 2)
    {
        rep[3] += 3;
        player.health += 10;
        printf("They are silent for a long moment.\n");
        printf("\"Then you might be worth following.\"\n");
        printf("Health: %d\n", player.health);
    }
    else
    {
        rep[3] += 2;
        printf("You say nothing. They smile.\n");
        printf("\"Good. Questions live longer than answers.\"\n");
    }

    //CHOICE 5
    printf("\n--- CHOICE 5: THE TOWER ---\n");
    printf("The broadcast tower was yours to give based off your actions.\n");
    printf("Who do you think should control the voice of this wasteland.\n");
    printf("  1. The Ordained\n");
    printf("  2. The New Meridian\n");
    printf("  3. The Hollow Feast\n");
    printf("  4. The Cartographers of the Unnamed\n");
    printf("  5. Destroy the tower. No one gets it.\n");
    printf("Choice (1-5): ");
    scanf("%d", &choice);
    printf("\n");

    while(choice < 1 || choice > 5)
    {
        printf("Invalid. Enter 1-5: ");
        scanf("%d", &choice);
    }
    if(choice <= 4)
    {
        rep[choice - 1] += 5;
    }
    else
{
    rep[0] = 0;
    rep[1] = 0;
    rep[2] = 0;
    rep[3] = 0;
}

    //call to separate function
    dcFuncEnding(rep, factions);

    //returns to menu loop naturally when function ends
    printf("You step back through the door, the tower humming behind you.\n\n");
}

//dcortez Second Funtion(for ending)
void dcFuncEnding(int rep[], char *factions[])
{
    int i = 0;
    int best = 0;
    int bestIdx = 0;

    for(i = 0; i < 4; i++)
    {
        if(rep[i] > best)
        {
            best = rep[i];
            bestIdx = i;
        }
    }

    printf("\n=== THE BROADCAST GOES LIVE ===\n");

    if(best == 0)
    {
	printf("\n");
	printf("#%%@!#%%@!\n");
	printf("%%@!#%%@!#\n");
	printf("@!#%%@!#%%\n");
	printf("\n");
        printf("No faction trusts you. The tower broadcasts static.\n");
        printf("In the wasteland, silence is its own kind of answer.\n");
        return;
    }

    printf("Based on your actions: The tower now speaks for %s\n\n", factions[bestIdx]);

    if(bestIdx == 0)
    {
	printf("\n");
	printf("    +\n");
    	printf(" +++++++\n");
    	printf("    +\n");
    	printf(" +++++++\n");
    	printf("    +\n");
	printf("\n");
        printf("The Ordained's voice fills the wasteland.\n");
        printf("People obey. People fear. The body count does not stop.\n");
        printf("Order is maintained. Whether it is good is another question.\n");
    }
    else if(bestIdx == 1)
    {
	printf("\n");
	printf("    *\n");
	printf("   ***\n");
	printf("  *****\n");
	printf("    |\n");
	printf("    |\n");
	printf("\n");
        printf("New Meridian broadcasts science, medicine, education.\n");
        printf("The harvest moon comes. The altar runs red as promised.\n");
        printf("Progress and ritual, holding hands over a grave.\n");
    }
    else if(bestIdx == 2)
    {
	printf("\n");
	printf("  o o\n");
	printf(" o   o\n");
	printf("  o o\n");
	printf("    o o\n");
	printf("   o   o\n");
	printf("    o o\n");
	printf("\n");
	printf("The Hollow Feast broadcasts silence, then screaming, then philosophy.\n");
        printf("Nobody knows what to make of it. Some find it freeing.\n");
        printf("Pain is still the teacher. Class is always in session.\n");
    }
    else
    {
	printf("\n");
	printf("    N\n");
	printf("  W + E\n");
	printf("    S\n");
	printf("\n");
        printf("The Cartographers broadcast only questions. No answers.\n");
        printf("People argue, think, doubt, and occasionally change their minds.\n");
        printf("It is the most dangerous broadcast in wasteland history.\n");
    }
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

void cparkerFun(void)
{
	printf("C P\n");
}
void rgarcia_fun(void)
{
        char name[30];
        int doorsOpened = 0;
        int choice = 0;
        int num1, num2, answer, correct;
        int pick, weapon;
        int artChoice;

        printf("\nYou step through Door 47.\n");
        printf("Inside is a room with 5 more doors.\n");
        printf("Each one looks different.\n\n");

        printf("I forgot your name, Please enter your name again: ");
        scanf("%s", name);

        printf("\nAlright %s, pick a door.\n", name);

        // Main loop - 5 choices then done
        while (doorsOpened < 5)
        {
                printf("\nROOM 47\n");
                printf("Door 1: a door with math equations scratched into it.\n");
                printf("Door 2: a door with a neon BREAK sign above it.\n");
                printf("Door 3: a door with a glowing screen visible through the crack.\n");
                printf("Door 4: a plain wooden door. It is quiet behind it.\n");
                printf("Door 5: a scary looking door with the words \" I SCREAM. \" \n");
                printf("\nWhich door do you open? ");
                scanf("%d", &choice);

                switch (choice)
                {
                        case 1:
                        {
                                //  MATH ROOM
                                printf("\nYou enter the room and a man in a lab coat stands at a chalkboard.\n");
                                printf("He turns to you and says:\n");
                                printf("\"You want to leave? Pass my math test. One question. Multiplication.\"\n");
                                printf("\"Get it wrong and I will give you a new one.\"\n\n");

                                while (true)
                                {
                                        num1 = rand() % 100 + 1;
                                        num2 = rand() % 100 + 1;
                                        correct = num1 * num2;

                                        printf("What is %d x %d? ", num1, num2);
                                        scanf("%d", &answer);

                                        if (answer == correct)
                                        {
                                                printf("The man nods. \"Correct. You may leave.\"\n");
                                                break;
                                        }
                                        else
                                        {
                                                printf("\"Wrong. The answer was %d. Try again.\"\n\n", correct);
                                        }
                                }
                                doorsOpened++;
                                break;
                        }
                        case 2:
                        {
                                // BREAK ROOM
                                printf("\nYou open the door and find a cozy room with dim lights and soft music.\n");
                                printf("A sign on the wall reads: \"BREAK ROOM. Choose one.\"\n\n");
                                printf("1) Sleep for 10 hours\n");
                                printf("2) Eat a buffet of whatever you want\n");
                                printf("3) Skip the break and move on\n");
                                printf("What do you choose? ");
                                scanf("%d", &pick);

                                switch (pick)
                                {
                                        case 1:
                                                printf("\nYou find a bed in the corner and lay down.\n");
                                                printf("You sleep for 10 hours straight. No dreams. Just rest.\n");
                                                printf("You wake up feeling completely recharged.\n");
                                                break;
                                        case 2:
                                                printf("\nA massive table of food appears in front of you.\n");
                                                printf("Steak, pizza, sushi, tacos, everything you could want.\n");
                                                printf("You eat until you can not move. Worth it.\n");
                                                break;
                                        case 3:
                                                printf("\nYou decide you do not need a break.\n");
                                                printf("You turn around and walk back out the door.\n");
                                                break;
                                        default:
                                                printf("\nYou stood there confused and did nothing. Moving on.\n");
                                                break;
                                }
                                doorsOpened++;
                                break;
                        }
                        case 3:
                        {
                                // FORTNITE ROOM
                                printf("\nYou enter the room and a giant screen flickers on.\n");
                                printf("A voice booms: \"YOU MUST WIN A GAME OF FORTNITE TO LEAVE.\"\n");
                                printf("\"Choose your weapon.\"\n\n");

                                while (true)
                                {
                                        printf("1) Blue Tactical Shotgun\n");
                                        printf("2) Sniper Rifle\n");
                                        printf("3) Gold Scar\n");
                                        printf("Pick your weapon: ");
                                        scanf("%d", &weapon);

                                        if (weapon == 1)
                                        {
                                                printf("\nYou grab the Blue Tac and drop into Salty Springs.\n");
                                                printf("You land on a roof and rush inside.\n");
                                                printf("Another player is already there with a pump.\n");
                                                printf("You get one-pumped before you can even aim.\n");
                                                printf("Back to the lobby. Pick again.\n\n");
                                        }
                                        else if (weapon == 2)
                                        {
                                                printf("\nYou grab the Sniper and drop into a quiet area.\n");
                                                printf("You spend the whole game hiding in a bush.\n");
                                                printf("Final two. You line up a shot on the last player.\n");
                                                printf("You miss. They build a tower and laser you.\n");
                                                printf("Second place. Pick again.\n\n");
                                        }
                                        else if (weapon == 3)
                                        {
                                                printf("\nYou grab the Gold Scar and drop safe.\n");
                                                printf("You play smart. Rotate with the storm.\n");
                                                printf("Final two. The last player runs past your bush.\n");
                                                printf("You light them up from behind. They never saw it coming.\n");
						break;
                                        }
                                }
                                doorsOpened++;
                                break;
                        }
                        case 4:
                        {
                                // ARTHUR'S ROOM
                                printf("\nYou push open the door and step into a small, quiet room.\n");
                                printf("The light is warm but dim. There is a chair by the window\n");
                                printf("and an older man sitting in it. He looks tired.\n\n");
                                printf("He looks up at you.\n");
                                printf("\"Hey. I am Arthur. What is your name?\"\n\n");

                                printf("You tell him your name is %s.\n\n", name);

                                printf("Arthur nods slowly.\n");
                                printf("\"Sit down, %s. Stay a minute.\"\n\n", name);
                                printf("You sit across from him. Neither of you says anything.\n");
                                printf("The room is quiet. Just the sound of breathing.\n");
                                printf("About 30 seconds pass.\n\n");

                                printf("Arthur speaks first.\n\n");
                                printf("\"I have had a good life, %s. Long one too.\n", name);
                                printf("But I will be honest with you. I am scared.\n");
                                printf("People think when you get old or when you get sick\n");
                                printf("the fear goes away. Like you just accept it.\n");
                                printf("That is not how it works.\"\n\n");
                                printf("He pauses.\n\n");
                                printf("\"I am scared of dying. Scared of being forgotten.\n");
                                printf("Scared that none of what I did ever really mattered.\"\n\n");
                                printf("He looks at you.\n");
                                printf("\"What would you say to a man who is scared of dying?\"\n\n");

                                // Decision 1
                                printf("1) \"I think being scared means you cared about living.\"\n");
                                printf("2) \"I do not think anyone is ready for that. And that is okay.\"\n");
                                printf("3) \"The people you touched will carry you with them.\"\n");
                                printf("What do you say? ");
                                scanf("%d", &artChoice);

                                if (artChoice == 1)
                                {
                                        printf("\nArthur lets out a small breath.\n");
                                        printf("\"Maybe you are right. If I did not care, I would not be\n");
                                        printf("sitting here worrying about it.\"\n");
                                }
                                else if (artChoice == 2)
                                {
                                        printf("\nArthur nods slowly.\n");
                                        printf("\"That is honest. I appreciate that.\n");
                                        printf("Everyone else tries to tell me it will be fine.\n");
                                        printf("At least you are not lying to me.\"\n");
                                }
                                else
                                {
                                        printf("\nArthur's eyes get a little wet.\n");
                                        printf("\"I hope so. I really do.\n");
                                        printf("I just wish I could know that for sure.\"\n");
                                }

                                // Decision 2
                                printf("\n\nArthur shifts in his chair.\n");
                                printf("\"I think about the people I hurt. Things I said that I\n");
                                printf("can not take back. People I let down.\"\n\n");
                                printf("\"You think a man can still make peace with himself\n");
                                printf("this close to the end?\"\n\n");

                                printf("1) \"It is never too late to forgive yourself.\"\n");
                                printf("2) \"You do not need to fix everything. Just own it.\"\n");
                                printf("3) \"The fact that you feel regret means you know right from wrong.\"\n");
                                printf("What do you say? ");
                                scanf("%d", &artChoice);

                                if (artChoice == 1)
                                {
                                        printf("\nArthur closes his eyes for a moment.\n");
                                        printf("\"Forgiving yourself. That is the hardest part.\n");
                                        printf("Harder than forgiving anyone else.\"\n");
                                }
                                else if (artChoice == 2)
                                {
                                        printf("\nArthur looks down at his hands.\n");
                                        printf("\"Own it. Yeah. I can do that.\n");
                                        printf("I cannot undo it but I can at least stop running from it.\"\n");
                                }
                                else
                                {
                                        printf("\nArthur lets out a quiet laugh.\n");
                                        printf("\"That is a kind way to look at it.\n");
                                        printf("I guess the ones who never feel regret are the ones\n");
                                        printf("you should really worry about.\"\n");
                                }

                                // Ending
                                printf("\n\nArthur looks at you one more time.\n");
                                printf("\"Thank you for listening, %s. I mean that.\n", name);
                                printf("I feel a little less afraid now.\"\n\n");
                                printf("You stand up. You shake his hand.\n");
                                printf("You walk to the door and open it.\n\n");
                                printf("You feel better after the conversation.\n");
                                doorsOpened++;
                                break;
                        }
                        case 5:
                        {
                                printf("You enter the room that said the words \"I Scream\"\n\n");
                                printf("You find an ice cream sandwich. Yippee!");
								doorsOpened++;
                        }
                }
	}
}

void AMaderaFun(void)
{
	printf("AMadera\n");
	printf("You've entered the Fromsoftware Basketball Association Casino (sponsored by Fan(tasy)duel Sports Network)");
	printf("In this room you'll be betting on who will when from the choices presented to you (coinflip style)");
	printf("For every matchup you get correct, you will be granted souls. For every wrong choice, you die and you lose your souls");
	srand(time(NULL));
	int i =0;
	int choice = 0;
	int winner = 0;
	int souls = 0;
	int soulsWon = 100;
	char *teams[] = 
	{ "Lakers of Liurnia", "Caelid Clippers", "Mistwood Bucks", "Lake of Rot Rockets", "Nokron Nuggets", "New Londo Knicks", "Demon Ruins Heat", "Blighttown Bulls", "Firelink Shrine Suns", "Royal Wood Warriors"
	};
	for (i = 0; i <5; i++)
	{
		int team1 = i*2;
		int team2 = (i*2)+1;
		choice = 0;
		while(choice < 1 || choice > 2)
		{
			printf("\nMatchup %d: 1. %s vs 2.%s\n", i + 1, teams[team1], teams[team2]);
			printf("Who do you think will win, choose 1 or 2: ");
			scanf("%d", &choice);
		}
		winner = 1 +rand() %2;
		if(choice == winner)
		{
			souls += soulsWon;
			printf("Bang, you're right. You gained %d souls\n",soulsWon);
			printf("Current souls: %d\n", souls);
		}
		else
		{
			printf("Airball, YOU DIED. You lost %d souls\n", soulsWon);
			if(souls> 0)
			{
				souls -= soulsWon;
				if(souls < 0) souls =0;
				printf("Current Souls Balance %d\n", souls);
			}
			else
			{
				printf("You have no souls\n");
			}
					
		}
				}
				printf("Your final amount of souls was %d\n", souls);
				puts("Gambling time over, back to the bonfire/site of grace/ and try farming for souls/runes");
				
}


void ls(void)
{
	printf("LS\n");
      int player1;
    int player2;
    int rounds;
    int i;

    int results[3] = {0, 0, 0};

    printf("You are in a rock paper scissors game. You can play against a friend. \n");

    printf("How many rounds do you want to play? ");
    scanf("%d", &rounds);

    for(i = 1; i <= rounds; i++)
    {
        printf("\nRound %d\n", i);

        printf("Player 1:\n");
        printf("1. Rock\n2. Paper\n3. Scissors\n");
        scanf("%d", &player1);

        printf("Player 2:\n");
        printf("1. Rock\n2. Paper\n3. Scissors\n");
        scanf("%d", &player2);

        if(player1 == player2)
        {
            printf("Tie!\n");
            results[2]++;
        }
        else if((player1 == 1 && player2 == 3) || (player1 == 2 && player2 == 1) || (player1 == 3 && player2 == 2))
        {
            printf("Player 1 wins!\n");
            results[0]++;
        }
        else
        {
            printf("Player 2 wins!\n");
            results[1]++;
        }
    }

    printf("Final Score:\n");
    printf("Player 1 Wins: %d\n", results[0]);
    printf("Player 2 Wins: %d\n", results[1]);
    printf("Ties: %d\n", results[2]);
}
void JMfun(void)
{
	printf("JM");

	int decision = 0;
	int score = 0;
	int trap[5] = {0, 0, 0, 0, 0};
	int ranTrap = rand() % 5;
	trap[ranTrap] = 1;

	puts("\nYou entered Door 24 (Jonray Mendoza)");
	puts("You have entered what appears to be a maze with a series of right and left choices... be careful as you have 5 tries to escape");

	for(int i = 0; i < 5; i++) // 5 turns
	{
		printf("\nTurn %d\n", i + 1);
		puts("Choose: ");
		puts("1. Go Left?");
		puts("2. Go Right?");
		scanf("%d", &decision);

		if(decision != 1 && decision != 2)
		{
			puts("lose a point for invalid input");
			score--;
			continue;
		}
		if(trap[i] == 1) // trap checking
		{
			puts("You step on a suspicious pressure plate and triggered a dart trap! -1 point");
			score -= 1;
			continue;
		}
		int event = rand() % 3; // 0-2 random skeleton event
		
		if(event == 0)
		{
			int action = 0;
			puts("A skeleton appeared!");
			puts("What will you do?");
			puts("1. Fight it!");
			puts("2. Run Away!");
			scanf("%d", &action);

			if(action == 1) // user fights skeleton
			{
				int outcome = rand() % 2; // 0-1 random outcome
				if(outcome == 0)
				{
					puts("The skeleton hit you! -1 point.");
					score -= 1;
				}
				else
				{
					puts("You defeated the skeleton! +1 point.");
					score += 1;
				}
			}
			else if(action == 2) // user runs away
			{
				puts("You run away safely.");
			}
			else
			{
				puts("Skeleton hits you for invalid action! -1 point");
				score -= 1;
			}
		}
		else if(event == 1)
		{
			int chestoption = 0;
			
			puts("You found a chest... what will you do?");
			puts("1. Open it?");
			puts("2. Leave it?");
			scanf("%d", &chestoption);

			if(chestoption == 1) // user opens chest
			{
				int chest = rand() % 3; // 0-2 random outcomes
				if(chest == 0)
				{	
					puts("The chest becae a mimic! -1 point");
					score -= 1;
				}
				else if(chest == 1)
				{
					puts("unless you want cobwebs and dust... it is empty");
				}
				else
				{
					puts ("You found shiny gold! +1 point");
					score += 1;
				}
			}
			else if(chestoption == 2) // user leaves the chest
			{
				puts("You leave the chest alone.");
			}
			else
			{
				puts("You walk away from an invalid choice.");
			}
		}
		else
		{
			puts("Nothing happens...");
		}
		printf("\nYour score: %d\n", score);
		if(score <= -3) // check if user dies (-3 score)
		{
			puts("\nYou took too much damage!");
			puts("You failed to escape door 24!");
			puts("Thank you for playing my room! - Jonray Mendoza");
			return;
		}
	} // end of 5 turns

	printf("\nFinal score: %d\n", score);
	if(score >= 3)
	{
		puts("You have made it out of Door 24!");
	}
	else
	{
		puts("You barely survived Door 24! Congrats!");
	}
	puts("Thank you for playing my room! - Jonray Mendoza");
	
} // end of JMfun


void RRlab(void)
{
	printf("RRroom61\n");
}

void RyansRoom(int inventoryRR[])
{
	int choice;
        int zombieHP = 25;

        int max = 10;
        int min = 5;

        printf("YOu enter a dimly lit mechanics garage.\n");
        printf("THe door you entered through turned into a restroom.\n");
        printf("It looks a mess, you think to your self, and the smell of something terrible is pungent.\n");
        printf("This isn't right....\n");
        printf("YOu look at the mechanics lift and you notice something.");
        printf("A Zombie!! Your worst nightmare come true!! You back away and decide to take action!!\n");

printf("What's your first step of action?\n");

for(int i =0; i < 15; i++)
{
printf("\n=============Choice==========\n");
printf("1.Fight the Zombie\n");
printf("2.Search the Garage\n");
printf("3.Try to escape using car\n");
printf("4.Use radio to call for help\n");
printf("5.Barricade Yourself\n");

printf("Choice:");
scanf("%d",&choice);

switch(choice)
{
        case 1:
                {

                        if(inventoryRR[0] == 0)
                        {
                                printf("You have no weapon!! You barely escape the zombie's clutches\n");
                        }
                        else
                        {
                                int damage = (rand() % (max - min +1)) + min ;// deal damage 5-10

                                zombieHP -= damage;

                                printf("You hit the zombie for %d damage!!\n",damage);

                                if(zombieHP <= 0)
                                {
                                        printf("You decommisioned the zombie!! Now's the time to escape.... \n");
                                        break;
                                }
                                else
                                {
                                         printf("It's still alive strike it again!!\n");
                                }

                        }
                                break;
	        }
        case 2:
                {

                        printf("You search the garage...\n");

                        if(zombieHP <= 0)
                        {
                                printf("The Zombies dead. Now you can search peacefully... \n");
                        }
                        else
                        {
                                printf("The search is very scary with the zombie still around.\n");
                        }

                                int item = rand() %3;

                                if(item == 0 && inventoryRR[0]== 0)
                                {
                                        printf("You found a wrench! A powerful weapon!\n");
                                        printf("Use it to strike the zombie!!\n");
                                        inventoryRR[0] = 1;
                                }
                                else if (item ==1 && inventoryRR[1] == 0)
                                {
                                        printf("You found car keys!!\n");
                                        inventoryRR[1] = 1;
					  }
                                else
                                {
                                        printf("You found nothing else useful\n");
                                        printf("Search Again\n");
                                }

                        break;
                }
        case 3:
                {

                        printf("You try to escape using car thats on the right of the lift...\n");
                        if(inventoryRR[1] == 0)
                        {
                                printf("The cars locked!! You need keys to get inside!!\n");
                        }
                        else
                        {
                                printf("You use the car key to unlock the car... \n");

                                if(zombieHP > 0)
                                {
                                        printf("The zombie makes it way towards you!! You fumble the keys!!\n");
                                        printf("You narrowly escape it!!\n");
                                }
                                else
                                {
					 printf("With the zombie gone, you calmly put the keys into ignition...\n");
                                }
                                printf("You Escape!!\n");
                                return;

                        }
                        break;

                }
        case 4:
                {

                        printf("You try to call for help!\n");
                        if(zombieHP > 0)
                        {
                                printf("The zombie is still here! Get rid of it!! \n");
                        }
                        else
                        {
                                printf("You call for help. The military is still running.... \n");
                                printf("All there is to do is wait.\n");
                                return;
                        }

                                break;

                }

	case 5:
                {
                        printf("You decide to barricade yourself in the bathroom!\n");
                        printf("You survived but for how long? \n");
			printf("You should do something else!!\n");
                        break;

                }

        default:
                {

                        printf("Invalid Choice!!\n");
                        break;
                }

                }//switch
        }//for loop
         printf("Going to the main menu...\n");
}//end of  function prototype RR
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
	printf("\nAG\n"); //ROOM 13, Alejandro Garcia
	int userChoice = 0;
	int num1 = rand() % 10; //0 to 9
	int num2 = rand() % 10; //0 to 9
	int num3 = rand() % 10; //0 to 9
	int safeCode[] = {num1,num2,num3}; 
	int userGuessCode[] = {0,0,0};
	int loopCounter = 0; //tracks how many times User has looped will matter
	int userStubborn = 0;
	bool codeCheck = false;

	reStart: 
	printf("You entered to room 13 and notice a mysterious book in the middle of the room...\n");
	printf("You get a feeling like you have been in this room before.\n");
	printf("You noticted the book in the middle of the room.\n");
		
	if(loopCounter == 0)
	{
		printf("You opened the book and noticed a note stuck inside on the first page:\n");
		printf("\tWhoever is reading this note, DO NOT read the past this note.\n");
		printf("\tYou must trust me or else everything you know will be gone.\n");
		printf("\tEven if you read the book inside your head the spell will activate an---\n");	
		printf("The last sentenced is unrecognizable but at least you know a spell will active.\n");
	}

	printf("Should you read the book or leave it be and head to a different room?\n");
	printf("Enter '1' for Yes, or '0' for No: "); //choice 1
	scanf("%d",&userChoice); 

	if(userChoice == 0 && userStubborn == 10) // if user keeps choosing no and no loops
	{
		printf("You hear a faint voice say: \n");
		printf("\tYou were supposed to read the book by now but you are being stubborn.\n");
		printf("\tIronically you being stubborn for not reading the book set you free but do you really feel acomplished?\n");
		printf("Enter '1' for Yes, or '0' for No: "); //choice 2
		scanf("%d",&userChoice);
		if(userChoice == 8)
		{
			printf("\tWait how did you know .\n");
			goto secret;
		}
		else
		{
			printf("\tYou do know that your choice doesn't matter here, now get out.\n");
		}
		printf("Water starts flooding into the room and waves pushes you out of room 13.\n\n");
		return;
	}

	while (userChoice > 1 || userChoice < 0) 
	{
		printf("Error: Enter '1' for yes or '0' for no");
		scanf("%d",&userChoice);
	}

	if(userChoice == 1)
	{	
		printf("Curiosity got the better of you and you decide to continue reading the book.\n");
		printf("\tWalking, Talking, I'm seeing doubles, Inside these puddles...\n");
		printf("The book is just random words with simple sentences and gives no clues on what the spell will do.\n");
		printf("Suddenly a bright red light engulfs the room and you passed out.\n\n");
		loopCounter++;

		printf("You entered to room 13 and notice a mysterious book in the middle of the room...\n");
		printf("You get a feeling like you have been-\n");
		printf("Wait a minute you already have been in this room before.\n"); 
		printf("You notice there's now a safe in the room with the book.\n");	
		printf("Your feel a chill down your spine and wonder what's happening to you.\n");

		printf("Should you open the book first or look at the safe first?\n");
		printf("Enter '1' for Book route, '0' for Safe route: "); //choice 3
		scanf("%d",&userChoice);

		if(userChoice == 1)
		{
			bookRoute:
			printf("You opened the book and notice there's a new text that you haven't seen before:\n");
			printf("\tIf you are reading this, that means the spell has gone into affect and you can now restart the same room aka Looping\n");
			printf("\tHowever the more you loop higher the consuequnce it will lead, I wouldn't recommend going past 5 loops if possible.\n");
			printf("\tBewarned that you may have looped already which is either caused by you or the room.\n");
			printf("When an option shows up enter '8' to loop.\n");
			printf("You closed the book and decided to inspect to the safe.\n");
			printf("After inspecting the safe you notice that it uses a uses a three single digit passcode to open it.\n");
		}
		else if(userChoice == 0)
		{
			printf("After inspecting the safe you notice that it uses a uses a three single digit passcode to open it.\n");
			printf("Should you enter a code or go open the book?\n");
			printf("Enter '1' to go to Book, '0' to enter a Code: "); //choice 4
			scanf("%d",&userChoice);
			if (userChoice == 1)
			{
				goto bookRoute;
			}
			else if (userChoice == 0)
			{
				// does nothing since it goes to solve safe's code either way
			}
		}
		else if (userChoice == 8)
		{
			loopCounter++;
			goto reStart;
		}
		else
		{
			printf("Error occured backing out of room.\n\n");
			return;
		}
			
		printf("You decided to go and enter a code into the safe.\n");
		for(int i = 0; i < 3; i++)
		{
			printf("Enter a single digit for the code: ");
			scanf("%d", &userGuessCode[i]);
		}
		codeCheck = true;
		for(int i = 0; i < 3; i++) // using a for loop to look through whole array
		{
			if(safeCode[i] != userGuessCode[i]) //using arrays to check if code is correct
			{
				codeCheck = false;
				break;
			}
		}
		if (codeCheck == true)
		{
			printf("The code you enter was correct and you got the safe to open\n");
			printf("When inspecting the safe you notice two glowing objects and another note.\n");
			printf("\tCongratulations adventurer you opened the safe as you notice there two glowing orbs.\n");
			printf("\tYou must choose the correct orb to set escape this room and to gain your memories back.\n");
			printf("\tOne orb will set you free and the other orb will make you relive this never ending cycle.\n");
			printf("Should you take the red orb or the blue orb?\n");
			printf("Enter '1' for Red, '0' for Blue: "); //choice 5
			scanf("%d",&userChoice);
			if (userChoice == 8)
			{
				printf("You hear a faint voice say, good thinking to recheck every route.\n");
				loopCounter++;
				goto reStart;
			}
			else if (userChoice == 1)
			{
				printf("You touched the red orb and notice nothing happened... or so you thought.\n");
				printf("A bright red light engulfs the room now you back at the begining where it all started.\n");
				printf("You noticted the book in the middle of the room.\n");

				if(loopCounter > 5)
				{
					printf("Your feel sharp pains from all the looping you have done to your body.\n");
					printf("You even started to forget who you are.\n");
					printf("You hear a faint voice say: \t You were so close to reaching the end yet you pushed your limits.\n");
					printf("\tI really thought that you had it this time but you seem to be forgetting how to escape with your memories intact.\n");
					printf("\tMaybe the time will be better that if you remember...\n");
					printf("Water starts flooding into the room and waves pushes you out of room 13.\n");
					printf("Although you escaped the room you won't ever truly escape if you don't remember.\n");
					printf("Total Loops occured: %d\n\n", loopCounter);
					return;
				}
				printf("You opened the book and noticed there's no note stuck inside.\n");
				printf("You inspected the whole to see if another loop has occured.\n");
				printf("You notice the door is wide open and you finally escape this room.\n");
				printf("Before leaving you decided to write a note into the book to warn others about the impending doom.\n");\
				printf("Just as you're about to finishing writing your warning the door starts closeing and you rush out side to explore the other rooms.\n");
				printf("Total Loops occured: %d\n", loopCounter);
				if(loopCounter == 2)
				{
					printf("WOAH. You got the lowest possible loop count of 2. YOU WON THIS SECRET MESSAGE!!\n\n");
				}
				else
				{
					printf("(Try to get the lowest loop count of 2, it's possible)\n\n");
				}
				return;
			}
			else if (userChoice == 0)
			{
				printf("You touched the red orb and notice nothing happened... or so you thought.\n");
				printf("A bright red light engulfs the room and you passed out.\n");
				loopCounter++;
				goto reStart;
			}
			else
			{
				printf("Error occured backing out of room.\n\n");
				return;
			}
		}
		else
		{
			printf("It seems like your code you entered is incorrect but at least nothing bad happ-*BOOM*\n");
			printf("Just before the the explosion injures you looped yourself back to the begining\n");
			printf("You hear a faint voice say to check every route.\n\n");
			loopCounter++;
			goto reStart;
		}
		
	}
	else if (userChoice == 0)
	{
		printf("You decided it's better to listen to the note's warning\n");
		printf("But you do wonder who wrote it and what happened to them\n");
		printf("Before heading out you noticed three numbers on the door which are: ");
		for(int i = 0; i < 3; i++)
		{
			printf("%d ", safeCode[i]);
		}
		printf(".\nThe room fills up with gas and you passed out on the cold floor\n\n");
		loopCounter++;
		userStubborn = userStubborn + 2;
		goto reStart;
	}
	else if (userChoice == 8)
	{
		secret:
		printf("Woah you found a secret way to get out of the room :O\n");
		printf("In a way you successfully beaten this room so congrats!!\n\n");
		return;
	}
	else
	{
		printf("Error occured backing out of room.\n\n");
		return;
	}
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

void dGMyName(void)
{
	printf("DG\n");
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
    // Based on the game "Dave The Diver" and the Club Penguin diving game lol
	  char *treasure[] = {"Pearl", "Diamond Ring", "Heart Boxers", "Gold Dabloons", "Sweaty Sock", "Krabby Patty"};
    int numTreasure = 0;
    int oxygen = 100;
    int depth = 0;
    int extraTank = 0;
    int propeller = 0;
    int userchoice;
    int i = 0;
    int luck = rand() % 10 + 1;
    int treasureidx = 0;
    int dive;
    int dolphin = 0;
    int kraken = 0;
    int gameover = false;
    int ghostship = 0;
    int jellyfish = 0;

    printf("\n\n𓇼 ⋆.˚ 𓆝⋆.˚ 𓇼 °‧ 𓆝 𓆟 𓆞 ·｡⊹ ﹏𓊝﹏𓂁﹏⊹ ˖ 𓇼 ⋆.˚ 𓆝⋆.˚ 𓇼 ⋆.˚ 𓆝⋆.˚ 𓇼 \n");
    printf("                         Deep Sea Diver                           ");
    printf("\n\n𓇼 ⋆.˚ 𓆝⋆.˚ 𓇼 °‧ 𓆝 𓆟 𓆞 ·｡⊹ ﹏𓊝﹏𓂁﹏⊹ ˖ 𓇼 ⋆.˚ 𓆝⋆.˚ 𓇼 ⋆.˚ 𓆝⋆.˚ 𓇼 \n");
    
    printf("\nHello diver! We are going diving for treasure!");
    printf("\n(You receive one oxygen tank and diving gear...");

    while(oxygen > 0 && depth < 100 && gameover == 0)
    {
      printf("\n\nOxygen: [");
      for(i = 0; i < 10; i++)
      {
        if(i < (oxygen / 10))
        {
          printf("#");
        }
        else
        {
          printf(" ");
        }
      }
      printf("]     %d %% left\n", oxygen);

      printf("Depth: You are %d meters down\n", depth);
      printf("\n𓇼 ⋆.˚ 𓆉  𓆝  𓆡⋆.˚ 𓇼  𓇼 ⋆.˚ 𓆉 𓆝  𓆡⋆.˚\n\n");

      printf("Choose what to do: \n1) Search Around \n2) Dive Deeper\nChoice: ");
      scanf("%d", &userchoice);

      luck = rand() % 10 + 1;

      if(userchoice == 1)
      {
        oxygen -= 5;
        if(luck > 5) 
        {
            printf("You found %s!\n", treasure[treasureidx]);
            numTreasure++;
            treasureidx++;
        }
        else
        {
          printf("Tough Luck... You found nothing.\n");
        }
      }
      else
      {
         if(propeller == 1)
         {
           dive = 20;
         }
         else
         {
           dive = 10;
         }
         oxygen -= 10;
         depth += dive;
         printf("You dove %d meters...\n", dive);
      }
      
      if(luck < 5 && depth > 20 && kraken == 0)
      {
        kraken = 1;
        printf("\n !!!!! KRAKEN ATTACK !!!!! Crazy strong tentacles grab you!\n");
        printf("Choose what to do: \n1) Fight\n2) Use Propeller to escape (if you have one)\nChoice: ");
        scanf("%d", &userchoice);
        if(userchoice == 1 || (userchoice == 2 && propeller == 0))
        {
          printf("You fought hard!! The fight used up a lot of oxygen.\n");
          oxygen -= 20;
        }
        if(userchoice == 2 && propeller == 1)
        {
          printf("You safely got away!\n");
        }
      }
      if(depth >= 30 && depth <= 40 && dolphin == 0) 
      {
        printf("\n! You see a baby dolphin tangled in a net!\n");
        printf("Choose what to do: \n1) Cut the net (-10 Oxygen)\n2) Ignore (You're an evil evil person)\nChoice: ");
        scanf("%d", &userchoice);
        if(userchoice == 1)
        {
          printf("The dolphin is free! It gives you %s!\n", treasure[treasureidx]);
          dolphin = 1;
          oxygen -= 10;
          numTreasure++;
          treasureidx++;
        }
      }

      if(depth == 20 && propeller == 0)
      {
        printf("\n! You see a propeller under a rock! This could come in handy!\n 1) Pick up\n2) Leave it\n Choice: ");
        scanf("%d", &userchoice);
        if(userchoice == 1)
        {
          propeller = 1;
          printf("\n Propeller added to your inventory.");
        }
      }

      if(depth <= 60 && depth >= 50 && extraTank == 0)
      {
        printf("\n You see an extra oxygen tank!\n1) Pick up\n2) Leave it\nChoice: ");
        scanf("%d", &userchoice);
        if(userchoice == 1)
        {
          printf("Extra oxygen tank equipped. You can reach the bottom with this much oxygen!\n");
          extraTank = 1;
          oxygen += 30;
        }
      }
      
      if(depth >= 70 && extraTank == 0 && propeller == 0)
      {
        printf("\n It is wayyyy too deep down here. The preasure is too much. You must go back to the surface.\n");
        break;
      }
      if(depth == 80 && ghostship == 0)
      {
        ghostship = 1;
        printf("\nA ghost ship looms by.. Choose what to do:\n1) Enter (-15 Oxygen)\n2) Pass\nChoice: ");
        scanf("%d", &userchoice);
        if(userchoice == 1)
        {
          if(luck > 5)
          {
            printf("\nYou found the Captain's Chest! (+5 Treasure)!\n");
            numTreasure+= 5;
          }
          else
          {
            printf("\nIt was a trap! You barely escaped alive as ghosts chased you out!\n");
            oxygen -= 20;
          }
        }
      }
      if(depth == 90 && jellyfish == 0)
      {
        printf("\nYou stumbled across a swarm of glowing jellyfish! Choose what to do: \n1) grab the glowing treasure underneath them\n2) TOUCH THE JELLY\nChoice: ");
        scanf("%d", &userchoice);
        if(userchoice == 1)
        {
          printf("\nWow you are smart... im sure no one would be stupid enough to pick the other option (+1 treasure)\n");
          numTreasure += 1;
        }
        else
        {
          printf("TOUCHTHEJELLYTOUCHTHEJELLY ALL HAIL THE JELLY WOOOOOOOOO... (the jellyfish seemed to have poisoned you.... you swam up???\n");
          depth -= 10;
        }
      }

      if(depth >= 100)
      {
        printf("\nYOU DID IT!!!! You reached the bottom\n");
        numTreasure += 5;
        break;
      }

      printf("\nContinue? \n1) Yes\n2) No\nChoice: ");
      scanf("%d", &userchoice);
      if(userchoice == 2)
      {
        break;
      }
      
    }

    printf("\nCongratds! You reached the surface with %d treasures!!\n", numTreasure);
    printf("You may now escape this room....\n\n");

}

void ip21(void)
{
	printf("IP\n");
	//Setting up the enviroment
	printf("\nUpon Entering 'Room 21' your nose is greeted by the smell of popcorn and dust, your eyes see what looks like the lobby of a movie theater, \nand you hear Justin Beiber's 'Baby ft. Ludacris' playing softly out of a speaker. Also everything is in black and white including you.\n");
	puts("Just as you're reminiscing about your near death experience you hear someone call you by your name.");
	puts("");//new line

	//Cashier Talk
	puts("'Hey your name welcome to the 20th anual Jared Leto movie Marathon!!!'");
	puts("'What movie would you like to see?'");
	puts("");
	puts("Seeing as you dont know much of anything you walk up to the counter.");

	//Array to keep track of what movies have been seen
	bool movieSeen[5] = {false, false, false, false, false};

	//while loop since we're gonna be returning to the lobby to see all the other movies
	while(movieSeen[0] == false || movieSeen[1] == false || movieSeen[2] == false || movieSeen[3] == false || movieSeen[4] == false)
	{
		//Counter: keeps track of the loop count
		int counter = 0;


		//Prompt Choice of Movie
		puts("Gazing at the movie showings listed you see:");
		if(movieSeen[0] == false)
		{
		    puts(" 1) Tron: Ares");
		}
		if(movieSeen[1] == false)
		{
			puts(" 2) Morbius");
		}
		if(movieSeen[2] == false)
		{
			puts(" 3) Zach Snyder's Justice League");
		}
		if(movieSeen[3] == false)
		{
			puts(" 4) Suicide Squad");
		}
		if(movieSeen[4] == false)
		{
			puts(" 5) American Psycho");
		}

		//Read in Input
		int playerInput = 0;
		scanf("%d", &playerInput);

		//Check to see if the input is out of bounds or if the movie has already been seen
		while(playerInput > 5 || playerInput < 1 || movieSeen[playerInput - 1] == true)
		{
			puts("The choice you made is not available. Please input another choice.");
			scanf("%d", &playerInput);
		}

		//Movie 1 is chosen
		if(playerInput - 1 == 0)
		{
			puts("");
			puts("'Tron: Ares it is sir. Your theater will be room 5 on the right.'");
			movieSeen[0] = true;

			//Tron Ares Scene Bellow-------------------------------------------------------------------------
			puts("");
			puts("Heading towards the right and into room 5 you notice that the theater is empty. And thus you chose your favorite seat and waited for the movie to starts.");
			puts("------25 minutes later------");
			puts("After a long wait a crew member enters the theater and aproaches your seat.");
			puts("'Im sorry to inform you but we are having difficulties with the projector and can't get the movie to start. Therfor we're asking you to return to the lobby'");
			printf(" 1) Alright I'll go back to the lobby\n 2) Can I take a look at the projector, I might be able to fix it\n");

			//input
			int tronInput = 0;
            		scanf("%d", &tronInput);
		
            		//Check to see if the input is out of bounds or if the movie has already been seen
            		while(tronInput > 2 || tronInput < 1)
            		{
                		puts("The choice you made is not available. Please input another choice.");
                		scanf("%d", &tronInput);
            		}

			if(tronInput == 2)
			{
				puts("The employee guides you to the projection room and waits for you to do your thing.");
				//WORKING HERE WORKING HERE
				int working = 0;
				int option = 0;
				while(working < 1)
				{
					puts("In front of you lies the projector, what do you do?");
					puts(" 1) Check to see if the projector is plugged in");
					puts(" 2) Open it up to see if it is a hardware issue");
					puts(" 3) Trun it off and then back on");
					scanf("%d", &option);

					while(option > 3 || option < 1)
					{
						puts("The choice you made is not available. Please input another choice.");
                        			scanf("%d", &option);
					}

					if(option == 1)
					{
						puts("You follow the cable leading out of the projector and it lead to an outlet.");
						puts("Of course its plugged in already");
					}
					else if (option == 2)
					{
						puts("You open up the projector with a screwdriver you found nearby only to realize that this projector is ancient and you done know anything about it");
					}
					else if (option == 3)
					{
						puts("You reset the projector and the movie starts.");
						working = working + 1;
					}
				}
				puts("Now that the projector works you rush down to your seat and watch Tron: Ares.");
			}
			else
			{
				puts("Seeing as the film wont show you leave.");
			}
		}
		//movie 2 is chosen
		else if(playerInput - 1 == 1)
		{
			puts("");
			puts("'Morbius it is sir. Your theater will be room 6 on the right.'");
			movieSeen[1] = true;

			//Morbius Scene Bellow--------------------------------------------------------------------------
			puts("On your way to theater 6 you encounter a curious sight, at the entrance of theater 6 stands a chicken that is on a cat that is on a dog that is on a pig.");
			puts("You slowly walk up the gang of animals and introduce yourself.");
			puts("'It's a pleasure to meet you but alas we cannot let you pass unless you answer some basic math problems.' the chicken responds.");
			puts(" 1) Doing math isnt worth the hassle. Ill just head back to the lobby.");
			puts(" 2) Sure throw them at me.");

			int answer = 0;
			scanf("%d", &answer);

			while(answer > 2 || answer < 1)
			{
				puts("Your input is invalid. Please try again.");
				scanf("%d", &answer);
			}

			if(answer == 1)
			{
				puts("You turn around and head back to the lobby, not amount of Jared Leto would make up for the math.");
			}
			else if(answer == 2)
			{
				puts("'Very well.' said the pig");
				puts("'Get ready to do the best math of your life.' said the dog");
				puts("'What is the derivative of e^x?' said the cat");

				puts(" 1) It cannot be determined.");
				puts(" 2) e^x");
				puts(" 3) I straight up don't know.");

				scanf("%d", &answer);
				while(answer > 3 || answer < 1)
				{
					puts("Invalid answer. Please try again.");
					scanf("%d", &answer);
				}
				if(answer == 1)
				{
					puts("'WRONG ' meowed the cat");
					puts("'Please leave' said the pig");
				}
				else if (answer == 2)
				{
					puts("'Horah!! You got it right.' said the dog");

					puts("The tower of animals walks away and you enter the theater.");
					puts("You get into your seat and watch Morbius, and once its done you head back to the lobby.");
				}
				else if (answer == 3)
				{
					puts("'I apreciate the honesty. But it's still wrong.' said the chicken");
					puts("'Please leave' said the pig");
				}
			}
		}
		//movie 3 is chosen
		else if(playerInput - 1 == 2)
		{
			puts("");
			puts("'Zach Snyder's Justice League it is sir. Your theater will be room 10 on the left.'");
			movieSeen[2] = true;

			//Justice League Scene Bellow-------------------------------------------------------------------
			puts("You tak3 a s3at in th3ater 10 and realiz3 that all 3 ar3 r3plac3d with 3 and that you can s33 the color blu3.");
			puts("You watch the 5 hour long film in silence and yo- wait a minute, you fell alseep 10 minutes in. You wake up after a while dazed and confused and head back out.");

		}
		//movie 4 is chosen
		else if(playerInput - 1 == 3)
		{
			puts("");
			puts("'Suicide Squad it is sir. Your theater will be room 12 on the left.'");
			movieSeen[3] = true;

			//Suicide Squad Scene Bellow-------------------------------------------------------------------
			srand(time(NULL));
			int randNum = 1 + rand() %5;
			int numGuessed = 0;

			puts("You make the longe trek to theater 12 and find a seat and wait for the movie to start.");
			puts("While waiting for the film to start a clown sits on the sit immediatly to your right.");
			puts("About twenty minutes into the movie he leans over and asks you to guess a number between 1 and 5.");
			puts(" 1) 2");
			puts(" 2) 5");
			puts(" 3) 3");
			puts(" 4) 1");
			puts(" 5) 4");

			scanf("%d", &numGuessed);

			while(numGuessed > 5 || numGuessed < 1)
			{
				puts("'I belive I said to guess a NUMBER BETWEEN 1 AND 5, inclusive of course.' said the Clown");
				scanf("%d", &numGuessed);
			}
			if(numGuessed == 1)
			{
				if(randNum == 2)
				{
					puts("'DING DING DING!!! We have a winner answer #1 that was 2 is right!!!' yelled the clown as he ran out of the theater");
					puts("You continue watching the film in silence");
				}
				else
				{
					puts("*A lound buzzer can be hear* 'Wrong answer.' whispered the Clown.");
					puts("The clown sat next to you for the rest of the film");
				}
			}
			else if(numGuessed == 2)
			{
				if(randNum == 5)
				{
					puts("'DING DING DING!!! We have a winner answer #2 that was 5 is right!!!' yelled the clown as he ran out of the theater");
                    			puts("You continue watching the film in silence");
				}
				else
                		{
                    			puts("*A lound buzzer can be hear* 'Wrong answer.' whispered the Clown.");
                    			puts("The clown sat next to you for the rest of the film");
                		}
			}
			else if(numGuessed == 3)
			{
				if(randNum == 3)
				{
					puts("'DING DING DING!!! We have a winner answer #3 that was 3 is right!!!' yelled the clown as he ran out of the theater");
                    			puts("You continue watching the film in silence");
				}
				else
                		{
                    			puts("*A lound buzzer can be hear* 'Wrong answer.' whispered the Clown.");
                    			puts("The clown sat next to you for the rest of the film");
                		}
			}
			else if(numGuessed == 4)
			{
				if(randNum == 1)
				{
					puts("'DING DING DING!!! We have a winner answer #4 that was 1 is right!!!' yelled the clown as he ran out of the theater");
                    			puts("You continue watching the film in silence");
				}
				else
                		{
                    			puts("*A lound buzzer can be hear* 'Wrong answer.' whispered the Clown.");
                   	 		puts("The clown sat next to you for the rest of the film");
                		}
			}
			else if(numGuessed == 5)
			{
				if(randNum == 4)
				{
					puts("'DING DING DING!!! We have a winner answer #5 that was 4 is right!!!' yelled the clown as he ran out of the theater");
                    			puts("You continue watching the film in silence");
				}
				else
        			{
           			puts("*A lound buzzer can be hear* 'Wrong answer.' whispered the Clown.");
            			puts("The clown sat next to you for the rest of the film");
        			}
			}
		}
		//movie 5 is chosen
		else if(playerInput - 1 == 4)
		{
			puts("");
			puts("'American Psycho it is sir. Your theater will be upstairs in room 15.'");
			movieSeen[4] = true;

			//American Psycho Scene Bellow-----------------------------------------------------------------
			puts("Heading upstairs you enter theater 15, and get the best seat in the house.");
			puts("The movie starts on time and you had a good time.");
		}


		//Finished seeing the movie message
		counter = counter + 1;
		if(playerInput - 1 == 0)
		{
			puts("Having ''finished'' Tron: Ares you find yourself walking back to the lobby to see what movie you're gonna next.");
		}
		else if(playerInput - 1 == 1)
		{
			puts("Having ''finished'' Morbius you find yourself walking back to the lobby to see what movie you're gonna next.");
		}
		else if(playerInput - 1 == 2)
		{
			puts("Having ''finished'' Justice League you find yourself walking back to the lobby to see what movie you're gonna next.");
		}
		else if(playerInput - 1 == 3)
		{
			puts("Having ''finished'' Suicide Squad you find yourself walking back to the lobby to see what movie you're gonna next.");
		}
		else if(playerInput - 1 == 4)
		{
			puts("Having ''finished'' American Psycho you find yourself walking back to the lobby to see what movie you're gonna next.");
		}
	}

	//Ending notice that i'll delete later hopefully
	printf("\n\n!!!!!As you heading back to the lobby you hear a loud THUD and your vision grows black!!!!!\n\n");

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
void gameroom30(void)
{
	//CHOICE 1 : CHEST (uses loop)
		puts("You see two chests in the room, one is ornate, guilded with gold and precious stones, the other is a simple wooden chest with no adornments. Which chest do you open? (1: choose the ornate chest, 2: choose the simple chest)");
		int playerChoice = 0;
		bool inspiration = false;
		scanf("%d",&playerChoice);
		while (playerChoice != 1 && playerChoice != 2)
		{
			puts("Invalid choice, please enter 1 for ornate or 2 for simple.");
			scanf("%d",&playerChoice);
		}
		switch (playerChoice)
		{
			case 1:
			{
				puts("It was actually a mimic! You're being punished for your avarice and greed! It bites your hand off.");
				break;
			}
			case 2:
			{
				puts("You open the simple chest and find a healing potion inside. You drink the potion and you feel rejuvenated.");
				inspiration = true;
				break;
			}
		}

		puts("Now you know that every action has a consequence, whether it be good or bad.\n");
		puts("Now lets so how you deal with conflict.\n\n");

	//CHOICE 2: CHIMERA (uses loop)
		puts("You see a chimera approach, snarling with disdain. There is a sword on the floor. What will you do?");
		puts("(1: fight the chimera, 2: run away, 3: try to talk to it)");
		playerChoice = 0;
		bool friendship = false;
		bool fatigue = false;
		bool sword = false;
		scanf("%d",&playerChoice);
		while (playerChoice != 1 && playerChoice != 2 && playerChoice != 3)
		{
			puts("Invalid choice, please enter 1 to fight, 2 to run away, or 3 to talk.");
			scanf("%d",&playerChoice);
		}
		switch(playerChoice)
		{
			case 1:
			{
				puts("You pick up the sword and charge at the chimera. You manage to land a hit but the chimera is too strong.");
				sword = true;
				if (inspiration)
				{
					puts("But good thing you had a refreshing beverage and get a second wind. With a swing from your mighty blade you manage to defeat the chimera! But I think you just got a lucky hit");
					inspiration = false;
				}
				else
				{
					puts("You realize you are too weak to keep fighting and any chance of victory is gone. But all you can think of is, ");
					puts("'man, am I thirsty. Too bad I don't have a refreshing beverage.'");
					puts("You run away to fight another day.");
					fatigue = true;
				}
				break;
			}
			case 2:
			{
				puts("You realize the chimera is to great a foe and turn around, running as fast as you can. ");
				break;
			}
			case 3:
			{
				puts("You try to talk to the chimera, not knowing if it knows human language.");
				puts("'Hey chimera, how's it going?'");
				puts("The chimera looks at you and says, 'Many adventurers have come to try and slay me. None of them have ever come to just have a chat. It's so lonely here.'");
				puts("You and the chimera have a heart to heart and you become friends.");
				puts("As you part, the chimera says, 'Should you ever need my help, just call out to me and I will be there.'");
				friendship = true;
				break;
			}

		}
	
	//CHOICE 3: TRAINING (uses rand and loop)
		puts("You realize how weak you are after the encounter with the chimera.");
		puts("Do you want to have your training montage? (1: yes, 2: no)");
		playerChoice = 0;
		scanf("%d",&playerChoice);
		while (playerChoice != 1 && playerChoice != 2)
		{
			puts("Invalid choice, please enter 1 for yes or 2 for no.");
			scanf("%d",&playerChoice);
		}
		switch(playerChoice)
		{
			case 1:
			{
				puts("Great choice! Lets start small. \nYou see a slime and decide to fight it.");
				int slimeHealth = 10;
				while (slimeHealth > 0)
				{
					int damage = rand() % 5 + 1;
					slimeHealth -= damage;
					printf("You hit the slime for %d damage. Slime health is now %d.\n", damage, slimeHealth);
				}
				puts("You have defeated the slime!");
				inspiration = true;
				break;
			}
			case 2:
			{
				puts("Interesting choice, but you go on your way.");
				break;
			}
		}

	//CHOICE 4: BANDITS (uses rand and array)
		puts("You come across a fork in the road. Do you go left or right? (1: left, 2: right)");
		playerChoice = 0;
		char *loot[] = {"You got a bag of holding. Slay diva, walk into the room purse first", "You got a portable hole! Use this responsibly or people might look at you weird.", "You got an immovable rod...if you figure out how to move it.", "You got a bag of beans, who knows what will grow if you plant them. Or I guess you can eat these mystery beans too.", "You found the wand of polymorph, no idea what they will turn into though."};
		scanf("%d",&playerChoice);
		while (playerChoice != 1 && playerChoice != 2)
		{
			puts("Invalid choice, please enter 1 for left or 2 for right.");
			scanf("%d",&playerChoice);
		}
		switch(playerChoice)
		{
			case 1:
			{
				puts("You take the left path and find a peaceful meadow with a sparkling stream. What great luck!");
				fatigue = false;
				break;
			}
			case 2:
			{
				puts("You take the right path. The sides of the path close around you, walls of thorns and vines force you to keep to the path. Around the bend you see a fallen tree.");
				puts("From behind the tree a gang of goblins jump out to ambush you!");

				if (friendship)
				{
					puts("You scream, taken completely by surprise. As you prepare to fight you hear a loud roar and the chimera comes to your rescue! The goblins are no match for the chimera and you are safe once again.");
					puts("'I didn't think you could call on me so quickly but glad I could help. But I am quite busy'");
					puts("You get the feeling that the chimera is a bit irritated, they had crumbs in its fur. I think you interupped its lunch. Best not bother them for a while.");
					puts("The chimera flies off but you see something that was dropped by the goblins.");
					int randomLoot = rand() % 5;
					puts(loot[randomLoot]);
					char *aquiredItem = loot[randomLoot];
					friendship = false;
				}
				else if(inspiration)
				{
					puts("Good thing you're ready this time. You fight off the goblins with your newfound strength and confidence.");
					puts("You win the fight but better hope nothing else comes up");
					puts("Through your fatigue you see something that was dropped by the goblins.");
					int randomLoot = rand() % 5;
					puts(loot[randomLoot]);
					char *aquiredItem = loot[randomLoot];
					inspiration = false;
					fatigue = true;
				}
				else if (fatigue)
				{
					puts("Youre still pretty tired from the fight with the chimera and you are not sure if you can take on the goblins. You try to run but they are too fast and catch you.");
					puts("You're too tired to fight back and the goblins easily overpower you. They take all your belongings and leave you with nothing but the clothes on your back.");
				}
				else
				{
					puts("You realize you aren't strong enough to take on the goblins and try to run. Luckily these goblins are dumb and you nimbly dodge their attacks, escaping unscathed.");
					fatigue = true;
				}
				break;
			}
		}
		

	//CHOICE 5 : LAST TEST 
	puts("You walk for a while and come across a large stone door. Before the door is a large cloaked figure. Their clothes tattered and showing signs of distress and hard times.");
	puts("'Please, you have the ability to leave but not all of us have that fortune. I have been trapped here for so long, I just want to be free. Please, if you could help me in some way I would be so grateful.'");
	puts("What do you do? (1: help the figure, 2: ignore the figure and open the door)");
	playerChoice = 0;
	scanf("%d",&playerChoice);
	while (playerChoice != 1 && playerChoice != 2)
	{
		puts("Invalid choice, please enter 1 to help or 2 to ignore.");
		scanf("%d",&playerChoice);
	}
	switch(playerChoice)
	{
		case 1:
		{
			if (friendship)
			{
				puts("'I wish I had something to give you, but I don't have anything on me.'");
				puts("The figure looks at you and says, 'That's okay, I understand. I just wanted to ask for help but I understand.'");
				puts("You feel a little bad for not being able to help him but maybe I know someone who can.'");
				puts("You call out to the chimera and it comes to your aid.");
				puts("'I found the way out so looks like I won't be able to see you again, but can you help my friend as a favor to me?'");
				puts("The chimera nods and the figure looks at the chimera with hope in his eyes. The chimera looks at you and says, 'I don't have time to help everyone but I can help this one person since you asked.'");
				puts("The chimera takes the figure and flies off to help them. You hope that they can find a way out of here.");
			}
			else if (inspiration)
			{
				if (sword)
				{
					puts("You make your way to go past him but stop just before him. Holding out your sword to him you say,");
					puts("'I hope this helps you more than it helped me.'");
					puts("The figure looks at the sword and then back at you. He seems grateful. As you look at him you see how much larger he looks up close. Guess he made do without a weapon for thing long. Good thing you didn't piss him off.");
				}
				else
				{
					puts("You make your way to go past him but stop just before him. You say,");
					puts("'I wish I had something to give you, but I don't have anything on me.'");
					puts("The figure looks at you and says, 'That's okay, I understand. I just wanted to ask for help but I understand.'");
					puts("You feel a little bad for not being able to help him but give him some advice,");
					puts("'I know how to get out of here, but you've made it this far, if you find fork in the road take the left path and stay there.'");
				}
			}
			else if (fatigue)
			{
				puts("'I'll try and help as best I can'");
				puts("You then collapse on the ground from exhaustion. The figure looks at you with pity and takes your body and opens the door and tosses you through it.");
			}
			else
			{
				puts("'I'll try and help as best I can'");
				puts("You spend some time with him to try and help him in some way, but he soon realizes that you don't have much to give and with disappointment waves you on.");
				puts("You can't help but feel bad for not being able to help him, but you have to move on. You hope that he can find a way out of here as well.");
			}

			break;
		}
		case 2:
		{
			if (friendship)
			{
				puts("You make your way to go past him but stop just before him. You say,");
				puts("'I wish I had something to give you, but I don't have anything on me.'");
				puts("The figure looks at you and says, 'That's okay, I understand. I just wanted to ask for help but I understand.'");
				puts("You feel a little bad for not being able to help him but give him some advice,");
				puts("'Theres a chimera somewhere in this place, if you befriend them, you might be able to call on them for help.'");
			}
			else if (inspiration)
			{
				if (sword)
				{
					puts("You make your way to go past him but stop just before him. Holding out your sword to him you say,");
					puts("'I hope this helps you more than it helped me.'");
					puts("The figure looks at the sword and then back at you. He seems grateful. As you look at him you see how much larger he looks up close. Guess he made do without a weapon for thing long. Good thing you didn't piss him off.");
				}
				else
				{
					puts("You make your way to go past him but stop just before him. You say,");
					puts("'I wish I had something to give you, but I don't have anything on me.'");
					puts("The figure looks at you and says, 'That's okay, I understand. I just wanted to ask for help but I understand.'");
					puts("You feel a little bad for not being able to help him but give him some advice,");
					puts("'I know how to get out of here, but you've made it this far, if you find fork in the road take the left path and stay there.'");
				}
			}
			else if (fatigue)
			{
				puts("'I'm too tired to be of any help to you.'");
				puts("You try to push past him. Your rude comment seems to have offended him and he becomes enraged. He attacks you and you are too tired to fight back. He easily overpowers you and beats you.");
				puts("'I didn't last here so long without being able to fight. But you just had to be rude. I hope you learned your lesson.'");
				puts("The figure leaves you beaten and bruised on the ground. And he took all your loot for good measure.");
				puts("You have no choice but to open the door and leave.");
			}
			else
			{
				puts("You ignore the figure and open the door. As you step through you see the figure still standing there, staring at you with a look of disappointment. You have no idea who this figure is or what they wanted but you just left them there. You don't think of anyone but yourself.");
				puts("As you walk through the door, it slams shut behind you. Hopefully you got something for your troubles. You disgust me. >:()");
			}
			break;
		}
	}
  return;
}
		

void printInitialsAjewett(void)
{
	printf("AJ\n");
}

void startRoom9(void)
{
	char* itemNames[] = {"Loaf of Bread", "Helium Tank", "Box Fan", "Number 1 Balloon"};
	double itemPrices[] = {1.25, 30.00, 19.00, 5.00};
	int NUM_OF_ITEMS = 4; //Length of the array, change when array modified.
	double money = 5.25;
	int option = -1; //For figuring out which option the user chose
	
	////////////////////////////
	//Getting to the game show//
	////////////////////////////

	printf("You are on your way to a price guessing game show, where you intend to win as much money as possible.\n");
	printf("You currently have $%lf\n", money);
	printf("In order to get to the game show, you have two options: \n1. Walk directly to the game show\n2. Take the bus to the store to buy a snack and then to the game show ($1.75).\n");
	printf("Pick an option: ");
	scanf("%d", &option);

	while(option < 1 || option > 2)
	{
		printf("Invalid option, pick 1 or 2: ");
		scanf("%d", &option);
	}

	if(option == 1)
	{
		printf("You decide to walk directly to the game show, and on the way you find a person asking for money\n\n");
		printf("Person: \"Hello, do you think you could spare $1.25 for me? I want to go to the store and buy something to eat.\"\n");
		printf("What do you do?\n1. Give him the money and ask him what he is going to buy\n");
		printf("2. Give him the money without asking any questions\n3. Don't give him the money\n");
		printf("Pick an option: ");
		scanf("%d", &option);

		while(option < 1 || option > 3)
		{
			printf("Invalid option, pick 1, 2, or 3: ");
			scanf("%d", &option);
		}

		if(option == 1)
		{
			printf("Person: \"Thank you friend, I am going to the store to buy a loaf of bread.\"\n");
			printf("You feel like you should remember this\n"); //Answer to one of the questions
			money -= 1.25;
		}
		else if(option == 2)
		{
			printf("Person: \"Thank you friend, I appreciate it.\"\n");
			printf("You get a strange feeling that asking what he was going to buy could have helped you.\n");
			money -= 1.25;
		}
		else if(option == 3)
		{
			printf("You decide to walk away, as you hardly have money to spare right now.\n");
		}

		printf("You have arrived to the game show on time\n\n");
	}
	else if(option == 2)
	{
		money -= 1.75; //Bus fare
		printf("The bus arrives roughly on time, and you take the bus to a local store\n");
		printf("When you enter the store, you wonder if you should not only buy a snack, but possibly a drink as well. Your options are: \n");
		printf("1. Buy just a snack ($1.25)\n2. Buy a snack and drink ($2.60)\n3. Leave\n");
		printf("Pick an option: ");
		scanf("%d", &option);

		while(option < 1 || option > 3)
		{
			printf("Invalid option, pick either 1, 2, or 3: ");
			scanf("%d", &option);
		}		

		//Generate 2 seperate items that the user can find the price for in the store.
		//Also make sure that both are not the same item
		int item1 = -1;
		int item2 = -1;
		while(item1 == item2)
		{
			item1 = rand() % NUM_OF_ITEMS;
			item2 = rand() % NUM_OF_ITEMS;
		}

		if(option == 1)
		{
			printf("You decide to buy just a snack.\n");
			money -= 1.25;
			printf("While on your way to buy a snack, you spot an item and get a strange feeling that you should remember it: \n");
			printf("%s: $%lf\n", itemNames[item1], itemPrices[item1]);
		}
		else if(option == 2)
		{
			printf("You decide to buy a snack and a drink.\n");
			money -= 2.60;
			printf("While on your way to buy a snack and drink, you spot 2 items and get a strange feeling that you should remember them: \n");
			printf("%s: $%lf\n", itemNames[item1], itemPrices[item1]);
			printf("%s: $%lf\n", itemNames[item2], itemPrices[item2]);
		}
		else if(option == 3)
		{
			printf("You decide to leave without buying anything, and think to yourself that you should have just walked if you didn't plan to go to the store.\n");
		}

		printf("You leave the store, and get on the bus to the game show.\n");
		printf("After a short while, you arrive at the game show on time.\n\n");
	}

	/////////////////////
	//Game Show Section//
	/////////////////////
	
	double currentEarnings = 0.0;

	printf("After entering the game show, the announcer greets you and begins the show.\n");
	printf("Announcer: \"Welcome Everybody! Today we will be playing a price guessing game!\"\n");
	printf("Announcer: \"The rules are as follows:\n1. Getting within 1/4 of the price of an item will win you $10,");
	printf(" and getting the exact price of the item will win you $15.\n");
	printf("2. If you get a question wrong, you do not lose your current winnings, except in the case of rule 3.\n");
	printf("3. Once you get to the last question, you can decide to try double or nothing, where getting within 1/4 of the item will");
	printf(" double the amount of money you earn, getting the exact amount will quadruple it, but getting the question wrong will lead to a loss of all of your earnings!\"\n\n");

	int numberOfQuestions = 0;
	printf("Announcer: \"Now, would you like to play a game with 3 or 4 questions?\"\n1. 3 questions\n2. 4 questions\n");
	printf("Pick an option: ");
	scanf("%d", &option);

	while(option < 1 || option > 2)
	{
		printf("Invalid option, pick 1 or 2: ");
		scanf("%d", &option);
	}

	if(option == 1)
	{
		numberOfQuestions = 3;
	}
	else if(option == 2)
	{
		numberOfQuestions = 4;
	}

	////////
	//Game//
	////////
	
	int questionIndex[numberOfQuestions]; //Array of the order in which each index will be asked
	

	//Even though this loop is not needed for 4 questions, it will still make it so that the order is random.
	int i;
	for(i = 0; i < numberOfQuestions; i++)
	{
		questionIndex[i] = rand() % NUM_OF_ITEMS;
		int j;
		int alreadyPresent = 0; //Checking if the index is already in the array
		for(j = 0; j < i; j++)
		{
			if(questionIndex[j] == questionIndex[i])
			{
				alreadyPresent = 1;
			}
		}

		if(alreadyPresent)
		{
			i--; //If the value is already present, loop through the given i one more time.
		}
	}

	for(i = 0; i < numberOfQuestions - 1; i++) //Loop excludes the last question so that a double or nothing can be done.
	{
		double guess;
		double margin = itemPrices[questionIndex[i]]/4;
		printf("Announcer: \"For question %d: how much does a(n) %s cost?\"\n", i+1, itemNames[questionIndex[i]]);
		printf("Your Guess: ");
		scanf("%lf", &guess);
		
		if(guess == itemPrices[questionIndex[i]])
		{
			printf("Announcer: \"Congratulations! Your guess is exactly correct! You get $15!\"\n");
			currentEarnings += 15.0;
		}
		else if(guess > itemPrices[questionIndex[i]] - margin && guess < itemPrices[questionIndex[i]] + margin)
		{
			printf("Announcer: \"Congratulations! Your guess is within the margin, so you get $10.\"\n");
			printf("Announcer: \"The price was $%lf.\"\n", itemPrices[questionIndex[i]]);
			currentEarnings += 10.0;
		}
		else
		{
			printf("Announcer: \"Unfortunately your guess was off, so you don't get anything.\"\n");
			printf("Announcer: \"The price was $%lf.\"\n", itemPrices[questionIndex[i]]);
		}

	}
	
	int doubleOrNothing = 0;
	printf("Announcer: \"We are coming up on the last question, would you like to double or nothing it?\"\n");
	printf("1. Yes\n2. No\nPick an option: ");
	scanf("%d", &option);

	while(option < 1 || option > 2)
	{
		printf("Invalid option, pick 1 or 2: ");
		scanf("%d", &option);
	}
	if(option == 1)
	{
		printf("You decide to double or nothing it\n");
		doubleOrNothing = 1;
	}
	else
	{
		printf("You decide not to double or nothing it\n");
	}

	double guess;
	i = numberOfQuestions - 1;
	double margin = itemPrices[questionIndex[i]]/4;
	printf("Announcer: \"For question %d: how much does a(n) %s cost?\"\n", i+1, itemNames[questionIndex[i]]);
        printf("Your Guess: ");
        scanf("%lf", &guess);

        if(guess == itemPrices[questionIndex[i]])
        {
                printf("Announcer: \"Congratulations! Your guess is exactly correct! ");
		if(doubleOrNothing)
		{
			printf("Your earnings will be quadrupled!\"\n");
			currentEarnings *= 4;
		}
		else
		{
			printf("You get $15!\"\n");
                	currentEarnings += 15.0;
		}
        }
        else if(guess > itemPrices[questionIndex[i]] - margin && guess < itemPrices[questionIndex[i]] + margin)
        {
                printf("Announcer: \"Congratulations! Your guess is within the margin, ");
                if(doubleOrNothing)
		{
			printf("so your current earnings will be doubled!\"\n");
			currentEarnings *= 2;
		}
		else
		{
			printf("so you get $10.\"\n");
			currentEarnings += 10.0;
		}
		printf("Announcer: \"The price was $%lf.\"\n", itemPrices[questionIndex[i]]);
        }
        else
        {
                printf("Announcer: \"Unfortunately your guess was off, ");
		if(doubleOrNothing)
		{
			printf("so you lose everything! I'm sorry, hopefully you have better luck next time.\"\n");
			currentEarnings = 0.0;
		}
		else
		{
			printf("so you don't get anything.\"\n");
		}
                printf("Announcer: \"The price was $%lf.\"\n", itemPrices[questionIndex[i]]);
        }

	money += currentEarnings;

	printf("Announcer: \"And that concludes our game! you are walking away with $%lf. I hope to see you again soon!\"\n", currentEarnings);

	printf("After the game show, you end the day with a total of $%lf.\n", money);

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
	bool choice;
    int health = 3;
    bool dragonAppears;
    char supplies[4][20] = {"torch", "healing potion", "iron sword", "magic horn"};

    printf("\n--- The Dragon Trial: Fire Escape ---\n");
    printf("You enter the room, but the stone door slams behind you.\n");
    printf("The room changes into a glowing castle hallway filled with smoke and fire.\n");
    printf("You hear wings, claws scraping the floor, and a dragon breathing nearby.\n");

    // Decision 1: true means option 1, false means option 2
    printf("\nDecision 1: What do you do first?\n");
    printf("1. Search the room for supplies.\n");
    printf("2. Run straight into the castle hallway.\n");
    choice = getChoiceDL();

    if (choice)
    {
        printf("You search the room and find a %s and a %s.\n", supplies[0], supplies[1]);
        health++;
    }
    else
    {
        printf("You run into the hallway, but trip over broken stone. You lose 1 health.\n");
        health--;
    }

    // Decision 2
    printf("\nDecision 2: Choose something to carry.\n");
    printf("1. Iron sword\n");
    printf("2. Magic horn\n");
    choice = getChoiceDL();

    if (choice)
    {
        printf("You grab the %s. It can help you defend yourself.\n", supplies[2]);
    }
    else
    {
        printf("You grab the %s. Maybe you can try to call for help later.\n", supplies[3]);
    }

    // Random boolean value decides if the player gets lucky
    dragonAppears = rand() % 2 == 0;

    // Decision 3
    printf("\nDecision 3: The dragon turns the corner.\n");
    printf("1. Hide behind a stone pillar\n");
    printf("2. Fight your way past it\n");
    choice = getChoiceDL();

    if (choice)
    {
        if (dragonAppears)
        {
            printf("The dragon walks past you, and you survive without losing health.\n");
        }
        else
        {
            printf("The dragon hears you moving and burns your arm with fire. You lose 1 health.\n");
            health--;
        }
    }
    else
    {
        if (dragonAppears)
        {
            printf("You strike the dragon and escape down the hallway.\n");
        }
        else
        {
            printf("The dragon swings its tail before you escape. You lose 1 health.\n");
            health--;
        }
    }

    // Decision 4
    printf("\nDecision 4: You reach the end of the castle hallway.\n");
    printf("1. Take the stone stairs\n");
    printf("2. Cross the burning bridge\n");
    choice = getChoiceDL();

    if (choice)
    {
        printf("The stone stairs are dark but safer. You move quietly.\n");
    }
    else
    {
        printf("The burning bridge cracks under your feet, and flames rise around you. You lose 1 health.\n");
        health--;
    }

    // Decision 5
    printf("\nDecision 5: You see the exit, but a trapped knight is calling for help.\n");
    printf("1. Escape immediately\n");
    printf("2. Try to rescue the knight\n");
    choice = getChoiceDL();

    if (choice)
    {
        printf("You run through the exit and survive the dragon room.\n");
    }
    else
    {
        dragonAppears = rand() % 2 == 0;

        if (dragonAppears)
        {
            printf("You rescue the knight, and both of you escape safely.\n");
            health++;
        }
        else
        {
            printf("You try to help, but the dragon blocks your path. You barely escape and lose 1 health.\n");
            health--;
        }
    }

    printf("\nFinal health: %d\n", health);

    if (health > 0)
    {
        printf("YOU SURVIVED THE DRAGON TRIAL!!!\n");
    }
    else
    {
        printf("YOU ESCAPED, but barely made it out of the dragon's castle alive...\n");
    }

    printf("\nReturning to the main menu...\n");
}
// This function uses a loop to make sure the user enters 1 or 2.
// It returns true for option 1 and false for option 2.
bool getChoiceDL(void)
{
    int userChoice;

    printf("Enter your choice: ");
    scanf("%d", &userChoice);

    while (userChoice < 1 || userChoice > 2)
    {
        printf("Invalid choice. Enter 1 or 2: ");
        scanf("%d", &userChoice);
    }

    if (userChoice == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


void sgarcia6(void)
   {
       printf("SG");
   }
void GuckMan(void)
{
	printf("EG\n");
}

void CAYfrog(void)
{
	printf("CAY");
}
//Room 55

void jmItsGameTime(void)
{
	//Starting Variables
	int choice = 0;
	int servantChoice = 0;
	char *servantName = "BLANK";
	int bossHealth = 100;
	int playerHealth = 100;
	int battleOptions = 0;
	char *enemies[] = {"Shadow Saber", "Shadow Lancer", "Shadow Archer"};
	int chooseRandomEnemy = rand() % 3;
	int secretInfo = 0;


	puts("---Welcome to Room of Fate!---");
	puts("You are in a dark grim blue room with futuristic technology that you don't recognize.");
	puts("Yook look around the room and you see staircases leading up to a platform.");
	puts("On the platform you see 3 pedestal, on them you 3 floating cards.");
	puts("The cards shows heroes with different archetypes.");
	puts("Whichever you have chosen they will guide you in your journey.");
	puts("1. Saber");
	puts("2. Archer");
	puts("3. Lancer");
	//Choose 1
	printf("Card chosen: \n");
	scanf("%d", &servantChoice);

	if(servantChoice == 1)
	{
		servantName = "Saber";
	}
	else if(servantChoice == 2)
	{
		servantName = "Lancer";
	}
	else if(servantChoice ==3)
	{
		servantName = "Archer";
	}
	else
	{
		servantName = "Ruler";
	}

	printf("You and %s have been summoned!\n", servantName);
	printf("%s has spawned. \n", enemies[chooseRandomEnemy]);
	printf("You and your partner are stuck in a room with the enemy.\n");
	printf("There are multiple chests in the room.\n");
	printf("---BATTLE ENGAGED---\n");

	//While Loop
	while(bossHealth > 0 && playerHealth >0)
	{
		printf("%s Health: %d | %sHealth %d\n", servantName, playerHealth, enemies[chooseRandomEnemy], bossHealth);
		printf("How would you choose to fight.\n");
        	puts("1. Attack");
        	puts("2. Talk");
        	puts("3. Escape");
        	puts("4. Befriend");
		puts("Choose: ");
		
		scanf("%d", &choice);

		switch (choice)
		{
			//Turn-based Combat
			case 1:
			{
				int damage = rand() % 20 +10;
				bossHealth -= damage;
				printf("You and %s attack the enemy. %d DAMAGE!\n",servantName, damage);
			}
			break;

			//Talk to the enemy to get some information.
			case 2:
			{
				int talkChoice = 0;
				printf("You try to talk to talk with %s\n", enemies[chooseRandomEnemy]);
				printf("1. Try to calm the enemy by singing. \n");
				printf("2. Demean the enemy to submission, \n");
				scanf("%d", &talkChoice);

				if(talkChoice == 1)
				{
					printf("The enemy pauses to sing!\n");
					printf("You learn that it loves to sing.\n");
					secretInfo = 1;
					continue;
				}
				else
				{
					printf("The enemy got enraged. The health increased by 10.\n");
					bossHealth +=10;
				}
			}
			break;
			
			//ESCAPE
			case 3:
			{
				int itemThrown = 0;
				int toEscape = 0;

				printf("You and %s try to escape and got cut off.\n", servantName);
				printf("Next to you, you see a chest.\n");
				printf("You opened it a see a bunch of smokebombs.\n");
				printf("You decided to throw it at the enemy!\n");
				printf("1. Aim at torso \n");
				printf("2. Aim at the ground \n");
				printf("Choose: \n");

				scanf("%d", &itemThrown);
				if(itemThrown != 1 && itemThrown != 2)
				{
					printf("Invalid choice..., the smokebomb slips from your grasp!\n");
					playerHealth -=5;
				}
				else
				{
					toEscape = (rand() % 2) +1;
					printf("You throw the smoke as hard as you can and hope for the best...\n");
					if(itemThrown == toEscape)
					{
						printf("The smokebomb was a direct HIT, the room is filled with smoke.\n");
						bossHealth = 0;
						printf("Now its time to escape back, say goodbye to your partner!\n");
					}
					else
					{
						printf("The smoke did not do anything, rather just stayed as a ball... %s is still looking at you and decided to attack!\n",enemies[chooseRandomEnemy]);
						playerHealth -=10;
					}

				}
			}
			break;
			
			//BEFRIEND
			case 4:
			{
				int beFriendChoice = 0;
				printf("You decided to open your hand and build a connection with%s.\n",enemies[chooseRandomEnemy]);
				printf("1. Try to make sense of the situation.\n");
				printf("2. Make an anecdote of it attire.\n");

				if(secretInfo == 1)
				{
					printf("3.[SECRET INFO] Say the name of the %s, to reveal the identity and bring them to light!\n",enemies[chooseRandomEnemy]);
				}
				printf("Choose: \n");
				scanf("%d", &beFriendChoice);

				if(beFriendChoice == 3 && secretInfo == 1)
				{
					printf("You have revealed the true name of the %s and plegdge your allegiances to you.\n", enemies[chooseRandomEnemy]);
					bossHealth = 0;
				}
				else if(beFriendChoice == 1 && bossHealth<= 40)
				{
					printf("The enemy has formed a bond.\n");
					bossHealth = 0;
				}
				else if (beFriendChoice == 2)
				{
					printf("The bond failed, and decided to attack you!\n");
					playerHealth -= 20;
				}

			}
			break;
				
					
		}//End of while loop
		 
		//Enemy Turn
		if (bossHealth > 0)
		{
			int enemyDamage = rand() %15+5;
			playerHealth-=enemyDamage;
			printf("%s attacks for %d damage: \n", enemies[chooseRandomEnemy],enemyDamage);
		}

		//Health check
		if(playerHealth <= 0)
		{
			printf("You and %s have been defeated...\n", servantName);
		}
		else if (bossHealth <= 0)
		{
			printf("%s has been defeated!\n",enemies[chooseRandomEnemy]);
		}
		

	}
}
void printdAfeworkIntials(void)
{
	puts("DA");
}


void kwillett48(void)
{
	// Room 48: Wings of Fire Inspired Adventure inspired by the Wings of Fire book series by Tui T. Sutherland
	// In the books, dragons call humans "scavengers." My room takes place during a peaceful era where a human can safely explore dragon kingdoms and build trust with them.
	
	int choice = 0;
	int visit_count = 0;
	int random_event = 0;
	int trust = 0;
	int supplies = 3;
	int escaped = 0;

	//This part will track the player earns special items form each of the kindoms
	
	bool has_sky_feather = false;
	bool has_ice_crystal = false;
	bool has_sea_pearl = false;
	bool has_sand_gem = false;
	bool has_night_scroll = false;

	//An array will store all places the player has visited 
	
	char visited[5][50];
	int visited_count = 0;
	
	printf("\n--- Room 48: Wings of Fire Journey ---\n");
	printf("You are Kristopher, a scavenger from a small human village.\n");
	printf("For years, dragons feared humans and humans feared dragons.\n");
	printf("But peace has finally spread across Pyrrhia.\n");
	printf("You now have the rare chance to explore dragon lands.\n");
	printf("Your goal is to prove humans deserve trust with the dragon kindoms and the dragons of each one..\n");
	
	sleep(2);

	//A loop is required for game to continue until the player chooses to leave.
	
	while (!escaped)
	{
		printf("\nChoose where to travel:\n");
		printf("1. Visit the Sky Kingdom\n");
		printf("2. Visit the Ice Kingdom\n");
		printf("3. Visit the Sea Kingdom\n");
		printf("4. Visit the Sand Kingdom\n");
		printf("5. Visit the Night Kingdom\n");
		printf("6. Check travel notes\n");
		printf("9. Return home\n");
		printf("Choice: ");
		
		if(scanf("%d", &choice) != 1)
		{
			 printf("Invalid input.\n");
			 while(getchar() != '\n');
			 continue;
		}

		// Random number required to create different outcomes for each time.

		random_event = rand() % 4;
		
		switch(choice)
		{
			// SkyWings
			// In Wings of Fire, SkyWings are mountain dragons known for speed, flying skill, and pride.
			// Their kingdom is full of cliffs and dangerous heights in the mountains of Pyrrhia.
			case 1:
				printf("\nYou arrive at the Sky Kingdom.\n");
				printf("Massive swarms of  red dragons circle the mountains above as you approach them.\n");
				
				if(random_event == 0)
				{
					printf("A young SkyWing of what if seems like 10 years old wants to tests your bravery.\n");
					trust += 2;
				}
				else if(random_event == 1)
				{
					printf("Strong winds knocks some supplies from your bag.\n");
					supplies--;
				}
				else if(random_event == 2)
				{
					printf("You find a glowing red feather.\n");
					has_sky_feather = true;
				}
				else
				{
					printf("You admire the SkyWing dragons as they are flying through the clouds with great speed.\n");
				}
				
				if(visited_count < 5)
				{
					strcpy(visited[visited_count++], "Sky Kingdom");
				}
				visit_count++;
				break;

				// IceWings
				// IceWings in there kingdom is located in a freezing climates full of icebergs and are known for discipline, survival skills, and ice breath.
			case 2:
				printf("\nYou enter the Ice Kingdom.\n");
				printf("Snow storms surround icy dragon palaces.\n");
				
				if(random_event == 0)
				{
					printf("An IceWing challenges your survival knowledge.\n");
					trust += 2;
				}
				else if(random_event == 1)
				{
					printf("The extreme cold drains your supplies.\n");
					supplies--;
				}
				else if(random_event == 2)
				{
					printf("You discover a magical ice crystal.\n");
					has_ice_crystal = true;
				}
				else
				{
					printf("IceWing guards allow you to pass.\n");
				}
				
				if(visited_count < 5)
				{
					strcpy(visited[visited_count++], "Ice Kingdom");
				}
				visit_count++;
				break;

				// SeaWings
				// SeaWings live underwater there kingdom consists of magic grown coral that was nursed for over 2000 years in Pyrrhia, they are know to communicate through glowing scales while in the water.
				// On land with other dragons SeaWings can vocally talk with other dragons without being in the water.
			case 3:
				printf("\nYou visit the Sea Kingdom.\n");
				printf("Blue dragons swim beneath glowing water.\n");
				
				if(random_event == 0)
				{
					printf("A royal guard SeaWing teaches you underwater signals. You take great light in understanding there signals.\n");
					trust += 2;
				}
				else if(random_event == 1)
				{
					printf("A giant wave destroys some of your supplies.\n");
					supplies--;	
				}
				else if(random_event == 2)
				{
					printf("You find a rare ocean pearl while swimming among the SeaWings.\n");
					has_sea_pearl = true;	
				}
				else	
				{
					printf("You explore coral ruins.\n");
				}
				
				if(visited_count < 5)
				{
					strcpy(visited[visited_count++], "Sea Kingdom");
				}
				visit_count++;
				break;

				// SandWings
				// SandWings live in deserts and are known for survival in there environment, a few clusters of sandwings will make small towns or villiages for merchants and different dragons to visit.
				// SandWings are known for there black eyes, and venomous tails spikes.
			case 4:
				printf("\nYou enter the Sand Kingdom.\n");
				printf("Heat waves rise across endless dunes of the Kingdom and you come across the merchant den The Snakepit.\n");
				
				if(random_event == 0)
				{
					printf("A merchant dragon trades supplies.\n");
					trust += 2;
				}
				else if(random_event == 1)
				{
					printf("The desert heat drains some of your supplies.\n");
					supplies--;	
				}
				else if(random_event == 2)
				{
					printf("You discover a golden desert gem that glows as intense as the daylight.\n");
					has_sand_gem = true;
				}
				else
				{
					printf("You avoid the dangerous tail barbs.\n");
				}	
				
				if(visited_count < 5)
				{
					strcpy(visited[visited_count++], "Sand Kingdom");
				}
				visit_count++;
				break;

				 // NightWings
				 // NightWings are think of them like scallors of a wealth of knowledge and have a habbit of sleeping during the day and being active at night.
				 // NightWings are also best known as the prophecy tribe, with dragons who may have mind-reading and future-seeing powers, plus a very secretive and mysterious reputation.
			case 5:
				printf("\nYou enter the Night Kingdom.\n");
				printf("Dark dragons observe you from the towering libraries as you enter there kingdom.\n");
				
				if(random_event == 0)
				{
					printf("A NightWing asks why do humans seek knowledge from dragons? You gave a honest reply to the NightWing..\n");
					trust += 2;
				}
				else if(random_event == 1)
				{
					printf("You become lost among endless scrolls lost in how many scrolls you see.\n");
					supplies--;
				}
				else if(random_event == 2)
				{	
					printf("You find an ancient prophecy scroll in your search.\n");
					has_night_scroll = true;
				}
				else
				{
					printf("You feel something proding through your thoughts.\n");
				}
				
				if(visited_count < 5)
				{
					strcpy(visited[visited_count++], "Night Kingdom");
				}
				visit_count++;
				break;

				// Checking your inventory and seeing the places that you have visited in Pyrrhia.
			case 6:
				printf("\n--- Travel Notes ---\n");
				printf("Trust: %d\n", trust);
				printf("Supplies: %d\n", supplies);
				printf("Locations visited: %d\n", visit_count);
				
				printf("\nVisited Locations:\n");
				
				for(int i = 0; i < visited_count; i++)
				{
					printf("- %s\n", visited[i]);
				}
				
				printf("\nItems Collected:\n");
				
				if(has_sky_feather)
					printf("- Sky Feather\n");

				if(has_ice_crystal)
					printf("- Ice Crystal\n");
				
				if(has_sea_pearl)
					printf("- Sea Pearl\n");
				
				if(has_sand_gem)
					printf("- Sand Gem\n");
				
				if(has_night_scroll)
					printf("- Night Scroll\n");
				
				break;

				//End Game.
			case 9:
				printf("\nYou return home after your journey.\n");
				
				if(trust >= 8)
				{
					printf("You become known as the first great human ambassador.\n");
				}	
				else if(trust >= 4)
				{
					printf("Some dragons respect you.\n");
				}
				else
				{
					printf("You survived—but dragons remain uncertain.\n");
				}
				
				escaped = 1;
				break;
				
			default:
				printf("Invalid choice.\n");
				break;
		}

		// If player loses all supplies
		if(supplies <= 0 && !escaped)
		{
			printf("\nYou ran out of supplies and must return home.\n");
			escaped = 1;
		}
		
		sleep(1);
	}
	 printf("\nThank you for playing Room 48: Wings of Fire Journey!\n");
	 printf("From the shadows... something is watching you.\n\n");
	 
	 printf("              /\\                 /\\\n");
	 printf("             /  \\_______________/  \\\n");
	 printf("            /                       \\\n");
	 printf("           |     ***       ***       |\n");
	 printf("           |    *****     *****      |\n");
	 printf("           |     ***       ***       |\n");
	 printf("           |          ^              |\n");
	 printf("           |        \\___/            |\n");
	 printf("            \\                       /\n");
	 printf("             \\                     /\n");
	 printf("              \\___________________/\n");
	 printf("                   /         \\\n");
	 printf("                  /           \\\n");
	 
	 printf("\nTwo glowing eyes linger in the darkness as you return home...\n");
	 printf("A NightWing of power and faith has seen your journey.\n");
	 printf("And it will remember your journey.\n\n");
}


void ncInitial(void)
{
    srand(time(NULL));
    int choice;
    int dice = 0;
    int checkNum1;
    int checkNum2; 
    int checkNum3;
    int checkNum4;
    int checkNum5;
    int number[] = {1, 2, 3, 4, 5};
    dice = 1 + rand() % 3;

    printf("\n\nYou entered the room full of mirrors, displaying a cold reflection of your dark self. \nLooking back you see the door close and vanish. \nThere is now nothing, a black void, with a loud humming noise whispering your name.\n");
    
    while(choice < 1 || choice > 3)
    {
        printf("1 - punch the mirror\n");
        printf("2 - embrace the person you are\n");
        printf("3 - step back into the abyss and take a seat\n");
        printf("choose a decision: ");
        scanf("%d", &choice);
        
        if(choice <= 3)
        {
            printf("\n\nThere is nothing else you can do. The person that took form smiles back at you.\n");
        }
        if(choice > 3)
        {
            printf("Wrong choice. Try again.\n\n");
        }
    }
        switch (choice)
        {
            case 1:
            {
                printf("The cold person that looks like you touches your arm through the mirror. You gasp and let go a cold breath, you look around and try to break the mirror with your hand\n\n");
                break;
            }
            case 2:
            {
                printf("You hug the person you once were, a mere reflection of yourself\n\n");
                break;
            }
            case 3:
            {
                printf("You sit in silence for hours and wait, waiting for something to happen. The silence withers you away.\n\n");
                break;
            }
        }
        
    checkNum1 = choice;
    choice = 0;
    
    printf("The void pulls you back into the shadows.\n");
    
    printf("1 - Walk endlessly\n");
    printf("2 - Scream into the void\n");
    printf("3 - Run toward the humming noise\n");
    printf("choose a decision: ");
    scanf("%d", &choice);
    
    while(choice < 1 || choice > 3)
    {
        printf("1 - Walk endlessly\n");
        printf("2 - Scream into the void)\n");
        printf("3 - Run toward the humming noise\n");
        scanf("%d", &choice);
        
        if(choice <= 3)
        {
            printf("the void hurts your head\n\n");
        }
        if(choice > 3)
        {
            printf("Wrong choice. Try again.\n\n");
        }
    }
    
    checkNum2 = choice;
    choice = 0;
    
    
    printf("\nA faint wall shows, a door in the front with a demonic symbol. The abyss screams to you as if it is beckoning.\n");
    
    while(choice < 1 || choice > 3)
    {
        printf("1 - You try to open the vanished door\n");
        printf("2 - You try to climb the wall\n");
        printf("3 - Listen carefully to the repetitive humming noise\n");
        printf("choose a decision: ");
        scanf("%d", &choice);
        
        if(choice == 3)
        {
            printf("\nThe abyss holds you tighter\n\n");
        }
        
        if(choice == 2)
        {
            printf("\nThe nothingness is mentally harmful, as if a thousand needles poke at your brain. You fall to the ground.\n\n");
        }
        if(choice > 3)
        {
            printf("Wrong choice. Try again.\n\n");
        }
    }
    
    checkNum3 = choice;
    choice = 0;
    
    printf("You blink and the door disappears. With a cake on a table in its stead.\n\n");
    
    while(choice < 1 || choice > 4)
    {
        printf("1 - Talk to the cakee\n");
        printf("2 - Become one with the cake\n");
        printf("3 - Eat the cake and run\n");
        printf("4 - Hold the cake in your hand and eat it\n");
        printf("choose a decision: ");
        scanf("%d", &choice);
        
        if(choice == 4)
        {
            printf("\nEating the cake fulfills your hungry stomache.\n\n");
        }
        if(choice > 4)
        {
            printf("Wrong choice. Try again.\n\n");
        }
    }
    
    checkNum4 = choice;
    choice = 0;

    printf("\nYou hear a rumbling noise behind you and a glimpse of a black door emanating steam from it arise.\n\n");
    
    while(choice < 1 || choice > 5)
    {
        printf("1 - Open the black door\n");
        printf("2 - Turn around and live in the void forever\n");
        printf("3 - become one with the void once more\n");
        printf("4 - Cry to the black door\n");
        printf("5 - Close your eyes and walk toward the door\n");
        printf("choose a decision: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
            {
                printf("You open the door to a yellow room, with  a nostalgic but evil feeling. You close the door.\n");
                break;
            }
            case 2:
            {
                printf("You sit alone forever in the void.\n");
                break;
            }
            case 3:
            {
                printf("The void consumes your body slowly chipping you away.\n");
                break;
            }
            case 4:
            {
                printf("Your tears vanish into the darkness.\n");
                break;
            }
            case 5:
            {
                printf("You trip, as you open your eyes nothing is there, but the door remains.\n");
                break;
            }
        }
        
        if(choice > 5)
        {
            printf("Wrong choice. Try again.\n\n");
        }
        
    }
    
    checkNum5 = choice;
    choice = 0;
    
    while(choice < 1 || choice > 2)
    {
        
        printf("\n1 - Live (50 percent chance)\n");
        printf("2 - Fade\n");
        printf("choose a decision: ");
        scanf("%d", &choice);
        
        if(choice == 1)
        {
            if(dice == 1)
            {
                printf("\nYou wake up walking in the middle of New York, but all is not well. For a brief moment you notice everyone has no face and a door grabs you and takes you back.\n\n");
            }
            else
            {
                printf("You failed to remain among the living.\n\n");
            }
                
        }
        
        if(choice == 2)
        {
            printf("You failed and remained in the void, as a shadow.\n\n");
        }
        
        if(choice >= 3)
        {
            printf("Wrong choice. Try again.\n\n");
        }
    }
    
	    // Secret Code (feature)
	if (checkNum1 == number[0] && checkNum2 == number[1] && checkNum3 == number[2] && checkNum4 == number[3] && checkNum5 == number[4])
	    {
	        printf("The people you lost along the way remain in your stead as you reawaken into a world of bliss. 'Live on' your parents say. - Nate\n\n");
	    }
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



void nnawshin()
{
	printf("N.N\n");
}	

void phas22(void)
{
	printf("JR");
}


void WMRoom(void)
{
	printf("Welcome to Outbreak Zone\n<Inspired by my favorite zombies game Dying light 1>\n");
    printf("Here every choice you make will decide your ending. So, be cautious with every choice!\n");
    printf("Let the game begin!!!!\n");

    printf("A deadly virus has spread and destroyed the city.\n"
        "You are one of the few survivors that are trapped inside a zone. Locked away from the world!!!\n"
        "During the day, there will be infected roaming the streets. However, at night there will be a deadlier creatures by the name of night stalkers creeping around the streets.\n");

    printf("You wake up and looks like you got rescued by your team leader.\n"
        "He says to you: We are running out of food and suuplies. If you want to survive, we will need your help.\n");
    
    printf("You have two choices:\n1-Accept the mission and the risk.\n2-Refuse and accept your fate.\n");

    int choice = 0;
    scanf("%d", &choice);
    while(choice != 1 && choice != 2)
    {
        printf("Pick again:");
        scanf("%d", &choice);
    }

    if(choice == 1)
    {
        printf("Welcome to your first mission. Glad you made the hard choice and decided to help others.\n");
        printf("while walking through the city you find three abandonded buildings.\n"
        "1-Pharmacy\n2-Police station\n3-Supermarket\nPick one to search:");
        
        int buildingChoice = 0;
        scanf("%d", &buildingChoice);
        while(buildingChoice != 1 && buildingChoice != 2 && buildingChoice !=3)
        {
            printf("Pick again:");
            scanf("%d", &choice);
        }

        char* loot[5] = {"Bandage", "knife", "Pistol", "Food", "Medicine"};

        int randomNumber = rand() % 5;
        char* playerLoot = loot[randomNumber]; 

        printf("While searching the building you have found %s. WOW YOU ARE LUCKY.\n", playerLoot);

        printf("However shorty after you start hearing someone screaming really loud. It sounds like they are being attacked and need your help ASAP."
        " What will you do?\n1-Will you go help and put your life in danger for a stranger?\n2-Will you ignore the screams and continue searching for supplies.\n");
        int helpingChoice = 0;
        scanf("%d", &helpingChoice);
        while(helpingChoice != 1 && helpingChoice != 2)
        {
            printf("Pick again:");
            scanf("%d", &helpingChoice);
        }

        if(helpingChoice == 1)
        {
            printf("While helping the stranger. You find yourself surronded by more infected and the stranger is badly injured\n"
            "Your only choice is to carry them and make a run for it!!!\n");

            printf("Wow congrats, You managed to make it to a safe house and you managed to make a new ally. However, you got injured during your escape\n Sadly you have succumbed to your injuries!!!\n");

			printf("The main feature that makes my program unique. Is that I added specs such as HP where if it reaches 0 you will die and your story will end\n");
			return;
        }
        else if(helpingChoice == 2)
        {
            printf("After ignoring the screams. You keep looting, but however something is making creepy noises in the room next door.\n");
            act1Version();
        }
    }
    else if(choice == 2)
    {
        printf("Game over. You died because you got shot by your collegue after you got bit by a zombie.\n");

		printf("The main feature that makes my program unique. Is that I added specs such as HP where if it reaches 0 you will die and your story will end\n");
        return;
    }

}
void act1Version(void)
{
    printf("So you decided to go investigate the noise\n While walking through the hall way, you take a right turn and into the room\n");
    printf("You pause!!!\n THE CREEPY SOUND WAS FROM YOUR OLD FRIEND WHO GOT ATTACKED A WEEK EARLIER!!!\n he has turned into a zombie :(\n");
    printf("Both of you lock eyes and he starts running towards you!!! WHAT WILL YOU DO?\n"
    " 1-Run\n 2-Attack\n");

    int choice = 0;
    scanf("%d", &choice);
    while(choice != 1 && choice != 2)
    {
        printf("Pick again:");
        scanf("%d", &choice);
    }

    if(choice == 1) 
    {
        printf("You managed to run to a roof!\n");

        bool playerAlive = true;
        bool escaping = true;

        int health = 100;
        int choice;

        while(playerAlive && escaping)
        {
            printf("\n=== Rooftop Chase ===\n");
            printf("Your health: %d\n", health);

            printf("1-Jump to next building\n2-Climb down ladder\n3-Fight infected\n");
            scanf("%d", &choice);
            while(choice != 1 && choice != 2)
            {
                printf("Pick again:");
                scanf("%d", &choice);
            }

            if(choice == 1)
            {
                int jump = rand() % 2;

                if(jump == 1)
                {
                    printf("You successfully jumped!\n");
                    printf("You escaped the infected!\n");

                    escaping = false;
                }
                else
                {
                    printf("You almost fell!\n");
                    health -= 20;
                }
            }

            else if(choice == 2)
            {
                printf("You climb down slowly\n");

                int infected = rand() % 2;

                if(infected == 1)
                {
                    printf("An infected grabbed you!\n");
                    health -= 30;
                }
                else
                {
                    printf("You escaped safely!\n");

                    escaping = false;
                }
            }

            else if(choice == 3)
            {
                int fight = rand() % 2;

                if(fight == 1)
                {
                    printf("You defeated the infected!\n");

                    escaping = false;
                }
                else
                {
                    printf("The infected injured you!\n");
                    health -= 25;
                }
            }

            if(health <= 0)
            {
                playerAlive = false;
                printf("You died during the chase.\n");
				
				return;
            }
        }
        if(playerAlive)
        {
            printf("\nAfter escaping the infected, you finally reach the evacuation rooftop.\n");
            printf("A helicopter arrives just before the infected surround the building.\n");

            printf("You jump into the helicopter as the city disappears behind you.\n");
            printf("You survived the outbreak... for now.\n");
        }
    }
    else if(choice == 2)
    {
        printf("The zombie jumps on you and start biting you furiously\nWhile being courageous enough to face an infected headon, you were once again fooled by your own courage.\n");
        printf("You cannot do nothing but bleed to death\n");
        
        return;
    }
}

void nhfun(void)
{
	int node = 0;
	int choice = 0;
	int inventory[3] = {0,0,0};

	// combat states
	int playerHp = 20;
	int drennHp = 15;
	int playerValnerable = 0;
	int playerBlocking = 0;
	int drennRoll;
	int playerDmg;
	int drennDmg;

	while(1)
	{
		switch(node)
		{
			case 0:
				printf("==================================================\n");
				printf("                  THE LOST CROWN\n");
				printf("==================================================\n\n");
				printf("You are a wandering sellsword.\n");
				printf("The kingdom of Astrial has fallen since the\n");
				printf("High Crown was stolen. You arrive at the\n");
				printf("ruined capital gate where two figures await you.\n");
				printf("*Please enter the numerical value of the action\n");
				printf("you want to take.\n");
				printf("1: Approach the hooded messenger.\n");
				printf("2: Approach the city guard.\n");
				printf("99: Return to the door room\n.");
				printf("Enter choice: ");
				scanf("%d", &choice);
				
				if(choice == 1)
				{
					node = 1;
				}
				else if(choice == 2)
				{
					node = 2;
				}
				else if(choice == 99)
				{
					node = 99;
				}
				else
				{
					printf("Invalid choice.\n");
				}
				break;
			case 1:
				printf("==================================================\n");
				printf("                The Scriptorium\n\n");
				printf("The hooded figure ended up being a member of the\n");
				printf("Silver Older. He told you the archivist of the\n");
				printf("organization has work for you.\n");
				printf("At the orders headquarters, the archivist\n");
				printf("spreads a map accross the table. 'The crown is\n");
				printf("in one of two places - the Ashwood Tomb or Drenn\n");
				printf("the Warlock's tower on Frostpine Ridge.'\n");
				printf("Where would you like to search?\n");
				printf("3: Travel to the Ashwood Tomb.\n");
				printf("4: Ride for Frostpine Ridge.\n");
				printf("Enter choice: ");
				scanf("%d", &choice);

				if(choice == 3)
				{
					node = 3;
				}
				else if(choice == 4)
				{
					node = 4;
				}
				else
				{
					printf("Invalid choice.\n");
				}
				break;
			case 2:
				printf("==================================================\n");
				printf("                   The Barracks\n\n");
				printf("The city gaurd tells you a recently captured spy\n");
				printf("shared intelligence that the lost crown is\n");
				printf("hidden in Ashwood Tomb. Captain Maren has put\n");
				printf("out a reward for its return, but warns that\n");
				printf("Drenn the Warlock's forces are already marching\n");
				printf("their to get it themselves.\n");
				printf("3: Race to the Ashwood Tomb before Drenn arrives.\n");
				printf("5: Set an ambush on the road to slow Drenn down.\n");
				printf("Enter choice: ");
				scanf("%d", &choice);

				if(choice == 3)
				{
					node = 3;
				}
				else if(choice == 5)
				{
					node = 5;
				}
				else
				{
					printf("Invalid choice.\n");
				}
				break;
			case 3:
				printf("==================================================\n");
				printf("                The Ashwood Tomb\n\n");
				printf("Your reach the tomb and no one is in site. It is\n");
				printf("too dark to see inside but a torch sits near the\n");
				printf("entrance to the caves. Do you take it?\n");
				printf("Enter 1 for yes, 0 for no.\n");
				printf("Enter choice: ");
				scanf("%d", &choice);

				if(choice == 1)
				{
					inventory[0] = 1;
				}

				printf("Deep in the tomb you see the crown glowing on a\n");
				printf("stone alter.\n");

				if(inventory[0] == 1) 
				{
					printf("With the tourch you easily see a trap\n");
					printf("hidden on the ground. You are able to\n");
					printf("disarm it and take the crown.\n");
					node = 6;
					break;
				}
				else 
				{
					printf("You stumble forward in the dimmly lit\n");
					printf("room. As you go to take a step you here\n");
					printf("a ghostly voice call out to you. 'Stop,\n");
					printf("there is a trap!'\n");
					node = 7;
					break;
				}
				break;

				printf("Invalid choice.\n");
			case 4:
				printf("==================================================\n");
				printf("                 Frostpine Ridge\n\n");
				printf("You reach Drenn's tower. The powerful warlock is\n");
				printf("waiting. 'I knew you would come. You see I know\n");
				printf("about the mark on your palm. I know more about you\n");
				printf("then you probably know about yourself. That mark\n");
				printf("proves you are the rightful owner of this.' He\n");
				printf("points at the crown in front of him. 'Join me and\n");
				printf("we can rule this kingdowm together!'\n");
				printf("6: Grab the crown and run while Drenn is distracted.\n");
				printf("12: Draw your sword and fight!\n");
				printf("Enter choice: ");
				scanf("%d", &choice);
				if(choice == 6)
				{
					node = 6;
				}
				else if(choice == 12)
				{
					node = 12;
				}
				else
				{
					printf("Invalid choice.\n");
				}
				break;
			case 5:
				printf("==================================================\n");
				printf("                   The Ambush\n\n");
				printf("You set up a perfect ambush for Drenn's soldiers,\n");
				printf("but Drenn himself escapes. A wounded soldier\n");
				printf("tells you the real crown has already been recovered\n");
				printf("by Drenn and is in his layer at Frostpine Ridge.\n");
				printf("You quickly set out for your new destination.\n");

				node = 4;
				break;
			case 6:
				printf("==================================================\n");
				printf("                The Crown in Hand\n\n");
				printf("You have managed to recover the crown, but as you\n");
				printf("hold it, you feel your palm burn, it pulling the\n");
				printf("crown to your head.\n");
				printf("9: Put on the crown and claim your birthright.\n");
				printf("10: Destroy it, no one should be king.\n");
				printf("Enter choice: ");
				scanf("%d", &choice);
				if(choice == 9)
				{
					node = 9;
				}
				else if(choice == 10)
				{
					node = 10;
				}
				else
				{
					printf("Invalid choice.\n");
				}
				break;
			case 7:
				printf("==================================================\n");
				printf("                     Birthright\n\n");
				printf("The ghostly voice saves you from a grim dealth. You\n");
				printf("soon learn it belongs to the ghost of King Aldric,\n");
				printf("king over 200 years ago. He confirm that this crown\n");
				printf("belongs to you as you are his lost heir, but warns of\n");
				printf("a curse that prevents anyone from wearing the crown\n");
				printf("from finding true happinness.\n");
				printf("9: Accept the curse and take the crown.\n");
				printf("11: Ask if their is anyway to break the curse.\n");
				printf("Enter choice: ");
				scanf("%d", &choice);

				if(choice == 9)
				{
					node = 9;
				}
				else if(choice == 11)
				{
					node = 11;
				}
				else
				{
					printf("Invalid choice.\n");
				}
				break;
			case 9:
				printf("==================================================\n");
				printf("        Ending A: The Returned King\n\n");
				printf("As the crown settles on your brow, the mark on your\n");
				printf("burns a bright gold then fades. You feel the power of\n");
				printf("your ancesters in your blood. You know you have the\n");
				printf("power to bend the kingdom to your will, but you will\n");
				printf("never enjoy it.\n\n");
				printf("Game over. You have experienced 1//5 endings. Enter\n");
				printf("the room to try again.\n\n");
				return;
			case 10:
				printf("==================================================\n");
				printf("           Ending B: The Nameless Hero\n\n");
				printf("You smash the crown on the stone floor. YOu feel\n");
				printf("your hand glow as the curse releases. The relm\n");
				printf("has no king, but your happiness is intact.\n");
				printf("Legends will speak of the wanderer who gave up\n");
				printf("power for happiness.\n");
				printf("Game over. You have experienced 1//5 endings. Enter\n");
				printf("the room to try again.\n\n");
				return;
			case 11:
				printf("==================================================\n");
				printf("              Ending C: Lost Hope\n\n");
				printf("The ghost kinds silence speaks volumes. There is no\n");
				printf("way to break the curse. Despite this you search for\n");
				printf("weeks, giving Drenn time to rally his troops. He\n");
				printf("Eventually build up the strngth to seize the crown\n");
				printf("from you. Although he has no claim, the kingdom\n");
				printf("bends to his will and falls into chaos.");
				printf("Game over. You have experienced 1//5 endings. Enter\n");
				printf("the room to try again.\n\n");
				return;
			case 12:
				printf("==================================================\n");
				printf("                     FIGHT!\n\n");
				printf("Player HP: %d | Drenn HP: %d\n\n", playerHp, drennHp);

				if (playerValnerable)
				{
					printf("Warning! You are vulnerable this turn!\n\n");
				}

				printf("1: Attack (1-6 damage)\n");
				printf("2: Block (halve incoming damage)\n");
				printf("3: Soulfire (4-10 damage, leaves you vulnerable)\n");
				printf("4. Flee\n");
				printf("Enter choice: ");
				scanf("%d", &choice);

				if(choice == 1)
				{
					playerDmg  = rand() % 6 + 1;
					drennHp  -= playerDmg;
					printf("You attack for %d damage!\n", playerDmg);
				}
				else if (choice == 2)
				{
					playerBlocking = 1;
					printf("You raise your guard and brace for impact.\n");
				}
				else if (choice == 3)
				{
					playerDmg = (rand() % 7) + 4;
					drennHp -= playerDmg;
					playerValnerable = 1;
					printf("Soulfire erupts from your palm for %d damage!\n", playerDmg);
					printf("You are left vulnerable!\n");
				}
				else if (choice == 4)
				{
					printf("You grab what you can and flee the tower!\n");
					node = 6;
					break;
				}
				else
				{
					printf("Invalid choice.\n");
					break;
				}

				if (drennHp <= 0)
				{
					node = 13;
					break;
				}


				drennRoll = (rand() % 3) + 1;

				if (drennRoll == 3)
				{
					drennDmg = (rand() % 5) + 3;
					printf("Drenn charges a Dark Pulse!\n");
				}
				else
				{
					drennDmg = (rand() % 4) + 1;
					printf("Drenn attacks!\n");
				}

				if (playerValnerable)
				{
					drennDmg += 3;
				}
				if (playerBlocking)
				{
					drennDmg /= 2;
				}
				if (drennDmg < 0)
				{
					drennDmg  = 0;
				}

				playerHp -= drennDmg;
				printf("You take %d damage!\n", drennDmg);

				playerValnerable = 0;
				playerBlocking = 0;

				if(playerHp <= 0)
				{
					node = 14;
				}
				break;
			case 13:
				printf("==================================================\n");
				printf("        Ending D: The Unburdeded King\n\n");
				printf("Drenns's journal contained a ritual to lift the\n");
				printf("curse of the crown. You gather the highest wizards\n");
				printf("of the land and preform the ritual at down. As the sun\n");
				printf("rises, the mark on your hand fades to nothing. The crown\n");
				printf("easily rests on your head and the realm has a king once\n");
				printf("again. And you are happy to rule.");
				printf("Game over. You have experienced 1//5 endings. Enter\n");
				printf("the room to try again.\n\n");
				return;
			case 14:
				printf("==================================================\n");
				printf("        Ending E: Fall in the Tower\n\n");
				printf("Drenn stands over you and laughs. The crown is his\n");
				printf("now and the kingdom will bend to his rule. The last\n");
				printf("thing you see is him dropping it on his head.\n");
				printf("Game over. You have experienced 1//5 endings. Enter\n");
				printf("the room to try again.\n\n");
				return;
			case 99:
				return;
			default:
				printf("Invalid node, returning to start");
				node = 0;
				break;
		}
	}
}


void printInitialsAngelM(void)
{
	printf("AM\n");
}


void RT_room57(void)
{
    int choice = 0;

    while(choice != 3)
    {
        printf("\nWelcome to Room 57: Find the Ball\n");
        printf("1. View rules\n");
        printf("2. Play a round\n");
        printf("3. Leave room\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("One ball is hidden under one of three cups.\n");
            printf("Pick the correct cup to win.\n");
        }
        else if(choice == 2)
        {
            RT_playCupRound();
        }
        else if(choice == 3)
        {
            printf("Leaving Room 57...\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }
}

void RT_playCupRound(void)
{
    int cups[3] = {0, 0, 0};
    int ballSpot;
    int guess;

    ballSpot = rand() % 3;
    cups[ballSpot] = 1;

    printf("\nChoose a cup from 1-3: ");
    scanf("%d", &guess);

    if(guess < 1 || guess > 3)
    {
        printf("Invalid cup choice.\n");
        return;
    }

    if(cups[guess - 1] == 1)
    {
        printf("You found the ball!\n");
    }
    else
    {
        printf("Wrong cup. The ball was under cup %d.\n", ballSpot + 1);
    }
}

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
        
        printf("\t\tINCOMING STAGE HAZARD\n\nIt's the magic piano. What is it doing?\n\n\t\t*plays Beethoven's music*\n\n");
        
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
int jwStory()
{
        srand(time(NULL));
        int choice;
        int starterInfo;
        int starterChoice;
        int trainChoice;
        int gymChoice;
        int moveChoice;
        int playAgain = 1;

        char starters[3][20] = {"Pyron", "Bitlet", "Algoroot"};
        do
        {
                printf("\nWelcome to the world of Codémon! Let's being your coding journey.\n");

                //decision 1 - learn starter
                do
                {
                        printf("\nEnter a number (1-3) to learn about a starter:\n");
                        printf("\n\033[0;31m1. Pyron\033[0;31m\n");
                        printf("\n\033[0;34m2. Bitlet\033[0;34m\n");
                        printf("\n\033[0;32m3. Algoroot\033[0;32m\n");
                        printf("\033[0m");
                        printf("\n4. Exit\n");

                        printf("\nChoose a starter to view: ");
                        scanf("%d", &choice);

                        if (choice >= 1 && choice <= 3)
                        {
                                showStarterInfo(choice);
                        }
                        else if (choice == 4)
                        {
                                printf("Exiting starter info...\n");
                        }
                        else
                        {
                                printf("Invalid choice.\n");
                        }
                }
                while (choice!=4);

                //decision #2 - choose starter
                printf("\nChoose your starter (1-3):\n");
                scanf("%d", &starterChoice);

                printf("You chose %s!\n", starters[starterChoice - 1]);

                //decision #3 - training
                printf("\nDo you want to train your Codémon?\n");
                printf("1. Yes\n2. No\n");
                scanf("%d", &trainChoice);

                if (trainChoice == 1)
                {
                        printf("Training complete! %s got stronger.\n", starters[starterChoice - 1]);
                }
                else
                {
                        printf("You skipped training. You're weak.\n");
                }
                //decision #4 - gym battle
                printf("\nGym Leader Prof. Poppe challenges you! The prize is an A in the class.\n");
                printf("\nDo you want to enter the Gym Battle?\n");
                printf("1. Yes\n2. No\n");
                scanf("%d", &gymChoice);

                if (gymChoice == 1)
                {

                        printf("\nGym Battle Start! Gym Leader Prof. Poppe's TA-Mon has 40 HP.\n");

                        //decision #5 - choose move
                        printf("\nChoose your move:\n");
                        printf("1. Basic Attack\n2. Special Move\n");
                        scanf("%d", &moveChoice);

                        int i;
                        int totalDamage = 0;

                        if (moveChoice == 1)
                        {
                                printf("You used Basic Attack!\n");

                                for (i = 0; i < 3; i++)
                                {
                                        int roll = rand() % 20 + 1;
                                        printf("Attack %d dealt %d damage!\n", i + 1, roll);
                                        totalDamage += roll;
                                }
                        }
                        else
                        {
                                printf("You used Special Move!\n");

                                for (i = 0; i < 2; i++)
                                 {
                                        int roll = rand() % 25 + 5;
                                        printf("Power hit %d dealt %d damage!\n", i + 1, roll);
                                        totalDamage += roll;
                                }
                        }
                        printf("\nTotal damage: %d\n", totalDamage);

                        if (totalDamage >= 40)
                        {
                                printf("Congratulations! You passed CSC 321 with an A.\n");
                        }
                        else
                        {
                                printf(" Oh no! You fail the class. The Professor outsmarted you...\n");
                        }
                }
                else
                {
                printf("\nYou avoided the Gym Battle... (lameee)\n");
                }

                printf("\nDo you want to play again?\n");
                printf("1. Yes\n2. No\n");
                scanf("%d", &playAgain);

        }
        while (playAgain == 1);

        printf("\nThanks for playing Codémon!\n");

        return EXIT_SUCCESS;
}
void showStarterInfo(int choice)
{
                if (choice == 1)
                {
                        printf("\n\033[0;31mPyron: Fire-type Codémon. Fast and chaotic.\033[0;31m\n");
                        printf("\033[0m");
                }
                else if (choice == 2)
                {
                        printf("\n\033[0;34mBitlet: Water-type Codémon. Builds speed over time.\033[0;34m\n");
                        printf("\033[0m");
                }
                else if (choice == 3)
                {
                        printf("\n\033[0;32mAlgoroot: Grass-type Codémon. Heals itself.\033[0;32m\n");
                        printf("\033[0m");
                }
                else
                {
                        printf("\nInvalid choice.\n");
                        printf("\033[0m");
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


void jkRoom41(void)
{
    int choice = 0;
    int running = 1;
    int score = 0;
    int shots = 0;
    int misses = 0;
    char *players[3] = {"Mbappe", "Dembele", "Hakimi"};

    printf("\nYou enter room 41 and appear inside a soccer stadium!\n");
    printf("PSG needs your help to win the match.\n");

    while(running)
    {
        printf("\nChoose your move:\n");
        printf("1. Pass the ball\n");
        printf("2. Take a shot\n");
        printf("3. Check teammates\n");
        printf("4. Defend\n");
        printf("5. Leave stadium\n");
        printf("Enter choice: ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("You pass to %s.\n", players[rand() % 3]);
                break;

            case 2:
            {
                int shot = rand() % 2;
                shots++;

                if(shot == 1)
                {
                    printf("GOAL! PSG scores!\n");
                    score++;
                }
                else
                {
                    printf("Missed shot!\n");
                    misses++;
                }

                printf("Score: %d | Shots: %d | Misses: %d\n", score, shots, misses);
                break;
            }

            case 3:
                printf("Teammates: %s, %s, %s\n", players[0], players[1], players[2]);
                break;

            case 4:
            {
                int defense = rand() % 2;

                if(defense == 1)
                    printf("Great defense!\n");
                else
                    printf("Opponent gets through!\n");

                break;
            }

            case 5:
                printf("\n========================================\n");
                printf("              MATCH FINISHED            \n");
                printf("========================================\n");

                printf("\nFinal Stats:\n");
                printf("Goals: %d\n", score);
                printf("Shots: %d\n", shots);
                printf("Misses: %d\n", misses);

                printf("\n");
                printf("        _________________________\n");
                printf("       |                         |\n");
                printf("       |          GOAL           |\n");
                printf("       |_________________________|\n");
                printf("                  ||\n");
                printf("                  ||\n");
                printf("\n");
                printf("              \\O/        (BALL)\n");
                printf("               |       --------->\n");
                printf("              / \\\n");
                printf("\n");
                printf("        PSG PLAYER TAKES THE FINAL SHOT!\n");

                if(score > misses)
                {
                    printf("\n        GOOOOOOAL! PSG WINS!\n");
                    printf("        The crowd is cheering!\n");
                }
                else
                {
                    printf("\n        PSG fought hard today!\n");
                    printf("        The crowd still cheers for the effort!\n");
                }

                printf("\n\nYou leave the stadium and return to the main room.\n");
                running = 0;
                break;

            default:
                printf("Invalid choice.\n");
        }
    }
}
void coolGame()
{

	  srand(time(NULL));
	  int choice;
	  int randy;
	  char *arrayOfStrings[5];
	  randy = rand() % 5;
	
	  arrayOfStrings[0] = "May 7, 2026";
	  arrayOfStrings[1] = "August 9, 2040";
	  arrayOfStrings[2] = "September 9, 1940";
	  arrayOfStrings[3] = "December 25, 2020";
	  arrayOfStrings[4] = "February 16, 1960";
	
	  if (randy == 1)
	  {
		    printf("%s\n", arrayOfStrings[0]);
	  }
	  else if (randy == 1)
	  {
		    printf("%s\n", arrayOfStrings[1]);	
	  }
	  else if (randy == 2)
	  {
		    printf("%s\n", arrayOfStrings[2]);
	  }
	  else if (randy == 3)
	  {
		    printf("%s\n", arrayOfStrings[3]);
	  }
	  else if (randy == 4)
	  {
		    printf("%s\n", arrayOfStrings[4]);
	  }
	
	  printf("You enter another dark room\n");
	  printf("In this room there are two things that are illuminated.\n");
	  printf("A peculiar lightswitch and a door that says exit above it.\n\n");
	
	  printf("1.Flip the lightswitch\n");
	  printf("2.Use the door that says exit\n");
	  printf("3.Go back to the door that you came from\n");
	  printf("4.Take Nap\n");
	  printf("5.Rub eyes\n");
	
	  switch (iAmLazy(4))
	  {
	  case 1:
		    printf("You turn on the light to reveal a motorcycle.\n");
		    printf("Right next to the motorcycle there is also motorcycle gear\n\n");
		
		    printf("1.Take off on motorcycle with gear\n");
		    printf("2.Take off on motorcycle without gear\n");
		    printf("3.Ignore the motorcycle and use the door that says exit\n");
		    printf("4.Ignore everything and use the door that you came from\n");
		    choice = iAmLazy(4);
		
		    if (choice == 2)
		    {
			      goto motoNoGear;
		    }
		    else if (choice == 1)
		    {
			      goto motoWithGear;
		    }
		    else if (choice == 3)
		    {
			      goto caseToo;
		    }
		    else if (choice == 4)
		    {
			      goto caseTree;
		    }
		
		    break;
	
	  case 2:
		    printf("You are now outside in the middle of nowhere, nothing but sand.\n");
		    printf("To the left theres a bus waiting to leave.\n");
		    printf("To your right theres the long open road.\n\n");
		    printf("1.Catch the bus\n");
		    printf("2.Walk along the road\n");
		    printf("3.Wait\n");
		    choice = iAmLazy(3);
		    if (choice == 3)
		    {
			      randy = rand() % 2;
			      if (randy == 0)
			      {
				        goto actOfGod;
			      }
			      else
			      {
				        goto caseToo;
			      }
		    }
		    else if (choice == 1)
		    {
			      printf("You take the bus to the nearest metropolis.");
			      printf("As you get off the bus, you are submerged in the dissonant sounds of life happening around you.\n");
			      printf("You start to dissapear as walk further into the waves of people walking by...\n");
		    }
		    else if (choice == 2)
		    {
			      randy = rand() % 2;
			      if (randy == 1)
			      {
				        goto randoEndOne;
			      }
			      else
			      {
				        goto randoEndTwo;
			      }
		    }
		    break;
	
	  caseToo:
		    printf("You are now outside in the middle of nowhere, nothing but sand.\n");
		    printf("To the left theres a bus waiting to leave.\n");
		    printf("To your right theres the long open road.\n\n");
		    printf("1.Catch the bus\n");
		    printf("2.Walk along the road\n");
		    printf("3.Wait\n");
		    choice = iAmLazy(3);
		    if (choice == 3)
		    {
			      randy = rand() % 2;
			      if (randy == 0)
			      {
				        goto actOfGod;
			      }
			      else
			      {
				        goto caseToo;
			      }
		    }
		    else if (choice == 1)
		    {
			      printf("You take the bus to the nearest metropolis.");
			      printf("As you get off the bus, you are submerged in the dissonant sounds of life happening around you.\n");
			      printf("You start to disappear as you walk further into the waves of people walking by...\n");
		    }
		    else if (choice == 2)
		    {
			      randy = rand() % 2;
			      if (randy == 1)
			      {
				        goto randoEndOne;
			      }
			      else
			      {
				        goto randoEndTwo;
			      }
		    }
		    break;
	
	  case 3:
		    printf("You end up drowning :(\n");
		    break;
	
	  caseTree:
		    printf("You end up drowning :(\n");
		    break;
	
	  motoWithGear:
		    printf("You speed out of the garage on a motorcycle.\n");
		    printf("You push your limits as you manuever the busy highway wearing full moto gear\n");
		    printf("Eventually you see a set of flashing blue and red lights.\n");
		    printf("Its the police, what do you do?\n\n");
		
		    printf("1.Take a chance and escape through oncoming traffic\n");
		    printf("2.Pull over safely\n");
		    choice = iAmLazy(2);
		
		    if (choice == 1)
		    {
			      randy = rand() % 2;
			      if (randy == 0)
			      {
				        printf("You escaped!\n");
				        printf("You continue riding off into the sunset.\n");
				        printf("As a an outlaw.\n");
			      }
			      else if (randy == 1)
			      {
				        printf("You end up crashing!\n");
				        printf("Battered and bruised you end up living.\n");
				        printf("Seconds later you are arrested.\n");
				        printf("You get your last glimpse of freedom as you are put\n");
				        printf("In the back of a police car.\n");
			      }
		    }
		    else
		    {
			      printf("You pull over safely on the shoulder.\n");
			      printf("You turn off your motorcycle as you wait patiently.\n");
			      printf("The officer eventually walks up, noticing your gear\n");
			      printf("for being responsible he lets you off with just a ticket.\n");
			      printf("You continue off on the winding roads.\n");
			      printf("As a drifter navigating whats in front of them.\n");
		    }
		
		    break;
	
	  motoNoGear:
		    printf("You speed out of the garage on a motorcycle.\n");
		    printf("You push your limits as you manuever the busy highway wearing no gear.\n");
		    printf("Hair waving aimlessly in the air.\n");
		    printf("Eventually you see a set of flashing blue and red lights.\n");
		    printf("Its the police, what do you do?\n\n");
		
		    printf("1.Take a chance and escape through oncoming traffic\n");
		    printf("2.Pull over safely\n");
		    choice = iAmLazy(2);
		
		    if (choice == 1)
		    {
			      randy = rand() % 2;
			      if (randy == 0)
			      {
				        printf("You escaped!\n");
				        printf("You continue riding off into the sunset.\n");
				        printf("As a an outlaw.\n");	
			      }
			      else
			      {
				        printf("You end up crashing!\n");
				        printf("Bystanders and first responders are unable to do anything.\n");
				        printf("Red paints the roads as your motorcycle is left in pieces.\n");
				        printf("You dont make it out alive :(\n");
			      }
		    }
	    else
	    {
	      printf("You pull over safely on the shoulder.\n");
	      printf("You turn off your motorcycle as you wait patiently.\n");
	      printf("The officer eventually walks up, scolding you as he walks up. \n");
	      printf("For being reckless, you are arrested and you motorcycle is impounded\n");
	      printf("You spend the rest of you days in a cell :(\n");
	    }
	
	    break;
	
	  case 4:
		    printf("You lay down and close your eyes\n\n");
		    printf("ALL of a sudden!\n");
		    randy = (rand() % 3) + 1;
		
		    if (randy == 1)
		    {
		      	goto actOfGod;
		    }
		    else if (randy == 2)
		    {
		      	goto caseToo;
		    }
		    else if (randy == 3)
		    {
		      	goto motoNoGear;
		    }
		    break;
	
	  case 5:
		    printf("You begin to close your eyes and start rubbing them.\n");
		    printf("Once you stop and open your eyes you find yourself somewhere different.\n");
		    printf("You wake up in a dreary room, laying on a uncomfortable bed.\n");
		    printf("You wonder what would have happened had you not rubbed your eyes...\n");
		    break;
	
	  randoEndOne:
		    printf("You start walking.\n");
		    printf("You walk til night, and collapse to the floor from exhaustion.\n");
		    printf("In you last waking moment a beam of light shoots from the sky, focusing on you.\n");
		    printf("As the light intensifies you feel weightless as you seemingly ascend into the sky.\n ");
		    printf("That was the last anyone ever heard from you...\n");
		    break;
	  randoEndTwo:
		    printf("You find an abandoned house.\n");
		    printf("You decide to take refuge and fix up what was once a shell of its former self.\n");
		    printf("Time begins to pass.\n");
		    printf("You begin to fix up the house.\n");
		    printf("Soon after you begin to plant food.\n");
		    printf("You find yourself living very comfortable off the land\n");
		    break;
	
	  actOfGod:
	    	printf("You were struck by lightning While waiting :(");
	    	break;
  }
}
int iAmLazy(int choices)
{
  int option = 0;
  printf("What do you choose to do?");
  do
  {
    scanf("%d", &option);

    if (option < 0 || option > choices)
    {
      printf("Invalid input\n");
    }
  } while (option < 1 || option > choices);

  printf("\n");

  return option;
}
//Room65 Functions

void printInFG(void)
{


	int intelligence = 0;
	int reconnaissance = 0;
	int midwayDamage = 0;
	int carrierDamage = 0;
	int carrierLocated = 0;
	int fighterSupport = 0;
	int midwayCaptured = 0;
	int fleetStrength = 10;

	int Order = 0;
	printf("As you walked in Room 65 You are transported back to a pivotal moment in World War II: The Battle of Midway.\nYou are place in Command of the Japanese Carrier Strike Force under Vice Admiral Chuichi Nagumo.\nYour mission is too make strategic decisions that could change the outcome of the war.A Victory at Midway could give Japan hope for a peace Deal.Defeat would only accelerate Japans defeat.\nGoal:Locate and Destroy American Carriers (USS Enterprise, USS Hornet USS Yorktown) and take the Island of Midway.\nJunior Officers advise cautious approach by checking with intelligence and reconnaissance.Others advise a more aggressive approach arguing for one blow against American Carriers.");

	while(Order != 7)
	{
		printf("\n===== MIDWAY COMMAND MENU ====\n");
		printf("1) Carrier Deck\n");
		printf("2) Reconnaissance Room\n");
		printf("3) Invasion Planning Room\n");
		printf("4) Fighter Hangar\n");
		printf("5) Intelligence Room\n");
		printf("6) Show Stats\n");
		printf("7) End Mission. See Results\n");
		printf("Choose your Order: ");
		scanf("%d", &Order);

		if(Order ==1)
		{
			carrierDeck(intelligence, reconnaissance, carrierLocated, fighterSupport, &carrierDamage, &midwayDamage, &fleetStrength);
		}
		if(Order ==2)
		{
			reconnaissanceRoom(&reconnaissance, &carrierLocated, &fleetStrength, carrierDamage);
		}
		if(Order ==3)
		{
			invasionPlanningRoom(&midwayDamage, carrierDamage, &fleetStrength, &midwayCaptured);
		}
		if(Order ==4)
		{
			fighterCommand(&fighterSupport, &fleetStrength);
		}
		if(Order ==5)
		{
			intelligenceRoom(&intelligence, &fleetStrength);
		}
		if(Order ==6)
		{
			showStats(intelligence, reconnaissance, fleetStrength, midwayDamage, carrierDamage, carrierLocated, fighterSupport, midwayCaptured);
		}
		if(Order ==7)
		{
			showFinalResult(fleetStrength, midwayDamage, carrierDamage, carrierLocated, midwayCaptured);
		}



	}

}

void showStats(int Intelligence, int Reconnaissance, int fleetStrength, int Midway, int carrierDamage, int carrierLocated, int fighterSupport, int midwayCaptured)
{
	printf("\nCurrent Command Status\n");

	printf("Intelligence LeveL:  %d\n", Intelligence);
	printf("Reconnaissance Level:  %d\n", Reconnaissance);
	printf("Japanese Fleet Strength  %d\n", fleetStrength);
	printf("Midway Island Damage:  %d\n", Midway);
	printf("American Carriers Destroyed: %d out of 3\n", carrierDamage);

	if(carrierLocated>0)
	{
		printf("Enemy Carrier Location: Location\n");
		printf("American Carriers Located: %d out of 3\n", carrierLocated);
	}
	else
	{
		printf("Enemy Carrier Location: Unknown\n");
		printf("American Carriers Located 0 out of 3\n");
	}

	if(midwayCaptured ==1)
	{
		printf("Midway Status:   Captured\n");
	}
	else
	{
		printf("Midway Status:  Not Captured\n");
	}
}

void intelligenceRoom(int *Intelligence, int*fleetStrength)
{
	int Order;
	printf("\n=== INTELLIGENCE ROOM === \n");
	printf("1)Reports suggest American Carriers could be nearby.\n");
	printf("2) Ignore the Report and focus on Midway\n");
	printf("Choose your decision: ");
	scanf("%d", &Order);

	if(Order ==1)
	{
		*Intelligence +=2;
		printf("Your officers begin preparing for an enemy carrier attack...\n");
		printf("Intelligence increased by 2.\n");
	}
	else if(Order ==2)
	{
		*Intelligence -=1;
		*fleetStrength-=1;
		printf("Intelligence decreased by 1.\n");
		printf("Fleet Strength decreased by 1.\n");
	}
}

void reconnaissanceRoom(int *Reconnaissance, int *carrierLocated, int *fleetStrength, int carrierDamage)
{
	int Order;
	int found;
	int i;
	int remainingCarriers;

	char *AmericanCarriers[] = {"USS Enterprise", "USS Hornet", "USS Yorktown"};

	printf("\n=== RECONNAISSANCE ROOM ===\n");
	printf("Scout pilots are waiting for orders.\n");
	printf("1) Send scout planes far east\n");
	printf("2) Keep scout planes close to save fuel and protest the fleet\n");
	printf("Choose your decision: ");
	scanf("%d", &Order);

	if(Order ==1)
	{
	*Reconnaissance +=1;

	remainingCarriers = 3-carrierDamage;
		if(remainingCarriers <=0)
		{
			printf("\nAll American Carriers have already been destroyed.\n");
			*carrierLocated = 0;
			return;
		}

	found = rand() % remainingCarriers + 1;
	*carrierLocated = found;
	printf("\nYou send scout planes across the Pacific.\n");
	printf("Reconnaissance increased by 1.\n");
	printf("Your scouts located %d American Carriers:\n", found);

		for( i = 0; i< found; i++)
		{
			printf("- %s\n", AmericanCarriers[carrierDamage + i]);
		}
	}
	else if(Order ==2)
	{
		*Reconnaissance -=1;
		*fleetStrength-=1;
		*carrierLocated = 0;
		printf("\nYou keep scout planes close to defend the fleet.\n");
		printf("Your carriers are safer for now, but the enemy carrier locations remains unknown.\n");
		printf("Reconnaissance decreased by 1.\n");
	}

}

int calCarrierAttack(int Intelligence, int Reconnaissance, int carrierLocated, int fighterSupport)
{
	int chance = 20;
	chance += Intelligence * 10;
	chance +=Reconnaissance*10;
	chance +=carrierLocated*15;
	chance += fighterSupport * 5;

	if(carrierLocated == 0)
	{
		chance -=25;
	}
	if(chance > 90)
	{
		chance = 90;
	}
	if(chance < 10)
	{
		chance = 10;
	}

	return chance;
}

void carrierDeck(int intelligence, int reconnaissance, int carrierLocated, int fighterSupport, int *carrierDamage, int *midwayDamage, int *fleetStrength)
{
char *AmericanCarriers[] = {"USS Enterprise", "USS Hornet", "USS Yorktown"};
int Order;
int attackChance;
int dice;

printf("\n=== CARRIER DECK ===\n");
printf("Bombers are ready to launch from Akagi, Kaga, Soryu, and Hiryu.\n");
printf("1) Launch bombers against American carriers\n");
printf("2) Launch bombers against Midway Island\n");
printf("Choose your decision: ");
scanf("%d", &Order);

if(Order ==1)
{
	attackChance = calCarrierAttack(intelligence, reconnaissance, carrierLocated, fighterSupport);
	dice = rand()%100;
	if(dice < attackChance)
	{
		if(*carrierDamage<3)
		{
			printf("Success! Your bombers destroy %s!\n", AmericanCarriers[*carrierDamage]);
			*carrierDamage+=1;
		}
		else
		{
			printf("All American carriers have already been destroyed.\n");
		}
	}
	else
	{
		printf("Failure! The strike fails to hit the American carriers.\n");
		printf("Enemy counterattacks weaken your fleet.\n");
		*fleetStrength -=2;
	}

}
else if(Order ==2)
{
	printf("\nYou order a bombing attack on Midway Island.\n");
	if(intelligence < 0 || reconnaissance < 0)
	{
		printf("The attack damages Midway, but your fleet is exposed to danger.\n");
		*midwayDamage +=1;
		*fleetStrength -=1;
	}
	else
	{
		printf("The attack successfully damages Midway's defense.\n");
		*midwayDamage+=2;
	}
}
enemyCounterAttack(fleetStrength, intelligence, reconnaissance, fighterSupport);

}

void fighterCommand(int *fighterSupport, int *fleetStrength)
{
	int Order;
	printf("\n=== FIGHTER COMMAND ===\n");
	printf("Fighters are ready too launch from Akagi, Kaga, Soryu and Hiryu.\n");
	printf("1) Launch Fighters too protect Bombers\n");
	printf("2) Keep Fighters too defend Carriers\n");
	printf("Choose your decision: ");
	scanf("%d", &Order);

	if(Order ==1)
	{
		*fighterSupport+=2;
		*fleetStrength-=1;
		printf("\nYou send fighters to escort the bombers.\n");
		printf("Future air attacks will have better support.\n");
		printf("Fighter support increased by 2.\n");
		printf("Fleet strength decreased by 1 because fewer fighters are defending the carriers.\n");
	}
	else if(Order ==2)
	{
		*fleetStrength +=2;
		*fighterSupport -=1;
		printf("\nYou keep fighters close to defend the carrier fleet.\n");
		printf("Your carriers are better protected from enemy attacks.\n");
		printf("Fleet strength increased by 2.\n");
	}
}

void invasionPlanningRoom(int *midwayDamage, int carrierDamage, int * fleetStrength, int *midwayCaptured)
{
int Order;
int dice;

	if(*midwayCaptured ==1)
	{
		printf("Midway has already been captured.\n");
		printf("Returning to the command menu...\n");
		printf("Your officers are waiting for your invasion orders.\n");
		printf("Midway Island Damage: %d\n", carrierDamage);
		printf("Fleet Strength: %d\n\n", *fleetStrength);
	}

	printf("\n=== INVASION PLANNING ROOOM ===\n");
	printf("Your Officers are waiting for your invasion Orders.\n");
	printf("Midway Island Damage: %d\n" , *midwayDamage);
	printf("American Carrier Damage: %d\n", carrierDamage);
	printf("Fleet Strength: %d\n\n", *fleetStrength);

	printf("1) Begin invasion of Midway\n");
	printf("2) Delay invasion and continue air attacks\n");
	scanf("%d", &Order);

	if(Order ==1)
	{
		printf("\nYou order the invasion force to begin the assault on Midway...\n");
		if(*midwayDamage >=3 && carrierDamage >=2)
		{
			printf("The island defense are weakened and the American Carriers are badly damaged.\n");
			printf("Success! Your forces capture Midway Island.\n");
			*midwayCaptured =1;
		}
		else if(*midwayDamage >=2 && carrierDamage >=1)
		{
			printf("The invasion is risky, but possible.\n");

			dice = rand()% 100;

			if(dice < 60)
			{
				printf("Success! After heavy fighting your foces Capture Midway Island.\n");
				*midwayCaptured =1;
			}
			else
			{
				printf("Failure! The invasion stalls under American resistance.\n");
				printf("Fleet Strength decreased by 2.\n");
				*fleetStrength -=2;
			}
		}
	}

	else if(Order ==2)
	{
		printf("\nYou delay the invasion and order more air attacks against Midway.\n");
		printf("Midway island Damage incrased by 1.\n");
		printf("Fleet Strength decreased by 1.\n");

		*midwayDamage +=1;
		*fleetStrength -=1;
	}

}
void enemyCounterAttack(int *fleetStrength, int Intelligence, int Reconnaissance, int fighterSupport)
{
	int chance = 40;
	int dice;

	chance -= Intelligence * 5;
	chance -= Reconnaissance * 5;
	chance -= fighterSupport * 5;

	if(chance <10)
	{
		chance =10;
	}
	if(chance > 80)
	{
		chance =80;
	}

	dice = rand()% 100;

	printf("\nAmerican Aircraft attempt a counterattack\n");
	printf("Enemy counterattack chance: %d%%\n", chance);

	if (dice < chance)
	{
		printf("The coutnerattack hits your fleet!\n");
		printf("Fleet strength decreased by 1. \n");
	*fleetStrength -=1;
	}
	else
	{
		printf("Your defenses hold. The counterattack fails.\n");
	}
}

void showFinalResult(int fleetStrength, int midwayDamage, int carrierDamage, int carrierLocated, int midwayCaptured)
{
	if(midwayCaptured ==1)
	{
		printf("Midway Status:    Captured\n");
	}
	else
	{
		printf("Midway Status:   Not Captured\n");
	}

	printf("\n");

	if(fleetStrength <= 0)
	{
		printf("RESULT: DEFEAT\n");
		printf("You lost Akagi, Kaga, Soryu and Hiryu marking a crushing defeat. Time is now against Japan\n");
	}
	else if(carrierDamage>=3 && midwayCaptured ==1)
	{
		printf("RESULT: DECISIVE VICTORY\n");
        	printf("You destroyed the American carrier threat and captured Midway.\n");
        	printf("The operation is a major success.\n");
	}
	else if(carrierDamage>=2 && midwayCaptured ==1)
	{
	printf("RESULT: STRATEGIC VICTORY\n");
        	printf("You captured Midway and badly damaged the American carrier force buying Japan more time\n");
	}
	else if(carrierDamage>=2 && midwayCaptured ==0)
	{
		printf("RESULT: PARTIAL SUCCESS\n");
        printf("You damaged the American carriers, but failed to capture Midway.\n");
	}


	else if(carrierDamage < 2 && midwayCaptured ==1)
	{
		printf("RESULT: RISKY VICTORY\n");
        	printf("You captured Midway, but the American carriers remain a serious threat.\n");
	
	}
	else
	{
		printf("RESULT: DEFEAT\n");
		printf("You failed to destroy the American Carrier force or Capture Midway. Go Home.");
	}
}

