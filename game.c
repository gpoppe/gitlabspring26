//Contributors
//GP
//Christine Pham
//Kenny Huynh
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

//Alexa Robles

//Meretrout(J.Q)
//Ivan Peralta
//Dominic Carreto
//Jeremiah R Pallera-Bautista
//Esthepanie Izaguirre
//Cristobal Yepez
//Andrew Michel
//Joseph Hernandez







#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void jbInit(void);
void ip21(void);
void folksamEV(void);

//place function prototypes here
void khprinter(void);
void room44dice(int *playerhealth, int *playerwins);
void room44rps(int *playerhealth, int *playerwins);
void room4421(int *playerhealth, int *playerwins);
void room44coinflip(int *playerhealth, int *playerwins);
void room44cups(int *playerhealth, int *playerwins);

void coolGame(void);
int iAmLazy(int);
void jpbFun(void);



void hauntedHouse(void); //Charles Parker
void callHouse(void);
void callEyes(void);
void callGhost(void);

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
//Start of Case 35 Prototype functions
void walkingPath(void);
int dicePitTournament(void);
int highLowTavern(void);
int battleEncounter(void);
int riddleGateOne(void);
int riddleGateTwo(void);
void printDice(int value);
void printCard(int value);
void exitFunction(void);
//End of Case 35  Prototype functions
void ip21(void);
void rtFun(void);
void JLeyva(void);
void fish(void);
void printStudent30(void);
void printInitialsAjewett(void);
void jgFun(void);
void playRoom1(void);
void gameroom30(void);
void JCgame(void);
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
void crazy49adventure(void);

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
void lexR(void);
void FishNightmare(void);
void FishingEvent(void);

void nhfun(void);
void room36AngelM(void);
int retryRoom36(void);

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


void guessNum(void);

void room31TwentyOneGame(void);
int room31DrawCard(int used[]);
int room31HitOrStand(void);
int room31GetCardValue(int cardIndex, int *currentTotal);
void room31PlayerTurn(int used[], char deck[][30], int *playerTotal);
void room31DealerTurn(int used[], char deck[][30], int *dealerTotal,int dealerCard1, int dealerCard2);


void room_33eizaguirre(void);
void cmeremikwu2(void);
void josephhernandez(void);
int skarkBay(void);



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
				playRoom1();
				break;
			}
			case 70:
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
				hauntedHouse(); //Call game
				puts("room3");
				break;
			}
			case 4:
			{
				srand(time(NULL));
				puts("Welcome to Room 4!\n\n");
				CAYfrog();
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
				JCgame();
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
				printf("\nWhen you  enter the room you see a man sitting down at a table.\n");
				printf("As you approach the man he asks you to play a game of 21 with him.\n");

				room31TwentyOneGame();

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
				room_33eizaguirre();
				puts("Welcome to HOWL'S THE MOVING CASTLE");
				break;
			}
			case 34:
			{
				puts("room34");
				break;
			}
			case 35:
			{
                printf("\nAs you step foot through door 35 you are met with another world\n");
                printf("\na single winding path stretches into the unknown ~ouuu spooky~.\n");
                printf("\nyou'll be met with lots of decisions, choose wisely and survive.\n\n");
                walkingPath();
				break;
			}
			case 36:
			{
				room36AngelM();
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
				crazy49adventure();
				break;
			}
			case 50:
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
				afFun();
				puts("room52");
				break;
			}
			case 73:
			{
				puts("room73");
				jpbFun();
				puts("room53");
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
				jmItsGameTime();
				puts("You have entered Room 55!\n");
				break;
			}
			case 56:
			{
                                int doorPicked = 0;
                                int doorLoop = 1;

                                printf("\n\t!Welcome to the matrix!");
                                printf("\nIn here you have 5 mysterious rooms to enter to become someone or something");
                                printf("\nfrom the past, present, or future!");
                                printf("\nChoose wisely now or not :)");

                                while(doorLoop == 1)
                                {
                                        printf("\n(Door 1) - Seems like something is buring on the other side of the door.");
                                        printf("\n(Door 2) - You see a sign that says welcome to paradise.");
                                        printf("\n(Door 3) - There is no door, is just the void.");
                                        printf("\n(Door 4) - You hear people screaming.");
                                        printf("\n(Door 5) - Just a nomral door.");
                                        printf("\nEnter the door you wich to enter:" );
                                        scanf("%d", &doorPicked);


                                        if(doorPicked == 1)
                                        {
                                                int op1 = 0;
                                                int op2 = 0;

                                                printf("\n\nAs you get closer to the door you hear \"KILL THAT WITCH\".");
                                                printf("\nWhen you open the door a wind of blazing flames rush towards you.");
                                                printf("\nThe flmaes start to consume you, through all the flames you see a cross ");
                                                printf("\n [1]- you cry out for Jesus or [2]- you close your eyes in anger");
                                                printf("\nEnter your option: ");
                                                scanf("%d", &op1);

                                                if(op1 == 1)
                                                {
                                                        op2 = 1;
                                                        printf("\nIt's 1425, you wake up as french women and you see a saint.");
                                                        printf("\nThe saint tells you to save your country and to live a virtuous life.");
                                                        printf("\nNo one belived you at first until the miracles happend.");
                                                        printf("\n1429 The Siege of Orleans, as you wave your banner and lead the troops");
                                                        printf("\nto battle they start to belive in you.");
                                                        printf("\nWith your divine visions and courage you helpled your country, France,");
                                                        printf("\nfight off the English man, you become a symbol of hope, a hero, a saint.");
                                                        printf("\n1430 The Siege of Compiengne, in the heat of battle  you get camptured,");
                                                        printf("\nand sold off to the Englsh man. A yaer prison and then it happens, ");
                                                        printf("\na trial on heresy. Verdict guilty. Sentenced to death.");
                                                        printf("\nAs you are being lead to the stake, you hear \"KILL THAT WITCH\"");
                                                        printf("\nEngulfed in flames [1]- you cry out for Jesus or [2]- you close your eyes in anger");
                                                        printf("\n\tEnter your option: ");
                                                        scanf("%d", &op1);

                                                        while(op1 == 1)
                                                        {
                                                                printf("\nNO!");
                                                                printf("\n[1]- you cry out for Jesus or [2]- you close your eyes in anger");
                                                                printf("\n\tEnter your option: ");
                                                                scanf("%d", &op1);

                                                        }
                                                }
                                                if(op1 == 2)
                                                {
                                                        printf("\nYES!");
                                                        printf("\nFeel the anger, they called you a liar, a heretic, and a witch.");

                                                        if(op2 == 0)
                                                        {
                                                                printf("\nYou don't know whats going on or who you are but the screams get louder and");
                                                        }
                                                        else
                                                        {
                                                                printf("\nThe anger is consuming your thoughts, you forget the reason for being there");
                                                        }
                                                        printf("\nall you know in this moment is the feeling of buring and vengeance.");
                                                        printf("\nYou are reborn in that very moment, you become what they feared.");
                                                        printf("\nA Witch!");
                                                        printf("\nYou slaughter the people who accused and burned you alive!");
                                                        printf("\nIn the middle of your rampage you remember a voice that said");
                                                        printf("\n\"Live a virtuous life my dear Jeanne d'arc\"");

                                                        while(op1 == 2)
                                                        {
                                                                printf("\n[1]- you softly say Jesus or [2]- you continue the slaughter");
                                                                printf("\n\tEnter your option: ");
                                                                scanf("%d", &op1);

                                                                if(op1 == 2)
                                                                {
                                                                        printf("\n\"NO!\"");
                                                                }
                                                        }
                                                }
                                                printf("\n\"Come cild you have suffer enough lets go home\"");
                                                printf("\nYou look at your hands dripping in blood and then you stare at the sky and say");
                                                printf("\n\"This is who I'am now, I must kill those accused me\"");
                                                printf("\nAfter the massacre you are curesd with a burning vengeace inside of you forever.");
                                                printf("\nOnce dead you are only remember as a witch and your real name forgotten.");

                                                printf("\n\nThak you again for choosing the Jeane D'arc door, want to choose another room or leave :(  ???");
                                                printf("\nEnter: [1]- to STAY and pick another room or [2]- to leave :( ");
                                                scanf("\n%d", &doorLoop);
                                        }

                                        else if(doorPicked == 2)
                                        {
                                                srand(time(NULL));
                                                int rando = 1 + rand()%3;
                                                int op3 = 0;
                                                printf("\nWelcome to paradise little mouse!");
                                                printf("\nTodays lucky draw you get Gen %d mosue" , rando);
                                                printf("\nAlright go have fun!\n");


                                                if(rando == 1)
                                                {
                                                        printf("\nWOW! you say as you are put inside a big box with unlimited water and food.");
                                                        printf("\nYou see there are rooms and so you pick your own and find yourself a lady mouse live with.");
                                                        printf("\nLive is nice sex, food, and hanging out with the boys everyday.");
                                                        printf("\nA few days later some random mouse wants to steal your wife.");
                                                        printf("\n[1]- you fight that loser or [2]- trust your wife is going to be loyal");
                                                        printf("\nEnter option: ");
                                                        scanf("%d", &op3);

                                                        if(op3 == 1)
                                                        {
                                                                printf("\nYou kill that loser mouse but now you have a line of mice wanting to fight.");
                                                                printf("\nYou win for the week but then the Gen 2 mouse start to line up.");
                                                                printf("\nYou are getting odler and one day a Gen 2 mouse bodys you and tears you apart");
                                                                printf("\nAs you are dying you see your mouse wife leaving with the gen 2 mosue.");
                                                        }
                                                        else
                                                        {
                                                                printf("\nYou trusted her but unlucky for you that mouse was the king of the mouse box.");
                                                                printf("\nNow you are alone, with just food and sleep becuase you are too old for anything.");
                                                                printf("\nYears pass and the Gen 2 mouse are taking over all the food and they even kick you out of your room.");
                                                                printf("\nAlone in the middle of the box, you die.");
                                                        }

                                                }
                                                if(rando == 2)
                                                {
                                                        printf("\nYou are born into a mouse society where everything is perfect, inside a box.");
                                                        printf("\nEveryday is the same you thing. You see the old heads, Gen 1 mouse doing there thing.");
                                                        printf("\nYour mouse parents tell you, you have to them as well but you ask yourself why when everything is perfect");
                                                        printf("\nOne day all the food spots are full and your very hungry.");
                                                        printf("\n[1]- you fight your way to get some food or [2]- you do nothing");
                                                        printf("\nEnter option: ");
                                                        scanf("%d", &op3);

                                                        if(op3 == 1)
                                                        {
                                                                printf("\nYou try and try but you can't make your way.");
                                                                printf("\nThe rush is over, you finally get your turn to eat.");
                                                                printf("\nYou tell yourself whats the point of fighting when I can just wait.");
                                                                printf("\nThats all you do in live, wait for everything and all you do now is waiting to die.");
                                                        }
                                                        else
                                                        {
                                                                printf("\nYou sit there waiting for every mouse to leave.");
                                                                printf("\nIt's finally your turn to eat and eat you do.");
                                                                printf("\nYou realized if I do nothing and still eat then you dont have to fight,");
                                                                printf("\nThats it you do nothing in life just standing around waiting for eveything to be perfect, you died doing nothing.");
                                                        }
                                                }
                                                if(rando == 3)
                                                {
                                                        printf("\nThis place is weird you don't have to anything, it perfect.");
                                                        printf("\nYou look in the mirror and realize that you look way better than the other mice.");
                                                        printf("\nYou spent yours days eating, cleaing yourself, and sleeping.");
                                                        printf("\nThere are no options for you, no need to fight, everyone waiting there turns on food, no need for anything");
                                                        printf("\nThe years pass by and tell yourself wow this place was a paradise.");
                                                        printf("\nYou die with all your other Gen 3 mice family, the beautiful ones, doing nothing wondering why all the");
                                                        printf("\nGen 1 and Gen 2 mice body parts are all over the place.");
                                                }

                                                printf("\n\nThak you again for choosing the Universe 25 door, want to choose another room or leave :(  ???");
                                                printf("\nEnter: [1]- to STAY and pick another room or [2]- to leave :( ");
                                                scanf("\n%d", &doorLoop);
                                        }
                                        else if(doorPicked == 3)
                                        {
                                                int days[] = {1, 2, 765675756};
                                                int num = 0;

                                                printf("\nOh it looks like you became a rock.");
                                                printf("\nummmm pick a number between 1 and 3. ");
                                                printf("\nEnter number: ");
                                                scanf("%d", &num);

                                                printf("\n\nOKay so lucky for you get to spend %d days as a rock, have fun", days[num-1]);

                                                if(num == 3 )
                                                {
                                                        printf("\nNot much really to do but just sit around as days go by");
                                                        printf("\nbut it seems like your on a moon and wait is that earth???");
                                                        printf("\nDay 2134 - Oh cool the humans are landing on the moon");
                                                        printf("\nDay 455656 - OMG the planet is on fire, did they nuke eachother???");
                                                        printf("\nDay 13867098 - Not much has happen... are those Alien spaceships, they found no life on earth.");
                                                        printf("\nDay 5000000000 - it's so boring oh shit the sun is explo...");
                                                        printf("\nComputer: Opps went a bit overboard with the days Sorry wont happen again.");

                                                }

                                                if(num == 2)
                                                {
                                                        printf("\nDamn I'm a rock at the beach.");
                                                        printf("\nTwo hours pass by and you peolpe sitting up chairs and stuff.");
                                                        printf("\nWhats going on? Everyone is so well dressed");
                                                        printf("\nOh its a couple getting married, you see everyone dancing, laughing, and drinking.");
                                                        printf("\nWhat a beatuful sight.");
                                                        printf("\nNext day you see a different couple but they are fighting");
                                                        printf("\nand one of them is getting closer to you and picks you up.");
                                                        printf("\nThe next moment you realize you being used as a weapon to kill the man");
                                                        printf("\nThe girl ties up the man in a bag and thros him in the water, and uses you to sink the body.");
                                                        printf("\nWell only one night to go.");
                                                }
                                                if(num == 1)
                                                {
                                                        printf("\n1 days is not....");
                                                        printf("\nOh Im back at the door what happened?");
                                                        printf("\nI think it glicthed and it was only set to one second.");
                                                        printf("\nHELLO anyone there!");
                                                        printf("\na robot approachs you and tells you that you broke free from the matrix.");
                                                        printf("\nWhat????");
                                                        printf("\nno this is just a game im playing, this game is dumb get me out. clsoe game.");
                                                        printf("\nWhats happing, why can't I close the game...");
                                                        printf("\nMessage from computer: Sorry about that it seems like someone was trying to escaple from another room");
                                                        printf("\nIll fix it just in a momenet. Thank for understangin. You can try are other doors if you wish to.");
                                                }

                                                printf("\n\nThak you again for choosing a random rock door, want to choose another room or leave :(  ???");
                                                printf("\nEnter: [1]- to STAY and pick another room or [2]- to leave :( ");
                                                scanf("\n%d", &doorLoop);
                                        }
                                        else if(doorPicked == 4)
                                        {
                                                printf("\nMessage from Computer: Sorry for the inconvenience, someone tried to escape so we are working to fix");
                                                printf("\nit, comeback later.");

                                                printf("\n\nThak you again for choosing the IHNMAIMS door, want to choose another room or leave :(  ???");
                                                printf("\nEnter: [1]- to STAY and pick another room or [2]- to leave :( ");
                                                scanf("\n%d", &doorLoop);
                                                doorLoop = 1;

                                                printf("\nThank you for staying :)\n");
                                        }
                                        else if(doorPicked == 5)
                                        {
                                                int op4 = 0;

                                                printf("\nYAY! you get to be me for the day.");
                                                printf("\n[1]- go study for final exams or [2]- go the donut shop");
                                                printf("\nEnter option: ");
                                                scanf("%d", &op4);
                                                int theNum = skarkBay();

                                                if(op4 == 1)
                                                {
                                                        printf("\nComputer: Ughhh your so boring let me go get some donuts.");
                                                        printf("\nAnway since you suck at studing you got me an F. Comptuer: Thanks");
                                                        printf("\nYou notice my drums set and you decied to play. Comptuer: you suck.");
                                                        printf("\nNo one is blowing up the phone so you decide to download hinge for me");
                                                        printf("\nYou look at my camera roll for some photos. Computer: Yooooo not those ");
                                                        printf("\nCumputer: here let me spawn you a magical ball that will tell you how mnay girls are going to swipe one me.");
                                                        printf("\nYou shake the ball and it says %d", theNum);
                                                        printf("\nComputer: I can't tell was that a lot???");
                                                        printf("\nComputer: Anway your time is over bye,I got stuff to do");
                                                }
                                                else
                                                {
                                                        printf("\nComputer: Yes some donuts");
                                                        printf("\nYou get some donuts and a lottery ticket.");
                                                        printf("\nYou go check the numbers to see if \"I\" won ");
                                                        printf("\nComputer: did you win???");
                                                        printf("\nYou say holy shit we won %d dolloars", theNum);
                                                        printf("\nComputer:I'm assuming that I won big, thanks man but go ahead and logout for me. I ll make sure to send you some");
                                                        printf("\nBYE BYE");
                                                }

                                                printf("\n\nThak you again for choosing the Jonathan Leyva door, want to choose another room or leave :(  ???");
                                                printf("\nEnter: [1]- to STAY and pick another room or [2]- to leave :( ");
                                                scanf("\n%d", &doorLoop);
                                        }
                                }


                                printf("\n\nThank you for choosing the Matrix, okay leave now :)\n\n");
                                JLeyva();
                                puts("room56\n\n");
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
                                break;
			}
			case 66:
			{
                                lexR();
				FishNightmare();
                                break;
			}
			case 67:
			{
				josephhernandez();
                                puts("room67");
                                break;
			}
			case 68:
			{
                                puts("room68");
				hOsuna();
				char choice1 = ' ';
				char choice2[50] = " ";
				int choice3 = 0;
				char choice4 = ' ';
				char choice5[50] = " ";
				char name[50] = " ";
				printf("Who dares enter?...\nIdentify your first name:\n");
				scanf("%49s", name);
				printf("\nWelcome %s, You've entered the puzzle box room.\nYou must now answer my riddles in order to progress:\n", name);
				guessNum();
				printf("Why was 6 afraid of 7?\nA) Because 7 EIGHT 9\nB) Because SIX SEVEN\nEnter 'A' or 'B'\n");
				scanf(" %c", &choice1);
				while (choice1 != 'A')
				{
					printf("Hmm, sorry guess again\n");
					scanf(" %c", &choice1);
				}
				printf("Correct!\nFill in the blank. What walks on 4 legs\nthen on two legs\nthen on three legs?\nThe answer is a _____.\n");
				scanf("%49s", choice2);
				while (!(strcmp(choice2, "human") == 0) && !(strcmp(choice2, "person") == 0))
				{
					printf("Hmm, sorry guess again\n");
					scanf("%49s", choice2);
				}
				printf("Correct!\n");
				printf("Only a real human could have gotten that correct.\nWhat is 9 plus 10?\n21\t19\t911\nEnter your choice:\n");
				scanf("%d", &choice3);
				while (choice3 != 19)
				{
					if (choice3 == 21)
					{
						printf("401 error\ndo you even vine?\n");
					}
					if (choice3 == 911)
					{
						printf("Call the Cops!!\n");
					}
					scanf("%d", &choice3);
				}
				printf("Correct!\nWas there only one true answer?\n");
				printf("\nWhat is the begining of Eternity, \nthe End of time and space, \nthe beginning of Every End, \nand the end of every race?\n");
				scanf(" %c", &choice4);
				while (choice4 != 'E' && choice4 != 'e')
				{
					printf("Everything, Everywhere, all at once...\n");
					scanf(" %c", &choice4);
				}
				printf("ExcEptionally done!\n...onto the final trial.\n");
				printf("I belong to you, but others use me more often than you do. \nWhat am I?\n");
				scanf("%49s", choice5);
				while (!(strcasecmp(choice5, "name") == 0))
				{
					printf("\nDon't give up, the answer calls upon you...\n");
					scanf("%49s", choice5);
				}
				printf("\nHmm...verify your answer:\n");
				scanf("%49s", choice5);
				while (!(strcasecmp(choice5, name) == 0))
				{
					printf("\nLook nowhere but to yourself for the answer\n");
					scanf("%49s", choice5);
				}
				printf("Well done %s! \nYou are one of few to pass the trials of destiny. \nYou may now continue on your journey. \nBest of luck...\n", name);
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
                                cmeremikwu2();
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

void playRoom1(void) 
{
	int i, decision, rNum;
	char inventory[3][20] = {"Sword", "Shield", "Potion"};
	int hasItem = 0;

	rNum = rand() % 10 + 1;

	printf("You enter a dusty room. You see a glint in the corner.\n");
	printf("1. Inspect the glint\n2. Ignore it and walk forward\nChoice: ");
	scanf("%d", &decision);

	if (decision == 1) {
		printf("You found a %s! But it crumbles to dust.\n", inventory[0]);
	} else {
		printf("You step carefully.\n");
	}

	printf("A goblin drops from the ceiling! It rolled a %d for initiative.\n", rNum);
	printf("1. Attack\n2. Defend\nChoice: ");
	scanf("%d", &decision);

	if (decision == 1) {
		printf("You attack the goblin!\n");
	} else {
		printf("You block the goblin's strike!\n");
	}

	printf("The goblin drops a chest.\n");
	printf("1. Open it\n2. Leave it\nChoice: ");
	scanf("%d", &decision);

	if (decision == 1) {
		for (i = 0; i < 3; i++) {
			printf("Checking compartment %d...\n", i + 1);
		}
		printf("You found a %s!\n", inventory[2]);
		hasItem = 1;
	} else {
		printf("You walk past the chest.\n");
	}

	printf("A large door blocks your path with a riddle.\n");
	printf("1. Try to solve it\n2. Try to smash the door\nChoice: ");
	scanf("%d", &decision);

	if (decision == 1) {
		printf("You speak the password and the door opens.\n");
	} else {
		printf("You bounce off the heavy iron door and eventually figure out the password.\n");
	}

	printf("You reach the end of the room.\n");
	printf("1. Return to the main hall\n2. Search the room one last time\nChoice: ");
	scanf("%d", &decision);

	if (decision == 2 && hasItem == 0) {
		printf("You find nothing else.\n");
	}
	
	printf("You leave the room.\n");
}

void folksamEV(void) 
//place function definitions below this comment
void hauntedHouse(void)
{
	srand(time(NULL));

void jbInit(void)
{
	puts("jbRoom17");
}
	while(1)
    {
        char choice;
        
        callHouse();
        printf("You see a house in the distance...\n");
        printf("It is cold and dark outside. You need shelter.\n");

        printf("\nIt looks abandoned. Enter? (Y or N): ");
        while(1) //input validation
        {
            scanf(" %c", &choice);
            if (choice == 'Y' || choice == 'y')
            {
                printf("You decided to enter the house.\n");
                choice = 'Y';
                break;
            }
            else if (choice == 'N' || choice == 'n')
            {
                printf("***************************************************\n");
                printf("\nYou decide to not enter the house.\n");
                printf("\nYou turn away. Never to be seen again...\n");
                printf("\nGAME OVER.\n");
                choice = 'N';
                break;
            }
            else
            {
                printf("Enter Y or N only: ");
            }
        }

        if (choice == 'Y')
        {
            int diceRoll = (rand() % 90) + 10; //10-99 to make it easier for the hidden array
            printf("***************************************************\n");
            
            printf("\nYou assume there is nobody else in this house...\n");
            printf("However, as you walk into the darkness, you notice a pair of eyes in the distance.\n\n");
            callEyes();
            printf("\nThe eyes are watching you. What do you do?\n\n");

            printf("A. Talk\n");
            printf("B. Fight\n");
            printf("C. Cry\n");
            printf("D. Bribe\n");
            printf("E. Run Away\n\n");

            printf("***************************************************\n");

            while(1)
            {

                printf("Enter: ");
                scanf(" %c", &choice);
                if (choice == 'A' || choice == 'a') //Talk
                {
                    if (diceRoll > 20)
                    {
                        printf("\nYou decide to talk to the eyes.\n\n");

                        printf("The eyes reveal themselves to be an old man hiding from the darkness like you.\n");
                        printf("You chat away the night. And retire to your chosen rooms.\n");
                    
                        printf("\nYOU HAVE SURVIVED THE NIGHT.\n");
                        printf("***************************************************\n");
                        break;
                    }
                    else
                    {
                        printf("\nYou decide to talk to the eyes.\n\n");

                        printf("No response.\n");

                        printf("\nEventually, something shiny peeks out of the darkness.\n");
                        printf("It is something sharp.\n");

                        printf("\nYou are never to be seen again.\n");
                        printf("\nGAME OVER.\n");
                        printf("***************************************************\n");
                        break;
                    }
                }
                else if (choice == 'B'|| choice == 'b') //Fight
                {
                    if (diceRoll > 70)
                    {
                        printf("\nYou decide to brawl with the eyes!\n\n");

                        printf("The eyes notice your fighting stance.\n");
                        printf("\nBefore you could get a punch in, the eyes decide to run away.\n");

                        printf("They jump out of a window, never to be seen again.\n");
                        
                        printf("\nYOU HAVE SURVIVED THE NIGHT.\n");
                        printf("***************************************************\n");
                        break;
                    }
                    else
                    {
                        printf("\nYou decide to brawl with the eyes!\n\n");
                        
                        printf("The eyes notice your fighting stance.\n");
                        printf("Before you could get a punch in, something sharp pokes out of the darkness.\n");
                        printf("\nThe sharp object runs right through your torso.\n");
                        printf("\nYou are never to be seen again.\n");
                        printf("\nGAME OVER.\n");
                        printf("***************************************************\n");
                        break;
                    }
                }
                else if (choice == 'C' || choice == 'c') //Cry (has an easter egg if you guess the dice roll)
                {
                    if (diceRoll > 30)
                    {
                        int num1, num2;
                        int dice1, dice2;
                        int numArr[2];
                        int diceArr[2];
                        int flag = 1;

                        printf("\nYou decide to lay down and cry.\n\n");
                        
                        printf("The eyes see your sorry pose and pity you.\n");
                        printf("It drops some items to help you survive the night. Then disappears into a locked room.\n");

                        printf("\nYOU HAVE SURVIVED THE NIGHT.\n");
                        
                        printf("As the eyes leave, you notice a safe hidden in the corner.\n");
                        printf("\nThe safe reads, \"Guess the two-digit combination and you can open the safe.\"\n");

                        printf("Enter the first number: ");
                        scanf(" %d", &num1);
                        printf("Enter the second number: ");
                        scanf(" %d", &num2);
                        printf("***************************************************\n");
                        numArr[0] = num1;
                        numArr[1] = num2;

                        dice1 = diceRoll / 10;
                        dice2 = diceRoll % 10;
                        diceArr[0] = dice1;
                        diceArr[1] = dice2;
                        
                        for (int i = 0; i < 2; i++)
                        {
                            if (numArr[i] != diceArr[i])
                            {
                                printf("\nWrong number! The safe stays closed.\n");
                                flag = 0;
                                break;
                            }
                        }

                        if (flag)
                        {
                            printf("\nYou have opened the safe!\n");
                            printf("There was a ghost hiding inside!\n");
                            callGhost();
                        }
                        break;
                        
                    }
                    else
                    {
                        printf("\nYou decide to lay down and cry.\n\n");
                        
                        printf("The eyes see your sorry pose and laugh at you.\n");
                        printf("The sheer embarrassment triggers your anxiety and gives you a heart attack.\n");

                        printf("GAME OVER.\n");
                        printf("***************************************************\n");
                        break;
                    }
                }
                else if (choice == 'D' || choice == 'd') //Bribe
                {
                    if (diceRoll > 50)
                    {
                        printf("\nYou decide to bribe the eyes.\n\n");
                        
                        printf("\nThe eyes see the stack of money and are pleased.\n");
                        printf("It swipes the whole stack and disappears into a locked room.\n");

                        printf("\nYOU HAVE SURVIVED THE NIGHT.\n");
                        printf("***************************************************\n");
                        break;
                    }
                    else
                    {
                        printf("\nYou decide to bribe the eyes.\n\n");

                        printf("\nThe eyes see the stack of money and are confused.\n");
                        printf("An old man reveals himself and accuses you of being a criminal.\n");

                        printf("\nHe kicks you out.\n");
                        printf("You succumb to the cold and pass away.\n");

                        printf("\nGAME OVER.\n");
                        printf("***************************************************\n");
                        break;
                    }
                }
                else if (choice == 'E' || choice == 'e')
                {
                    printf("\nYou decide to run away from the eyes.\n\n");

                    printf("\nYou exit the house and escape deep into the darkness.\n");
                    printf("As you run deeper, you realize there is no end in sight.\n");
                    printf("You eventually succumb to the cold.\n");

                    printf("\nGAME OVER.\n");
                    printf("***************************************************\n");
                    break;
                }
                else
                {
                    printf("Please pick one of the choices (A-E only): ");
                }

            }

        }

        printf("\nDo you want to play again? (Y or N): ");
        while(1)
        {
            scanf(" %c", &choice);
            if (choice == 'Y' || choice == 'y')
            {
                break;
            }
            if (choice == 'N' || choice == 'n')
            {
                choice = 'N';
                break;
            }
            else
            {
                printf("Please choose Y or N only: ");
            }
        }

        if (choice == 'N')
        {
            printf("\nThank you for playing!\n");
            break;
        }
    } 
}
void callHouse(void)
{
	    printf(
    "               /\\\n"
    "              /  \\\n"
    "  ___________/    \\____________\n"
    " |::::::::::/      \\:::::::::::|\n"
    " |:::::::::/        \\::::::::::|\n"
    " |::::::::/__________\\:::::::::|\n"
    " |_________|  ____  |__________|\n"
    "  | ______ | /    \\ | _______ |\n"
    "  ||      || |    | ||       ||\n"
    "  ||      || |    | ||       ||\n"
    "  ||______|| |    | ||_______||\n"
    "  |========| |____| |=========|\n"
    " (,,,,,,,,,|________|,,,,,,,,,)\n"
    " (,,,,,,,,,/________\\,,,,,,,,,)\n"
    " (,,,,,,,,/__________\\,,,,,,,,)\n"
    "\n"
        );
}

void printInitialsAjewett(void)
void callEyes(void)
{
	  printf(
    "                              \n"
    "        _,..,_         _,..,_     \n"
    "    _,-`/ o \\ '.     .' / o \\`-,_\n"
    "     '-.\\___/.-`     `-.\\___/.-'\n"
            );
}
void callGhost(void)
{
	  printf(
"       .-.\n"
"      (o o)\n"
"  /\\_.' o '. _/\\\n"
"  |            |\n"
"   \\          /\n"
"    `\\      /`\n"
"   (__)    /\n"
"   `.__...'\n"
);
}
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
    printf("\n room 52: The crypt of the lost bananas of the curator\n");

    printf("\n\"welcome to my crypt, you will have to go through banana related test to get my reward.\"\n");
    printf("you are dropped down a hole into the crypt\n");

    int Answers[5] = {2, 2, 1, 3, 5}; // array
    int decision;
    int start = rand() % 5; // random number
    int i;
    int q;

    for(i = 0; i < 5; i++) // loop
    {
        q = (start + i) % 5;

        switch(q)
        {
            case 0:
                printf("\nYou find five bananas on an altar. Only one is safe to touch.\n");
                printf("1) Green banana\n");
                printf("2) yellow banana\n");
                printf("3) Black banana\n");
                printf("4) Moldy banana\n");
                printf("5) Glowing red banana\n");
                break;

            case 1:
                printf("\nA giant stone door blocks your path.\n");
                printf("1) Kick the door open with all you might\n");
                printf("2) Press the yellow banana symbol\n");
                printf("3) Scream at the door\n");
                printf("4) Run away\n");
                printf("5) Sleep on the floor\n");
                break;

            case 2:
                printf("\nThe curator appears and demands respect.\n");
                printf("1) Bow and offer a banana\n");
                printf("2) Throw a peel at him\n");
                printf("3) call him mojo jojo\n");
                printf("4) Challenge to a banana eating competition\n");
                printf("5) make fun of his mom\n");
                break;

            case 3:
                printf("\nA pit opens below you. Five vines hang overhead.\n");
                printf("1) Grab the red vine\n");
                printf("2) Grab the blue vine\n");
                printf("3) Grab the yellow vine\n");
                printf("4) Jump into the pit where the glortrox is ready to eat you\n");
                printf("5) Stand still and do nothing\n");
                break;

            case 4:
                printf("\nYou reach the treasure chamber with five chests.\n");
                printf("1) Open the rusty chest\n");
                printf("2) Open the tiny chest\n");
                printf("3) Open the cracked chest\n");
                printf("4) Open the loud chest\n");
                printf("5) Open the banana-shaped chest\n");
                break;
        }

        printf("\nYour choice (1-5): ");
        scanf("%d", &decision);

        if(decision == Answers[q])
        {
            printf("\nCorrect!\n");
        }
        else
        {
            printf("\nWrong... no banana for you.\n");
            printf("Returning to main room...\n\n");
            return;
        }
    }

    printf("\nYou survived Room 52 and pleased the curator!\n");
    printf("He rewards you with a GOLDEN BANANA!!!\n");
    printf("Returning to main room...\n\n");
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

void crazy49adventure(void)
{
	int choice;
	int randomEvent;
	printf("\nEntering Gracie's Train Station....");
	
	// Choice 1
	printf("\nYou have a train scheduled at 3am.\n(1 = Go alone, 2 = Take Jiminy Cricket with you)");
	printf("\nChoose: ");
	scanf("%i", &choice);
	
	if(choice == 1)
	{
		printf("(;´༎ຶД༎ຶ`) YOU MEANIE\n");
	
	}
	else
	{
		printf("✧♡(◕‿◕✿) BESTIE\n");
	
	}
	
	// Choice 2
	printf("\n༼ ºل͟º ༼ ºل͟º ༼ ºل͟º ༽ ºل͟º ༽ ºل͟º ༽\nThe line is too long!\n(1 = cut in line, 2 = buy fast pass)");
	printf("\nChoose: ");
	scanf("%i", &choice);
	
	// Random Event
	randomEvent = rand() % 100;
	if(randomEvent < 50)
	{
		system("sl -a");
		printf("\nThe ride malfunctions.\nYou fell!\nAAAAAAAAH");
	
	}
	else
	{
		system("sl -F");
		printf("\nYour train flew away!");
	}
	
	// Choice 3
	printf("\nWhat to do next?\n(1 = look at the moon, 2 = run a marathon)");
	printf("\nChoose: ");
	scanf("%i", &choice);

	if(choice == 1)
	{
		system("curl wttr.in/moon");
	}
	else
	{
		system("curl -s -m 3 ascii.live/forrest");
	
	}


	// Choice 4
	printf("\nYou are feeling tired. \n(1 = Spend life savings on Gracie merch!, 2 = Buy all the food! (you currently weigh 120 lbs))");
	printf("\nChoose: ");
	scanf("%i", &choice);

	if(choice == 1)
	{
		int credit_util[] = {30, 75, 100, 145};
		int i;
		
		printf("Here is your credit utilization from each credit card account!\n");
		for(i=0;i<4;i++)
		{
			printf("%d%% \n", credit_util[i]);
		
		}
		printf("\n");
	}
	else
	{
		int weight = 120;
		int a;

		for(a=0;a<50;a++)
		{
			weight += 20;
			a++;
		}
		printf("You now weigh %d pounds", weight);
		printf("\n");
	
	}

	// Choice 5
	printf("\nCongrats! You are broke!\nGive us a rating based on your adventure");
	printf("\n5 - Awesome\n4 - Good\n3 - Okay\n2 - Me no like\n1 - I'm suing this place\n");
	printf("\nChoice: ");
	scanf("%i", &choice);

	printf("\nTOO BAD (╯°□°)╯ GOODBYE\n\n");	
	return;
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

//START of CASE 35 Game Function
void walkingPath(void)
{
    int userSteps = 0;

    printf("\nThe path you follow splits and curls around a wicked looking tree\nChoose 1 or 2:\n");
    printf("1) Follow the left path toward the sound of cheering.\n");
    printf("2) Follow the right path filled with mist and a soft light that can be seen through it.\n");
    printf("or type 99 anytime to return to the main doors room.\n");
    printf("Your choice: ");
    scanf("%d", &userSteps);

    if (userSteps == 99)
    {
        return;
    }

    if (userSteps == 1)
    {
        if (dicePitTournament() == 0)
        {
            printf("\nYou failed the Dice Pit and are returned to the start of the path!\n");
            walkingPath();
            return;
        }
    }

    else if (userSteps == 2)
    {
        printf("\nThe mist swallows you whole...\n");
        printf("You stumble blindly and find yourself back in the main hall.\n");
        return;
    }

    printf("\nThe path straightens and lanterns flicker ahead.\nchoose 1 or 2:\n");
    printf("1) Approach the crooked tavern perched on the cliffside.\n2) Wander into the unlit woods beside the trail.\n");
    printf("99) Return to the main hall.\n");
    printf("Your choice: ");
    scanf("%d", &userSteps);

    if (userSteps == 99)
    {
        return;
    }

    if (userSteps == 1)
    {
        if (highLowTavern() == 0)
        {
            printf("\nYou failed the tavern game and are returned to the start of the path!\n");
            walkingPath();
            return;
        }
    }
    else if (userSteps == 2)
    {
        printf("\nThe woods grow silent. A shriek sends you running back to the main hall.\n");
        return;
    }

    printf("\nThe path narrows into a twisting canyon.\nchoose 1 or 2:\n");
    printf("1) Walk toward the echoing footsteps ahead.\n2) Climb the unstable rocks to the side.\n");
    printf("99) Return to the main hall.\n");
    printf("Your choice: ");
    scanf("%d", &userSteps);

    if (userSteps == 99) 
    {
        return;
    }

    if (userSteps == 1)
    {
        if (battleEncounter() == 0)
        {
            printf("\nYou were defeated in battle and are returned to the start of the path!\n");
            walkingPath();
            return;
        }
    }
    else if (userSteps == 2)
    {
        printf("\nThe rocks crumble beneath you! You slide all the way back to the main hall.\n");
        return;
    }

    printf("\nThe path opens into an ancient grove.\nchoose 1 or 2:\n");
    printf("1) Approach the moss-covered statue.\n2) Step into the pool of shimmering water.\n");
    printf("99) Return to the main hall.\n");
    printf("Your choice: ");
    scanf("%d", &userSteps);

    if (userSteps == 99)
    {
        return;
    }

    if (userSteps == 1)
    {
        if (riddleGateOne() == 0)
        {
            printf("\nThe statue rejects your answer and you are returned to the start of the path!\n");
            walkingPath();
            return;
        }
    }
    else if (userSteps == 2)
    {
        printf("\nThe water flashes bright white. You awaken in the main hall.\n");
        return;
    }

    printf("\nThe path becomes a long corridor etched with glowing runes.\nchoose 1 or 2:\n");
    printf("1) Walk toward the massive iron door.\n2) Touch the glowing runes on the wall.\n");
    printf("99) Return to the main hall.\n");
    printf("Your choice: ");
    scanf("%d", &userSteps);

    if (userSteps == 99)
    {
        return;
    }

    if (userSteps == 1)
    {
        if (riddleGateTwo() == 0)
        {
            printf("\nThe door laughs at your failure and you are returned to the start of the path!\n");
            walkingPath();
            return;
        }
    }
    else if (userSteps == 2)
    {
        printf("\nThe runes flare violently! A shockwave blasts you back to the main hall.\n");
        return;
    }

    printf("\nAs you take your final step, the air shimmers.\n");
    printf("A robed wizard materializes before you, staff glowing faintly.\n");
    printf("\"You've reached the end of your journey,\" he says.\n");
    printf("\"Now return to the doors that brought you here.\"\n\n");

    printf("\nA flash of light engulfs the path...\n");
    printf("You are standing once again in the main hall of doors.\n");
}

int dicePitTournament(void)
{
    int round;
    int playerRoll, computerRoll;
    int playerWins = 0, computerWins = 0;
    char choice;

    printf("\nWelcome to the Dice Pit of DOOM!\n\n");

    for (round = 1; round <= 5; round++)
    {
        printf("----- Round %d -----\n", round);
        printf("Enter Y to roll; Q to quit this tournament: ");
        scanf(" %c", &choice);

        if (choice == 'Q' || choice == 'q')
        {
            printf("\nYou step away from the Dice Pit early.\n");
            return 0;
        }

        playerRoll = 1 + rand() % 6;
        computerRoll = 1 + rand() % 6;

        printf("\nYou rolled:\n");
        printDice(playerRoll);

        printf("\nComputer rolled:\n");
        printDice(computerRoll);

        if (playerRoll > computerRoll)
        {
            playerWins++;
        }
        else if (computerRoll > playerRoll)
        {
            computerWins++;
        }

        printf("\nScore: You %d - Computer %d\n\n", playerWins, computerWins);
    }

    printf("===== Tournament Over =====\n");

    if (playerWins > computerWins)
    {
        printf("You are victorious in the Dice Pit!\n");
        return 1;
    }
    else
    {
        printf("You have been defeated in the Dice Pit.\n");
        return 0;
    }
}

void printDice(int value)
{
    printf("╔═══════╗\n");
    switch (value)
    {
        case 1: printf("║       ║\n║   *   ║\n║       ║\n"); break;
        case 2: printf("║ *     ║\n║       ║\n║     * ║\n"); break;
        case 3: printf("║ *     ║\n║   *   ║\n║     * ║\n"); break;
        case 4: printf("║ *   * ║\n║       ║\n║ *   * ║\n"); break;
        case 5: printf("║ *   * ║\n║   *   ║\n║ *   * ║\n"); break;
        case 6: printf("║ *   * ║\n║ *   * ║\n║ *   * ║\n"); break;
    }
    printf("╚═══════╝\n");
}

int highLowTavern(void)
{
    int currentCard = 1 + rand() % 13;
    int nextCard;
    char guess;
    int score = 0;

    printf("\nYou enter a smoky tavern. A man grins: \"Higher or Lower?\"\n\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("~~~~ Round %d ~~~~~\n", i);
        printf("Current card:\n");
        printCard(currentCard);

        printf("Higher (H) or Lower (L)? (Q to quit): ");
        scanf(" %c", &guess);

        if (guess == 'Q' || guess == 'q')
        {
            printf("\nYou leave the table early.\n");
            return 0;
        }

        nextCard = 1 + rand() % 13;
        printf("Next card:\n");
        printCard(nextCard);

        if ((guess == 'H' || guess == 'h') && nextCard > currentCard)
        {
            score++;
            printf("Correct! +1 point.\n");
        }
        else if ((guess == 'L' || guess == 'l') && nextCard < currentCard)
        {
            score++;
            printf("Correct! +1 point.\n");
        }
        else
        {
            printf("Wrong guess.\n");
        }

        currentCard = nextCard;
        printf("Current score: %d\n\n", score);
    }

    printf("===== Tavern Game Over =====\n");

    if (score >= 3)
    {
        printf("You leave the table a winner.\n");
        return 1;
    }
    else
    {
        printf("The house wins this time.\n");
        return 0;
    }
}

void printCard(int value)
{
    const char *cardNums[13] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };

    printf("  _____\n");
    printf(" |%2s   |\n", cardNums[value - 1]);
    printf(" |     |\n");
    printf(" |   %2s|\n", cardNums[value - 1]);
    printf(" |_____|\n");
}

int battleEncounter(void)
{
    int playerHP = 20;
    int enemyHP = 5 + rand() % 20;
    int dmgP, dmgE;
    char action;

    printf("\nA shadowy figure blocks your path!\n");

    while (playerHP > 0 && enemyHP > 0)
    {
        printf("Your HP: %d | Enemy HP: %d\n", playerHP, enemyHP);
        printf("Attack (A) or Retreat (R): ");
        scanf(" %c", &action);

        if (action == 'R' || action == 'r')
        {
            printf("\nYou retreat from battle.\n");
            return 0;
        }

        dmgP = 1 + rand() % 6;
        enemyHP -= dmgP;
        printf("You strike for %d damage!\n", dmgP);

        if (enemyHP <= 0)
        {
            break;
        }

        dmgE = 1 + rand() % 6;
        playerHP -= dmgE;
        printf("The enemy hits you for %d damage!\n", dmgE);
    }

    if (playerHP > 0)
    {
        printf("\nYou have defeated your foe!\n");
        return 1;
    }
    else
    {
        printf("\nYou fall in battle...\n");
        return 0;
    }
}

int riddleGateOne(void)
{
    int ans;

    printf("\nA stone statue speaks:\n");
    printf("\"I hold a value, small or grand,\nMutable or constant, at your command.\n");
    printf(" What am I?\"\n\n");

    printf("1) A function\n2) A variable\n3) A pointer\n");
    printf("Your answer: ");
    scanf("%d", &ans);

    if (ans == 2)
    {
        printf("\nCorrect! The statue hums with approval.\n");
        return 1;
    }
    else
    {
        printf("\nIncorrect. The statue's eyes dim in disappointment.\n");
        return 0;
    }
}

int riddleGateTwo(void)
{
    int ans;

    printf("\nThe iron door rumbles:\n");
    printf("\"I have cities but no houses...\n");
    printf(" I have mountains but no trees...\n");
    printf(" I have water but no fish...\n");
    printf(" What am I?\"\n\n");

    printf("1) A map\n2) A dream\n3) A desert\n");
    printf("Your answer: ");
    scanf("%d", &ans);

    if (ans == 1)
    {
        printf("\nCorrect! The door unlocks... then slowly closes again.\n");
        return 1;
    }
    else
    {
        printf("\nWrong. The door chuckles and remains shut.\n");
        return 0;
    }
}

void exitFunction(void)
{
    int code = 0;
    printf("\nEnter 99 to return: ");
    while (code != 99)
    {
        scanf("%d", &code);
        if (code != 99)
        {
            printf("Please enter 99 to return: ");
        }
    }
}
//END of CASE 35 Game Function

void cmeremikwu2(void)
{
    int choice = 0;
    int score = 0;
    int decisions = 0;
    int randomEvent = 0;
    int inventory[5] = {0,0,0,0,0};

    char *items[5] =
    {
        "phone charger",
        "bottle of water",
        "small flashlight",
        "spare naira bills",
        "pepper soup container"
    };

    printf("\nCM\n");
    printf("You enter Room 70: The Midnight Lagos Bus.\n");
    printf("A yellow danfo bus appears in front of you with the engine running.\n");
    printf("The conductor says, \"Five smart choices and you make it home.\"\n");

    while(decisions < 5)
    {
        printf("\nDecision %d of 5\n", decisions + 1);
        printf("1. Check your bag\n");
        printf("2. Talk to the conductor\n");
        printf("3. Look out the window\n");
        printf("Choose: ");
        scanf("%d", &choice);

        randomEvent = rand() % 3;

        if(choice == 1)
        {
            inventory[decisions] = 1;
            printf("You found your %s.\n", items[decisions]);
            score++;

            if(randomEvent == 0)
            {
                printf("Good timing. That item helps you stay calm.\n");
                score++;
            }
        }
        else if(choice == 2)
        {
            printf("You ask the conductor where the bus is going.\n");

            if(randomEvent == 0)
            {
                printf("He laughs and says, \"No worry, you dey safe.\"\n");
                score++;
            }
            else if(randomEvent == 1)
            {
                printf("He gives you a warning about the next stop.\n");
                score += 2;
            }
            else
            {
                printf("He ignores you and keeps shouting for passengers.\n");
                score--;
            }
        }
        else if(choice == 3)
        {
            printf("You look out the window and see the city lights moving strangely.\n");

            if(randomEvent == 0)
            {
                printf("You notice a shortcut sign before anyone else.\n");
                score += 2;
            }
            else
            {
                printf("The road looks unfamiliar, but you stay focused.\n");
                score++;
            }
        }
        else
        {
            printf("Invalid choice. You hesitate and lose time.\n");
            score--;
        }

        decisions++;
    }

    printf("\nFinal Score: %d\n", score);

    if(score >= 6)
    {
        printf("You made all the right moves and escaped Room 70 safely.\n");
        printf("The danfo drops you back at the main hallway.\n");
    }
    else if(score >= 3)
    {
        printf("You barely made it off the bus, but you survived Room 70.\n");
    }
    else
    {
        printf("You missed your stop and got lost in the midnight traffic.\n");
    }

    printf("Returning to the main room...\n\n");
}

void jbInit()
{
	int round;
    	int lives = 5;
    	int choice;
    	int safe;

    char *treasure[] =
    {
        "GOLD",
        "SILVER",
        "DIAMOND",
        "BRONZE",
        "WOOD"
    };

    puts("jbRoom17");
    puts("Choose a chest to escape");

    for(round = 1; round <= 5 && lives > 0; round++)
    {
        printf("\nRound %d of 5\n", round);

        puts("\n--TREASURE ROOM--");

        for(int i = 0; i < 5; i++)
        {
            printf("%d. %s\n", i + 1, treasure[i]);
        }

        safe = rand() % 5 + 1;

        printf("CHOOSE A CHEST: ");
        scanf("%d", &choice);

        if(choice == safe)
        {
            printf("CORRECT!! YOU WON TREASURE\n");
        }
        else
        {
            printf("WRONG! THE WALLS START CLOSING IN!\n");
            lives--;
            printf("Lives left: %d\n", lives);
        }
    }

    if(lives > 0)
    {
        printf("\nCONGRATS YOU ESCAPED!!\n");
    }
    else
    {
        printf("\nGAME OVER!!\n");
    }


		
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

//Room 4
void CAYfrog(void)
{
	int choice;
	int giveFly;

	printf("You walk into a dark room...\n");
	printf("As your eyes adjust, you see a huge glowing frog sitting in the corner.\n\n");
	printf("The frog stares deeply into your soul.\n");
	printf("The frog opens it's mouth and throws 3 items on the floor... Choose one!!! He croaks.\n\n");

	printf("1. A map\n");
	printf("2. A big dead juicy fly\n");
	printf("3. A survival knife\n\n");

	printf("Choose an item: ");
	scanf("%d", &choice);
	printf("\n");

	if (choice == 1)
	{
		printf("The frog starts glowing even harder.\n");
		printf("\"Wise Choice! Good luck on your journey!\"\n\n");
		printf("The frog flings his tongue out and gives you the loudest high five you have ever heard.\n");
		printf("The frog punches a hole through the wall with his tongue.\n");
		printf("You walk into the next room.\n\n");
	}

	else if (choice == 2)
	{
		printf("The frog stares at the big dead juicy fly.\n\n");
		printf("Do you give the frog the fly?\n");
		printf("1. Yes\n");
		printf("2. No\n\n");

		printf("Enter your choice: ");
		scanf("%d", &giveFly);

		printf("\n");

		if (giveFly == 1)
		{
			printf("\"THANK YOU! I will name my 547th child after you!\"\n\n");
			printf("The frog happily eats the fly.\n");
			printf("The frog punches a hole through the wall with his tongue.\n");
			printf("You continue into the next room.\n\n");
		}

		else
		{
			printf("The frog flings his tongue out and gives you a black eye. TWACKK!\n");
			printf("\"GET THWACKED YA LOSER!!\"\n\n");
			printf("The frog also punches a hole through the wall with his tongue.\n");
			printf("You stumble into the next room holding your face after that huge thwacking.\n\n");
		}
	}

	else if (choice == 3)
	{
		printf("\"Excellent choice! Make sure not to cut your fingers!\"\n\n");
		printf("The frog punches a hole through the wall with his tongue.\n");
		printf("You walk into the next room.\n\n");
	}

	else
	{
		printf("The frog looks disappointed in your ability to follow directions.\n\n");
	}

	return;
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
	srand(time(NULL));
        int points=0;
        int again;

       //if the user enter any number that is not 1 they will exit the game, if they enter 1 they can play again
       char *reptiles[4] ={"Gecko","Chameleon","Iguana","Turtle"};
       char *fruits[4] ={"Cherry","Raspberry","Strawberry","Chranberry"};
       char *states[4] ={"Alabama","Alaska","Arizona","Arkansas"};
       char *deserts[4] ={"Gelato","Tiramisu","Cheesecake","Macarons"};
       char *aquatic[4]={"Seal","Octopus","Dolphin","Whale"};
       printf("Welcome to word guessing game.\n");
       printf("With every word you get you right you earn points.\n");
            
        do   
        {
          int myguess = rand() % 4;
          int category;
          int userans;
          printf("First choose which caterogy.\n");
          printf("---------------------------------\n");
          printf("1. Reptile animals\n");
          printf("2. Red Fruits\n");
          printf("3. States that Start with letter A\n");
          printf("4. Popular Deserts\n");
          printf("5. Aquatic Animals\n");
          printf("Enter the number of the category you want: ");
          scanf("%d",&category);
            
         switch(category)
         {
            case 1:
            printf("\nWhat reptiple do you think my guess is?\n");
            printf("Here are the four options:\n");
            printf("\nGecko = 0, Chameleon = 1, Iguana = 2, Turtle = 3\n");
            printf("\nEnter the number based on the choice you want to make: ");
            scanf("%d", &userans);
            if(userans == myguess)
            { 
                printf("\nYou are correct!!!\n");
                points++;
            }
            else
            {
                printf("\nYou are incorrect.\n");
                printf("The correct option was option %d, %s.\n",myguess, reptiles[myguess]);
            }
            break;
             
            case 2:
            printf("\nWhat fruit do you think my guess is?\n");
            printf("Here are the four options:\n");
            printf("\nCherry = 0, Raspberry = 1, Strawberry = 2, Cranberry = 3\n");
            printf("\nEnter the number based on the choice you want to make: ");
            scanf("%d", &userans);
            if(userans == myguess){
                printf("\nYou are correct!!!\n");
                 points++;
            }
            else
            {
                printf("\nYou are incorrect.\n");
		printf("The correct option was option %d, %s.\n",myguess, fruits[myguess]);
            }
            break;
            case 3:
            printf("\nWhat state do you think my guess is?\n");
            printf("Here are the four options.\n");
            printf("Enter the number associated with the word of your choice: ");
            printf("\nAlabama = 0, Alaska = 1, Arizona = 2 Arkansas = 3\n");
            printf("\nEnter the number based on the choice you want to make: ");
            scanf("%d", &userans);
            if(userans == myguess)
            {
                printf("\nYou are correct!!!\n");
                 points++;
            }
            else
            {
                printf("\nYou are incorrect.\n");
                printf("The correct option was option %d, %s.\n",myguess, states[myguess]);
            }
            break;
            case 4:
            printf("\nWhat desert do you think my guess is?\n");
            printf("Here are the four options:\n");
	    printf("\nGelato = 0, Tiramisu = 1, Cheesecake = 2, Macaron = 3\n");
            printf("\nEnter the number based on the choice you want to make: ");
            scanf("%d", &userans);
            if(userans == myguess){
                printf("\nYou are correct!!!\n");
                 points++;
            }
            else
            {   
                printf("\nYou are incorrect.\n");
                printf("The correct option was option %d, %s.\n",myguess, deserts[myguess]);
            }
            break;
            case 5:
            printf("\nWhat aquatic anaimal do you think my guess is?\n");
            printf("Here are the four options:\n");
            printf("\nSeal = 0, Octopus = 1, Dolphin = 2, Whale = 3\n");
            printf("\nEnter the number based on the choice you want to make: ");
            scanf("%d", &userans);
            if(userans == myguess){
                printf("\nYou are correct!!!\n");
                 points++;
            }
	    else
            {
                printf("\nYou are incorrect.\n");
                printf("The correct option was option %d, %s.\n",myguess, aquatic[myguess]);
            }
            break;
            default:
                printf("Invalid choice.\n");

         }

        printf("\nEnter 1 to contine playing or any other number to exit game :  ");
        scanf("%d", &again);
        }while(again == 1);

        printf("\nTotal points = %d\n",points);
        printf("Thank you for playing.\n");
}//end of mtorres


void hOsuna(void)
{
        printf("\nHAO\n");
}

//function prototype
int getLuck(int luck[], int size);
void JCgame(void)
{
    printf("JC\n");


    int choice = 0;
    int health = 100;
    int size = 10;
    int luck[10] = {1,2,3,4,5,6,7,8,9,10};
    char *weapons[3] = {"Katana", "Box Cutter", "Arrow"};
    char *randomWeapon = weapons[rand() % 3];
	int giantFrog = 100;
	int attack = 0;

    printf("You went camping with your friends.\n");
    printf("Nighttime comes around. You and your friends go to bed.\n");
    printf("A loud crow scream awakens you.\n");
    printf("Your friends are gone...\n");

    // Choice 1
    printf("\nHealth: %d\n", health);
    printf("1. Go outside the tent\n");
    printf("0. Stay inside the tent\n");
    scanf("%d", &choice);

    while(choice != 0 && choice != 1)
    {
        printf("Invalid input. Enter 1 or 0: ");
        scanf("%d", &choice);
    }

    if(choice == 1)
    {
        printf("You step outside and hear movement nearby.\n");
    }
    else
    {
        printf("You stay inside, but something scratches the tent.\n");
        health -= 10;
    }

    // Choice 2
    printf("\nHealth: %d\n", health);
    printf("You find a %s on the ground.\n", randomWeapon);
    printf("1. Pick it up\n");
    printf("0. Leave it\n");
    scanf("%d", &choice);

    while(choice != 0 && choice != 1)
    {
        printf("Invalid input. Enter 1 or 0: ");
        scanf("%d", &choice);
    }

    if(choice == 1)
    {
        printf("You take the %s with you.\n", randomWeapon);
    }
    else
    {
        printf("You leave the weapon behind.\n");
    }

    // Choice 3
    printf("\nHealth: %d\n", health);
    printf("You see two paths in the woods.\n");
    printf("1. Take the dark trail\n");
    printf("0. Walk toward the lake\n");
    scanf("%d", &choice);

    while(choice != 0 && choice != 1)
    {
        printf("Invalid input. Enter 1 or 0: ");
        scanf("%d", &choice);
    }

    if(choice == 1)
    {
        printf("You walk down the dark trail.\n");

        if(getLuck(luck, size) <= 5)
        {
            printf("You trip over a root and lose 15 health.\n");
            health -= 15;
        }
        else
        {
            printf("You safely follow the trail.\n");
        }
    }
    else
    {
        printf("You walk toward the lake.\n");

        if(getLuck(luck, size) <= 4)
        {
            printf("A Giant Frog splashes and scares you. You lose 10 health.\n");
            health -= 10;
			printf("You must attack it with your %s!\n", randomWeapon);
			while(giantFrog>0)
			{
				printf("Giant Frog HP: %d\n", giantFrog);
				printf("Type 1 for a regular attack! Type 2 for a heavy attack!: ");
				scanf("%d", &attack);
				while(attack != 1&&attack!=2)
				{
					printf("Only type 1 for a regular attack or type 2 for a heavy attack: ");
					scanf("%d", &attack);
				}
				if(attack==1)
				{
					giantFrog -= 25;
				}
				else
				{
					giantFrog -= 50;
				}
				printf("Nice hit! Keep attacking!\n");
			}
			printf("Nice! You slayed the Giant Frog.\n");
        }
        else
        {
            printf("You find footprints near the lake.\n");
        }
    }

    // Choice 4
    printf("\nHealth: %d\n", health);
    printf("You find an old cabin.\n");
    printf("1. Go inside\n");
    printf("0. Keep walking\n");
    scanf("%d", &choice);

    while(choice != 0 && choice != 1)
    {
        printf("Invalid input. Enter 1 or 0: ");
        scanf("%d", &choice);
    }

    if(choice == 1)
    {
        printf("You enter the cabin.\n");

        if(getLuck(luck, size) <= 5)
        {
            printf("A creature attacks you inside! You lose 25 health.\n");
            health -= 25;
        }
        else
        {
            printf("You find a flashlight inside the cabin.\n");
        }
    }
    else
    {
        printf("You keep walking through the woods.\n");
        printf("The cold night makes you weaker. You lose 10 health.\n");
        health -= 10;
    }

    // Choice 5
    printf("\nHealth: %d\n", health);
    printf("You hear your friends yelling for help nearby.\n");
    printf("1. Run toward the voices\n");
    printf("0. Hide behind a tree\n");
    scanf("%d", &choice);

    while(choice != 0 && choice != 1)
    {
        printf("Invalid input. Enter 1 or 0: ");
        scanf("%d", &choice);
    }

    if(choice == 1)
    {
        if(health > 0)
        {
            printf("You run toward the voices and find your friends!\n");
            printf("You all escape the forest together. You win!\n");
        }
    }
    else
    {
        printf("You hide too long and the voices disappear.\n");
        printf("You are lost in the woods. Game over.\n");
    }

    if(health <= 0)
    {
        printf("\nYour health reached 0.\n");
        printf("You did not survive the forest.\n");
    }
}
//function definition
int getLuck(int luck[], int size)
{
    return luck[rand() % size];
}

void nnawshin()
{
    int choice;
    int score = 0;
    int steps = 0;
    int randomEvent;

    printf("\nN.N\n");
    printf("Welcome to Room 18: The Lost Library\n");
    printf("You are trapped inside a mysterious library.\n");
    printf("Make 5 decisions to escape.\n");

    while(steps < 5)
    {
        printf("\nDecision %d\n", steps + 1);

        if(steps == 0)
        {
            printf("1. Walk to the glowing bookshelf\n");
            printf("2. Walk to the dark hallway\n");
            scanf("%d", &choice);

            if(choice == 1)
            {
                printf("You found a lantern.\n");
                score++;
            }
            else
            {
                printf("The hallway feels cold and empty.\n");
            }
        }

        else if(steps == 1)
        {
            printf("1. Open an old book\n");
            printf("2. Ignore the book\n");
            scanf("%d", &choice);

            randomEvent = rand() % 2;

            if(choice == 1)
            {
                if(randomEvent == 0)
                {
                    printf("You found a secret clue inside the book.\n");
                    score++;
                }
                else
                {
                    printf("Dust flies into your face.\n");
                }
            }
            else
            {
                printf("You continue walking carefully.\n");
            }
        }

        else if(steps == 2)
        {
            printf("1. Pick up a silver key\n");
            printf("2. Pick up a map\n");
            scanf("%d", &choice);

            if(choice == 1 || choice == 2)
            {
                printf("You keep the item in your bag.\n");
                score++;
            }
        }

        else if(steps == 3)
        {
            printf("1. Climb the moving shelf\n");
            printf("2. Run under the shelf\n");
            scanf("%d", &choice);

            if(choice == 1)
            {
                printf("You safely climb over the shelf.\n");
                score++;
            }
            else
            {
                printf("The shelf almost crushes you.\n");
            }
        }

        else if(steps == 4)
        {
            printf("1. Unlock the exit door\n");
            printf("2. Kick the door open\n");
            scanf("%d", &choice);

            if(choice == 1)
            {
                printf("The key unlocks the door.\n");
                score++;
            }
            else
            {
                printf("The door slowly opens.\n");
            }
        }

        steps++;
    }

    printf("\nFinal Score: %d\n", score);

    if(score >= 3)
    {
        printf("You escaped the Lost Library successfully!\n");
    }
    else
    {
        printf("You escaped, but the library stole your memories.\n");
    }

    printf("Returning to the main menu...\n");
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

void room36AngelM(void)
{
	int choice;
	int done = 0;
	int alive = 1;
	int hidFirst = 0;
	int readNote = 0;
	int hideCount = 0;
	int leaveCount = 0;
	int sanity = 4;
	int timeLeft = 5;
	int correctDoor = rand() % 3 + 1;

	char *warnings[6] = {
		"Stillness hides you.",
		"Run before it sees you.",
		"Voices lie.",
		"The note wants to be read twice.",
		"Breath without lungs is not life.",
		"The quiet door is hungry."
	};

	puts("You enter Room 36.");
	puts("The door locks behind you, and the lights die.");
	puts("Something begins breathing from inside the walls.");
	puts("A message is scratched into the floor:");
	puts("\"Survival requires patience, but patience has a limit.\"");

	while(done == 0 && alive == 1)
	{
		if(timeLeft <= 0)
		{
			puts("\nThe room goes completely silent.");
			puts("You waited too long.");
			puts("The creature finally learns the sound of your breathing.");
			puts("It crawls from the wall and devours you in the dark.");
			puts("You did not survive Room 36.");

			if(retryRoom36() == 1)
			{
				done = 0;
				alive = 1;
				hidFirst = 0;
				readNote = 0;
				hideCount = 0;
				leaveCount = 0;
				sanity = 4;
				timeLeft = 5;
				correctDoor = rand() % 3 + 1;
				puts("\nThe room resets around you...");
				continue;
			}
			else
			{
				break;
			}
		}

		if(sanity <= 0)
		{
			puts("\nYour mind breaks.");
			puts("The warnings spin around you.");
			puts("The doors melt into mouths.");
			puts("You choose nothing, so the room chooses for you.");
			puts("You are devoured by the room itself.");
			puts("You did not survive Room 36.");

			if(retryRoom36() == 1)
			{
				done = 0;
				alive = 1;
				hidFirst = 0;
				readNote = 0;
				hideCount = 0;
				leaveCount = 0;
				sanity = 4;
				timeLeft = 5;
				correctDoor = rand() % 3 + 1;
				puts("\nThe room resets around you...");
				continue;
			}
			else
			{
				break;
			}
		}

		printf("\nSanity: %d | Time left: %d\n", sanity, timeLeft);
		puts("What do you do?");
		puts("1. Read the bloody note on the floor");
		puts("2. Follow the crying voice in the corner");
		puts("3. Open one of the three black doors");
		puts("4. Hide under the broken table");
		puts("5. Try to leave the room");
		puts("6. Sit down and cry");

		scanf("%d", &choice);
		timeLeft--;

		if(choice == 1)
		{
			if(hidFirst == 0)
			{
				puts("You kneel down to read the bloody note.");
				puts("The floorboards creak beneath you.");
				puts("Something behind the wall whispers, \"Too eager.\"");
				puts("A hand breaks through the floor and drags you under.");
				puts("You did not survive Room 36.");

				if(retryRoom36() == 1)
				{
					done = 0;
					alive = 1;
					hidFirst = 0;
					readNote = 0;
					hideCount = 0;
					leaveCount = 0;
					sanity = 4;
					timeLeft = 5;
					correctDoor = rand() % 3 + 1;
					puts("\nThe room resets around you...");
					continue;
				}
				else
				{
					alive = 0;
					done = 1;
				}
			}
			else if(readNote == 1)
			{
				puts("You bend down to read the note again.");
				puts("The letters rearrange themselves.");
				puts("\"Greed for answers is still greed.\"");
				puts("The blood on the paper crawls up your hands like veins.");
				puts("The note has already learned your name.");
				puts("You did not survive Room 36.");

				if(retryRoom36() == 1)
				{
					done = 0;
					alive = 1;
					hidFirst = 0;
					readNote = 0;
					hideCount = 0;
					leaveCount = 0;
					sanity = 4;
					timeLeft = 5;
					correctDoor = rand() % 3 + 1;
					puts("\nThe room resets around you...");
					continue;
				}
				else
				{
					alive = 0;
					done = 1;
				}
			}
			else
			{
				int i;

				puts("Because you hid first, the creature lost track of you.");
				puts("All the warnings appear at once:");

				for(i = 0; i < 6; i++)
				{
					printf("%d. \"%s\"\n", i + 1, warnings[i]);
				}

				puts("Some warnings help you. Some warnings want you dead.");
				puts("Your sanity drops from trying to understand them.");
				sanity--;

				puts("\nThe bloody note reads:");

				if(correctDoor == 1)
				{
					puts("\"Three doors wait in blackened stone.\"");
					puts("\"The first screams because it is still afraid.\"");
					puts("\"The second breathes because something wears it.\"");
					puts("\"The third is silent because it already ate.\"");
					puts("\"Choose the door that still fears death.\"");
				}
				else if(correctDoor == 2)
				{
					puts("\"Three doors wait in blackened stone.\"");
					puts("\"The first screams, but tells no truth.\"");
					puts("\"The second breathes, but has no lungs.\"");
					puts("\"The third is silent because it already ate.\"");
					puts("\"Choose the door that sounds alive, but is not.\"");
				}
				else
				{
					puts("\"Three doors wait in blackened stone.\"");
					puts("\"The first screams to make you panic.\"");
					puts("\"The second breathes to make you trust it.\"");
					puts("\"The third is silent, not empty.\"");
					puts("\"Choose the door that does not beg to be chosen.\"");
				}

				readNote = 1;
			}
		}
		else if(choice == 2)
		{
			puts("You follow the crying voice.");
			puts("It stops crying and starts laughing.");
			puts("The thing in the corner was never human.");
			puts("You did not survive Room 36.");

			if(retryRoom36() == 1)
			{
				done = 0;
				alive = 1;
				hidFirst = 0;
				readNote = 0;
				hideCount = 0;
				leaveCount = 0;
				sanity = 4;
				timeLeft = 5;
				correctDoor = rand() % 3 + 1;
				puts("\nThe room resets around you...");
				continue;
			}
			else
			{
				alive = 0;
				done = 1;
			}
		}
		else if(choice == 3)
		{
			int doorChoice;

			if(readNote == 0)
			{
				puts("You step toward the black doors without reading the note.");
				puts("The handles twist by themselves.");
				puts("All three doors open at once.");
				puts("You hear claws sprinting from every direction.");
				puts("You did not survive Room 36.");

				if(retryRoom36() == 1)
				{
					done = 0;
					alive = 1;
					hidFirst = 0;
					readNote = 0;
					hideCount = 0;
					leaveCount = 0;
					sanity = 4;
					timeLeft = 5;
					correctDoor = rand() % 3 + 1;
					puts("\nThe room resets around you...");
					continue;
				}
				else
				{
					alive = 0;
					done = 1;
				}
			}
			else
			{
				puts("Three black doors stand in front of you.");
				puts("Choose door 1, 2, or 3:");
				scanf("%d", &doorChoice);

				if(doorChoice == correctDoor)
				{
					printf("You open door %d.\n", doorChoice);
					puts("The hallway beyond it is cold, narrow, and real.");
					puts("Behind you, the room screams because it lost.");
					puts("You survived Room 36 and return to the hallway.");
					done = 1;
				}
				else if(doorChoice == 1)
				{
					puts("You open the first door.");
					puts("The screaming stops instantly.");
					puts("A mouth opens where the hallway should be.");
					puts("It was not screaming in fear. It was calling you closer.");
					puts("You did not survive Room 36.");

					if(retryRoom36() == 1)
					{
						done = 0;
						alive = 1;
						hidFirst = 0;
						readNote = 0;
						hideCount = 0;
						leaveCount = 0;
						sanity = 4;
						timeLeft = 5;
						correctDoor = rand() % 3 + 1;
						puts("\nThe room resets around you...");
						continue;
					}
					else
					{
						alive = 0;
						done = 1;
					}
				}
				else if(doorChoice == 2)
				{
					puts("You open the second door.");
					puts("Warm breath rolls across your face.");
					puts("The door was not alive.");
					puts("Something inside it was.");
					puts("You did not survive Room 36.");

					if(retryRoom36() == 1)
					{
						done = 0;
						alive = 1;
						hidFirst = 0;
						readNote = 0;
						hideCount = 0;
						leaveCount = 0;
						sanity = 4;
						timeLeft = 5;
						correctDoor = rand() % 3 + 1;
						puts("\nThe room resets around you...");
						continue;
					}
					else
					{
						alive = 0;
						done = 1;
					}
				}
				else if(doorChoice == 3)
				{
					puts("You open the third door.");
					puts("There is no scream. No hand. No warning.");
					puts("Only bones stacked neatly in the dark.");
					puts("The silence was not empty.");
					puts("It was chewing.");
					puts("You did not survive Room 36.");

					if(retryRoom36() == 1)
					{
						done = 0;
						alive = 1;
						hidFirst = 0;
						readNote = 0;
						hideCount = 0;
						leaveCount = 0;
						sanity = 4;
						timeLeft = 5;
						correctDoor = rand() % 3 + 1;
						puts("\nThe room resets around you...");
						continue;
					}
					else
					{
						alive = 0;
						done = 1;
					}
				}
				else
				{
					puts("That is not one of the doors.");
					puts("The room punishes hesitation.");
					sanity--;
				}
			}
		}
		else if(choice == 4)
		{
			hideCount++;

			if(hideCount == 1)
			{
				puts("You crawl under the broken table and hold your breath.");
				puts("Something walks around the room, dragging metal across the floor.");
				puts("It stops inches away from you, then moves toward the far wall.");
				puts("It leaves behind another warning scratched into the wood:");
				puts("\"Now read.\"");
				hidFirst = 1;
			}
			else
			{
				puts("You hide under the table again.");
				puts("This time, the room does not make a sound.");
				puts("A pale face slowly appears beneath the table beside yours.");
				puts("\"I checked here already,\" it whispers.");
				puts("You did not survive Room 36.");

				if(retryRoom36() == 1)
				{
					done = 0;
					alive = 1;
					hidFirst = 0;
					readNote = 0;
					hideCount = 0;
					leaveCount = 0;
					sanity = 4;
					timeLeft = 5;
					correctDoor = rand() % 3 + 1;
					puts("\nThe room resets around you...");
					continue;
				}
				else
				{
					alive = 0;
					done = 1;
				}
			}
		}
		else if(choice == 5)
		{
			leaveCount++;

			if(leaveCount == 1)
			{
				puts("You pull on the locked door.");
				puts("It does not open.");
				puts("Behind you, one of the black doors knocks back.");
				puts("The room whispers: \"Do not ask twice.\"");
				sanity--;
			}
			else
			{
				puts("You try to leave again.");
				puts("The locked door stays shut.");
				puts("One of the black doors bursts open behind you.");
				puts("A starving thing crawls out and devours you before you can scream.");
				puts("You did not survive Room 36.");

				if(retryRoom36() == 1)
				{
					done = 0;
					alive = 1;
					hidFirst = 0;
					readNote = 0;
					hideCount = 0;
					leaveCount = 0;
					sanity = 4;
					timeLeft = 5;
					correctDoor = rand() % 3 + 1;
					puts("\nThe room resets around you...");
					continue;
				}
				else
				{
					alive = 0;
					done = 1;
				}
			}
		}
		else if(choice == 6)
		{
			puts("You collapse to the floor and begin to cry.");

			if(sanity <= 1)
			{
				puts("You cannot stop.");
				puts("Your crying echoes through the room.");
				puts("Something answers.");
				puts("It finds you by your voice.");
				puts("You did not survive Room 36.");

				if(retryRoom36() == 1)
				{
					done = 0;
					alive = 1;
					hidFirst = 0;
					readNote = 0;
					hideCount = 0;
					leaveCount = 0;
					sanity = 4;
					timeLeft = 5;
					correctDoor = rand() % 3 + 1;
					puts("\nThe room resets around you...");
					continue;
				}
				else
				{
					alive = 0;
					done = 1;
				}
			}
			else
			{
				puts("Your breathing becomes louder.");
				puts("The room listens.");
				puts("The walls whisper:");
				puts("\"Time is not waiting for you.\"");
				puts("\"Neither am I.\"");

				sanity -= 2;
				timeLeft -= 1;

				if(sanity < 0)
				{
					sanity = 0;
				}

				if(timeLeft < 0)
				{
					timeLeft = 0;
				}

				puts("Your sanity drops. Your time slips away.");
			}
		}
		else
		{
			puts("Invalid choice.");
			puts("The walls move closer.");
			sanity--;
		}
	}

	puts("Room 36 is finished.");
}

int retryRoom36(void)
{
	int retry;

	puts("\nYou have died in Room 36.");
	puts("1. Try again");
	puts("2. Return to hallway");

	scanf("%d", &retry);

	while(retry != 1 && retry != 2)
	{
		puts("Invalid choice. Enter 1 or 2:");
		scanf("%d", &retry);
	}

	return retry;
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


void lexR(void)
{
    printf("AR\n");
}

void FishingEvent(void)
{
    char events[4][80] =
    {
        "The hook sets and grabs your lip!",
        "The current is on your side and pushes you sideways.",
        "The fisherman starts reeling faster!",
        "The hook loosens for a split second."
    };

    int r;

    r = rand() % 4;

    printf("%s\n", events[r]);
}

void FishNightmare(void)
{
    int choice;
    int turns = 0;
    bool escaped = false;

    printf("\n=== Fish Nightmare ===\n");
    printf("You are a fish minding your own business when you see a little worm wiggling around.\n");
    printf("You decide you could go for a little snack.\n");
    printf("It is not a worm. THEY TRICKED YOU! It is a hook!\n");

    while (turns < 5 && escaped == false)
    {
        printf("\nChoice %d of 5\n", turns + 1);
        printf("1. Fight the hook\n");
        printf("2. Swim away\n");
        printf("3. Try to get unhooked by shaking your head\n");
        printf("4. Stay still\n");
        printf("5. PANIC\n");
        printf("Choose: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            {
                printf("You fight against the hook as hard as you can.\n");
                FishingEvent();

                if (rand() % 2 == 0)
                {
                    printf("You break free and swim away!\n");
                    escaped = true;
                }
                else
                {
                    printf("You are still stuck on the hook.\n");
                }

                break;
            }

            case 2:
            {
                printf("You swim deeper but the hook is stuck and the line follows you.\n");
                break;
            }

            case 3:
            {
                printf("You shake your head side to side and up and down.\n");
                FishingEvent();
                break;
            }

            case 4:
            {
                printf("You stay still and hope they think they missed you.\n");
                break;
            }

            case 5:
            {
                printf("You dash around blowing bubbles everywhere, scaring all the other fish.\n");
                break;
            }

            default:
            {
                printf("Invalid choice.\n");
            }
        }

        turns++;
    }

    if (escaped == true)
    {
        printf("\nYou survived Fish Nightmare!\n");
    }
    else
    {
        printf("\nYou get caught, but as they pull you up you give it one last try.\n");
        printf("You wiggle, bounce, and twirl... SPLASH! You escape!\n");
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



void guessNum(void)
{
	int guess = 0;
	int answer = (rand() %10) + 1;
	printf("\nGuess the number between 1 and 10: \n");
	scanf("%d", &guess);

	while (guess != answer)
	{
                if (guess >= 11 || guess <= 0)
                {
			printf("You input a number that is out of range (1-10). Re-enter a valid number: \n");
                        scanf("%d", &guess);
                }
		else if (guess != answer && guess < 11 && guess > 0)
		{
			if (guess < answer)
			{
				printf("WRONG. Too low\n");
			}
			else if (guess > answer)
			{
				printf("WRONG. Too high\n");
			}
			scanf("%d", &guess);
		}
	}
	if (guess == answer)
	{
		printf("\nCorrect...It seemse you've bested me.!\nOnto the next trial\n");

	}
}

void jpbFun(void)
{
	puts("JPBroom53");
}



void room_33eizaguirre(void)
{
	int choice;
	int courage = 100;
	int doneso = 0;
	int howl[3] ={0, 0, 0};

	printf("=================================\n");	
	printf(" HOWL'S MOVING CASTLE QUEST!!!\n");
	printf("=================================\n\n");

	printf("                []\n");
	printf("             .:[]:_\n");
	printf("           .: :[]: :-.\n");
	printf("         .: : :[]: : : :-.\n");
	printf("     _..: : : :[]: : : : :--._\n");
	printf("    /__________________________\\\\\n");
	printf("     ||  HOWL'S CASTLE   ||\n");
	printf("     ||__________________||\n");
	printf("\n You wake up the Foggy Village.");
	printf("A giant moving castle is walking across the hill.");
	printf("What will the wind wisper.");


	while(doneso == 0)
	{
		int choice;
		printf("Courage: %d\n",courage);
		printf("\n Choose your path: ");

		printf("1. Enter the ENCHANTED MARKET\n");
		printf("2. Explore the WHISPERING FOREST\n");
		printf("3. Eat HEALING BREAD\n");
		printf("4. Check Inventory\n");
		printf("5. Approach THE MOVING CASTLE\n");
		printf("6. QUIT ADVENTURE\n");

		printf("\n Enter your choice: ");
		scanf("%d",&choice);

		if(choice == 1)
		{
			int market = rand() %3;
			printf("\n A magical lanterns glows around you........  \n");

			if(market == 0)
			{
				printf("A misterious wizard gives you a MAGICAL RING!!!!! \n");
				howl[0] = 1;
				printf("\n      .--------.\n");
				printf("    .'  O    O  '.\n");
				printf("   /              \\\n");
				printf("  |   MAGIC RING   |\n");
				printf("   \\\\            /\n");
				printf("    '.__________.'\n");
			}
			else if(market == 1)
			{
				printf("You buy enchanted  HEALING HERBS\n");
				howl[1]++;

				printf("\n       ______\n");
				printf("     /      \\\n");
				printf("    / BREAD  \\\n");
				printf("   /__________\\\n");
			}

			else
			{
				printf("The WITCH OF THE WASTE is scare of you!\n");
				courage = 15;

				printf("\n      /\\\n");
				printf("     /  \\\n");
				printf("    | () |\n");
				printf("    |____|\n");
				printf("   /|/\\|\\\\\n");
			}
		}
		else if(choice == 2)
		{
			int forest = rand() %3;

			printf("\n        &&& &&  & &&\n");
			printf("    && &\\|& ()|/ @, &&\n");
			printf("    &\\/(/&/&||/& /_/)_&/_&\n");
			printf(" &() &\\/&|()|/&\\ '%% \" & ()\n");
			printf("&_\\_&&_\\ |& |&&/&__%%_/_& &&\n");

			if(forest == 0)
			{
				printf("The fire demon is leaving behiing a FIRE CRYSTAL!!! \n");
				howl[2] = 1;

				printf("\n         /\\\n");
				printf("        /  \\\n");
				printf("       / /\\ \\\n");
				printf("      /_/  \\_\\\n");
			}
			else if(forest == 1)
			{
				printf("The Shadow spirits chase you through the forest!!!\n");
				courage = 20;

				printf("\n     .-.\n");
				printf("    (o o) boo!\n");
				printf("    | O \\\n");
				printf("     \\\\   \\\n");
				printf("      '~~~'\n");
			}
			else
			{
				printf("You just discover a PEACEFUL hidden lake!!! \n");
				courage +=10;

				printf("\n   ~ ~ ~ ~ ~ ~ ~\n");
				printf(" ~     LAKE     ~\n");
				printf("   ~ ~ ~ ~ ~ ~ ~\n");
			}
		}
		else if(choice == 3)
		{
			if(howl[1] > 0)
			{
				printf("\nYou ate the healing bread!!!\n ");
				printf("MAGIC restores your courage!!\n");
				courage += 25;
				howl[1]--;


				printf("\n         (  .      )\n");
				printf("     )           (              )\n");
				printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
				printf("      CALCIFER THE FIRE DEMON\n");
			}
			else 
			{
				printf("\n You have no healing bread!!!\n");
			}
		}
		else if(choice ==4)
		{
			printf("\n============= HOWL'S  =============\n");
			if(howl[0] == 1)
				printf("Magic Ring: YES\n");
			else
				printf("Magic Ring: NO\n");
				printf("Healing Bread: %d\n", howl[1]);

				if(howl[2] == 1)
					printf("Fire Crystal: YES\n");
				else
					printf("Fire Crystal: NO");
		}
		else if(choice == 5)
		{
			printf("\nYou have got near THE MOVING CASTLE...\n");
			 if(howl[0] == 1 && howl[2] == 1)
			 {
				 int final = rand()%2;

				printf("=========================================\n");
				printf("      INSIDE HOWL'S MOVING CASTLE\n");
				printf("=========================================\n");

				if(final == 0)
				{
					printf("Howl shows up in a bunch of FEATHERS!\n");
					printf("You RESTORE the clastle's magic .\n");

					printf(" * .''. * .''. *\n");
					printf(" * * :_\\/_: * * :_\\/_: * \n");
					printf(" * * : /\\ : * * : /\\ : \n");
					printf(" * * '..' * * '..' * \n");
					printf(" * * \n");

					printf(" * * * * * \n");
					printf(" BOOM! POW! \n");
					printf(" * * * * * \n");

					printf(" .''. * .''. * \n");
					printf(" :_\\/_: * :_\\/_: \n");
					printf(" : /\\ : : /\\ : * \n");
					printf(" '..' * '..' \n");

					printf("***************");
					printf("\nYOU WIN!!!\n");
					printf("***************");
				}
				else
				{
					printf("The WITCH OF THE WASTE curses the castle!!!\n");

					printf("  .-''''-.\n");
					printf(" /  .--.  \\\n");
					printf("|  /    \\  |\n");
					printf("| |  ; ; | |\n");
					printf("| |  ____| |\n");
					printf("|  \\____/  |\n");
					printf(" \\        /\n");
					printf("  '-.__.-'\n");

					printf("***************");
                                        printf("\nGAME OVER!!!\n");
                                        printf("***************");
				}
				doneso = 1;
			 }
			 else
			 {
				 printf("The castle door remains sealed\n");
				 printf("You need the MAGIC RING and FIRE CRYSTAL\n");
			 }
		}
		else if(choice == 6)
		{
			printf("\nThe castle disappears into the clouds...\n");
			printf("Your adventure ends HERE!!!\n");

			doneso = 1;
		}
		else
		{
			printf("\nThat path does not exist.\n");
		}
		if(courage <= 0)
		{
			printf("\nDARK MAGIC consumes your courage...\n");
			printf("GAME OVER!!!\n");
			
			doneso = 1;	
		}
	}
}

void room31TwentyOneGame(void)
{
	printf("\nThe goal of the game is to get a hand closest to 21 without going over(bust) or else you'll lose.\n");
	printf("Youll start off with $5000 and each time you lose or bust youll lose $1000, each time you win you earn $2500 each time you tie you lose $500;\n");
	printf("You are unable to leave this room unless you lose all your money or if you have $17500.\n");
	printf("Cards 2-10 keep their face value, Queens, Kings, and Jokers are worth 10, Ace is worth 1 or 11 depending on your choice.\n");
	printf("We both start with 2 cards, yours are face up while I hace one face up and one face down.\n");
	printf("'Hit' means you take another card\n");
	printf("'Stand' means you keep your total\n");

	char *ranks[] = {"2","3","4","5","6","7","8","9","10","Jack","Queen","King","Ace"};
	char *suits[] = {"Hearts", "Diamonds", "Clubs","Spades"};

	char standardDeckOfCards[52][30];

	int index =0;
	int money = 5000;
	int game = 1;
	for(int i = 0; i < 4;i++)
	{
		for(int r = 0; r < 13; r++)
		{
			sprintf(standardDeckOfCards[index],"%s of %s", ranks[r], suits[i]);
			index++;
		}
	}

	char continueGame[10] = "yes";
	srand(time(NULL));
	int userHitOrStand;
	while(money > 0 && money < 17500)
	{
		int cardUsed[52] = {0};
		int userTotal = 0;
		int dealerTotal =0;
		int userCard1 = room31DrawCard(cardUsed);
		int userCard2 = room31DrawCard(cardUsed);
		int dealerCard1 = room31DrawCard(cardUsed);
	        int dealerCard2 = room31DrawCard(cardUsed);

		userTotal += room31GetCardValue(userCard1, &userTotal);
		userTotal += room31GetCardValue(userCard2, &userTotal);
		dealerTotal = room31GetCardValue(dealerCard1 , &dealerTotal);
		dealerTotal = room31GetCardValue(dealerCard2 ,  &dealerTotal);
		printf("\n---------- Game: %d ----------\n",game);
		printf("\nYour first card: %s\n", standardDeckOfCards[userCard1]);
		printf("Your second card: %s\n", standardDeckOfCards[userCard2]);
		printf("Your total = %d\n",userTotal);
		printf("The dealers first card: %s\n", standardDeckOfCards[dealerCard1]);
		printf("The dealers second card is hidden.\n");


		room31PlayerTurn(cardUsed, standardDeckOfCards, &userTotal);
		if(userTotal <= 21)
		{
			room31DealerTurn(cardUsed, standardDeckOfCards, &dealerTotal, dealerCard1, dealerCard2);
		}

		if(userTotal>21)
		{
			printf("You busted!! You LOSE!!!\n");
                        money -= 1000;
                        printf("Your total money: %d\n",money);

		}
		else if(dealerTotal> 21)
		{
			printf("Your Win!! The dealer busted.\n");
   			money += 2500;
			printf("Your total money: %d\n",money);
		}
		else if(userTotal> dealerTotal)
		{
			printf("You Win!! You had a higher total than the dealer.");
                        money += 2500;
                        printf("Your total money: %d\n",money);

		}
		else if(userTotal < dealerTotal)
		{
			printf("You Lose!! The dealer had a higher total.\n");
                        money -= 1000;
                        printf("Your total money: %d\n",money);
		}
		else
		{
			printf("Your and the dealer TIED!!\n");
			money-=500;
			printf("Your total money: %d\n",money);

		}
		if(money<=0)
		{
			printf("You're out of money! You left the room.\n");
			break;
		}
		else if(money>= 17500)
		{
			printf("Congratulations! You reached $17500 and won the game! You left the room.\n");
			break;
		}
		game++;
	}
}

int room31DrawCard(int used[])
{
	int card;
	do
	{
		card = rand() % 52;
	}
	while(used[card] == 1);
	used[card] = 1;
	return card;
}

int room31HitOrStand()
{
	char input[10];

	while(1)
	{
		printf("Would you like to hit or stand?");
		scanf("%9s",input);

		for(int i = 0; input[i]; i++)
		{
			input[i] = tolower(input[i]);
		}
		if(strcmp(input,"hit") == 0)
		{
		        return 1;
		}
		else if(strcmp(input,"stand") == 0)
		{
		       return 0;
		}
		printf("Invalid input, Please type 'hit' or 'stand'.\n");
	}
}

int room31GetCardValue(int cardIndex, int *currentTotal)
{
	int rank = cardIndex % 13;

	if(rank>= 0 && rank<= 8)
	{
		return rank+2;
	}

	if(rank >= 9 && rank <= 11)
	{
		return 10;
	}
	if(rank == 12)
	{
		if(*currentTotal + 11 > 21)
		{
			return 1;
		}
		else
		{
			return 11;
		}
	}
	return 0;
}
void room31PlayerTurn(int used[], char deck[][30], int *playerTotal)
{
	while(1)
	{
		int choice = room31HitOrStand();

		if(choice == 1)
		{
			int card = room31DrawCard(used);
			printf("You drew: %s\n", deck[card]);
			*playerTotal += room31GetCardValue(card,playerTotal);
			printf("Your total: %d\n",*playerTotal);

			if(*playerTotal > 21)
			{
				break;
			}
		}
		else
		{
			printf("You stand at %d\n", *playerTotal);
			break;
		}
	}
}

void room31DealerTurn(int used[], char deck[][30], int *dealerTotal,int dealerCard1, int dealerCard2)
{
	printf("\n---- Dealers  turn ----\n");
	printf("Dealer hidden card is: %s\n", deck[dealerCard2]);
	*dealerTotal = room31GetCardValue(dealerCard1, dealerTotal) + room31GetCardValue(dealerCard2, dealerTotal);
        printf("Dealer total: %d\n", *dealerTotal);

	while(*dealerTotal < 17)
	{
		int card = room31DrawCard(used);
		printf("Dealer draws: %s\n", deck[card]);
		*dealerTotal += room31GetCardValue(card, dealerTotal);
		printf("Dealer total: %d\n", *dealerTotal);
	}
	if(*dealerTotal > 21)
	{
		printf("Dealer Busts!!!\n");
	}
}


void josephhernandez(void)
{
	int currentmoney = 500;
	int gamechoice;
	int lever;
	int blackjack;
	int roulette;
	int craps;
	int chance[2] = {1 , 2}; //Represents a fifty percent chance
	bool exit = false;
	printf("You enter room 67 and see... A Casino?? Your goal is to win it big, and leave the Casino positive. Can you accomplish this?\n\n");
	while (!exit)
	{
		printf("You are in the main lobby of the Casino, and see 4 different games you can play. Choose the game you would like to play, or exit:\n");
		printf("Starting Money: $500\n");
		printf("Current Money: $%i\n\n", currentmoney);
		printf("1. Slot Machines\n");
		printf("2. BlackJack\n");
		printf("3. Roulette\n");
		printf("4. Craps Table\n");
		printf("5. Exit Casino\n\n");
		printf("What is your choice?: ");
		scanf("%i", &gamechoice);
		while (gamechoice > 5 || gamechoice < 1)
		{
			printf("Invalid Choice, please input a number between 1 and 5:");
			scanf("%i", &gamechoice);
		}
		switch(gamechoice)
		{
			case 1:
				printf("You step up to the Slot Machines. There is a red, green, and blue lever to pull to play. Which one do you pull?\n\n");
				printf("1. Red Lever\n");
				printf("2. Green Lever\n");
				printf("3. Blue Lever\n\n");
				printf("What is your choice?: ");
				scanf("%i", &lever);
				printf("\n");
				switch(lever)
				{
					case 1:
						if (chance[rand() % 2] % 2 == 0)
						{
							printf("Congrats! You won some money, but the other levers might offer more\n");
							printf("Money earned: $50\n\n");
							currentmoney = currentmoney + 50;
							printf("New Total: %i\n", currentmoney);
						}
						else
						{
							printf("Unfortunate! You lost this one.\n");
							printf("Money lost: $50\n\n");
							currentmoney = currentmoney - 50;
							printf("New Total: %i\n", currentmoney);
						}
						break;
					case 2:
						if (chance[rand() % 2] % 2 == 0)
						{
							printf("Congrats! You won some money, this lever feels like a good middle ground between winning and losing\n");
							printf("Money earned: $75\n\n");
							currentmoney = currentmoney + 75;
							printf("New Total: %i\n", currentmoney);
						}
						else
						{
							printf("Unfortunate! You lost this one.\n");
							printf("Money lost: $75\n\n");
							currentmoney = currentmoney - 75;
							printf("New Total: %i\n", currentmoney);
						}
						break;
					case 3:
						if (chance[rand() % 2] % 2 == 0)
						{
							printf("Congrats! You won some money, and this lever feels like it offers the highest reward for your risk\n");
							printf("Money earned: $100\n\n");
							currentmoney = currentmoney + 100;
							printf("New Total: %i\n", currentmoney);
						}
						else
						{
							printf("Unfortunate! You lost this one.\n");
							printf("Money lost: $100\n\n");
							currentmoney = currentmoney - 100;
							printf("New Total: %i\n", currentmoney);
						}
						break;
				}
				break;
			case 2:
				printf("You approach the BlackJack table. The dealer reveals an ace, while you have a 16 (10 + 6). What do you do?\n\n");
				printf("1. Hit\n");
				printf("2. Stay\n\n");
				printf("What is your choice?: ");
				scanf("%i", &blackjack);
				printf("\n");
				switch(blackjack)
				{
					case 1:
						if (chance[rand() % 2] % 2 == 0)
						{
							printf("Congrats! You hit a 5 and win with a 21!\n");
							printf("Money earned: $75\n\n");
							currentmoney = currentmoney + 75;
							printf("New Total: %i\n", currentmoney);
						}
						else
						{
							printf("Unfortunate! You hit a face card and bust\n");
							printf("Money lost: $75\n\n");
							currentmoney = currentmoney - 75;
							printf("New Total: %i\n", currentmoney);
						}
						break;
					case 2:
						if (chance[rand() % 2] % 2 == 0)
						{
							printf("Congrats! The dealer draws 4 cards, ending with a face card and busting\n");
							printf("Money earned: $75\n\n");
							currentmoney = currentmoney + 75;
							printf("New Total: %i\n", currentmoney);
						}
						else
						{
							printf("Unfortunate! The dealer draws a face card and hits 21.\n");
							printf("Money lost: $75\n\n");
							currentmoney = currentmoney - 75;
							printf("New Total: %i\n", currentmoney);
						}
						break;
				}
				break;
			case 3:
				printf("You approach the Roulette table. Your options are to bet on red, black, or the ultra rare green\n\n");
				printf("1. Red\n");
				printf("2. Black\n");
				printf("3. Green\n\n");
				printf("What is your choice?: ");
				scanf("%i", &roulette);
				printf("\n");
				switch(roulette)
				{
					case 1:
						if (chance[rand() % 2] % 2 == 0)
						{
							printf("Congrats! You won the 50/50\n");
							printf("Money earned: $75\n\n");
							currentmoney = currentmoney + 75;
							printf("New Total: %i\n", currentmoney);
						}
						else
						{
							printf("Unfortunate! You lost the 50/50\n");
							printf("Money lost: $75\n\n");
							currentmoney = currentmoney - 75;
							printf("New Total: %i\n", currentmoney);
						}
						break;
					case 2:
						if (chance[rand() % 2] % 2 == 0)
						{
							printf("Congrats! You won the 50/50\n");
							printf("Money earned: $75\n\n");
							currentmoney = currentmoney + 75;
							printf("New Total: %i\n", currentmoney);
						}
						else
						{
							printf("Unfortunate! You lost the 50/50\n");
							printf("Money lost: $75\n\n");
							currentmoney = currentmoney - 75;
							printf("New Total: %i\n", currentmoney);
						}
						break;
					case 3:
						if ((rand() % 100) % 10 == 0)
						{
							printf("WOAH! You actually hit the green. Heres a big payout\n");
							printf("Money earned: $1000\n\n");
							currentmoney = currentmoney + 1000;
							printf("New Total: %i\n", currentmoney);
						}
						else
						{
							printf("Unfortunate! You didn't hit it big. Something tells me it might be worth to keep trying\n");
							printf("Money lost: $75\n\n");
							currentmoney = currentmoney - 75;
							printf("New Total: %i\n", currentmoney);
						}
						break;
				}
				break;
			case 4:
				printf("You step up to the Craps table. You are betting on whether a 7 is rolled using both dice on the table.\n\n");
				printf("1. A 7 is rolled\n");
				printf("2. A 7 is not rolled\n\n");
				printf("What is your choice?: ");
				scanf("%i", &craps);
				printf("\n");
				switch(craps)
				{
					case 1:
						printf("Congrats! You won the 50/50\n");
						printf("Money earned: $75\n\n");
						currentmoney = currentmoney + 75;
						printf("New Total: %i\n", currentmoney);
						break;
					case 2:
						printf("Unfortunate! You lost the 50/50\n");
					 	printf("Money lost: $75\n\n");
						currentmoney = currentmoney - 75;
						printf("New Total: %i\n", currentmoney);
						break;
				}
				break;
			case 5:
				exit = true;
				break;
		}
	}
	if (currentmoney > 500)
		printf("Congratulations! You went positive.\n\n");
	else if (currentmoney == 500)
		printf("Did you even play?? You walked out with the same amount of money you walked in with. Try again!\n\n");
	else
		printf("Unfortunately you went negative, come try again!\n\n");
}

int skarkBay(void)
{
        srand(time(NULL));
        int rando2 = 1 + rand()%10000000;

        return rando2;
}

void stanPush(void)
{
        puts(" S J \n");
        char *stanRooms[5] = {"forest", "cave", "river", "castle", "Milo's room" };
        int stanVisits[5] = {0}, stanChoice, stanRandy;

        do 
	{

        	printf("\n=== stanley's room ===\n");
        	for(int i = 0; i < 5; i++) 
		{
	            	printf("%d. Enter %s\n", i + 1, stanRooms[i]);
        	}

        	printf("6. quit\n");
        	printf("choose a room: ");
        	scanf("%d", &stanChoice);

        	if(stanChoice >= 1 && stanChoice <= 5) 
			{

        	    stanVisits[stanChoice - 1]++;

		    printf("\nyou entered %s.\n", stanRooms[stanChoice - 1]);
		    stanRandy = rand() % 3;
            		if(stanRandy == 0) 
					{
                		printf("you found treasure\n");
           			}
            		else if(stanRandy == 1) 
					{
                		printf("a monster appeared\n");
            		}
            		else 
					{	
                		printf("nothing happened\n");
            		}
        			}
        	else if(stanChoice == 6) 
					{
            		printf("\n=== rooms visits ===\n");
            		for(int i = 0; i < 5; i++) 
					{
                		printf("%s visited %d time(s)\n",
                       		stanRooms[i],
                       		stanVisits[i]);
            		}

            		printf("goodbye\n");
        			}
        	else 
			{
            	printf("invalid choice\n");
        	}

    	} while(stanChoice != 6);

}

