//Contributors
//GP+
//LS
//Ryan Rodriguez
//Anthony Farris
//Charles Parker
//Kristopher Willett
//Fernando Gomez
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
	printf("As you walked in Room 65 You are transported back to a pivotal moment in World War II: The Battle of Midway.\n You are place in Command of the Japanese Carrier Strike Force under Vice Admiral Chuichi Nagumo.\nYour mission is too make strategic decisions that could change the outcome of the war.A Victory at Midway could give Japan hope for a peace Deal. Defeat would only accelerate Japans defeat.\nGoal: Locate and Destroy American Carriers (USS Enterprise, USS Hornet USS Yorktown) and take the Island of Midway.\n Junior Officers advise cautious approach by checking with intelligence and reconnaissance. Others advise a more aggressive approach arguing for one blow against American Carriers.");

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

	printf("Intelligence Level:  %d\n", Intelligence);
	printf("Reconnaissance Level:  %d\n", Reconnaissance);
	printf("Japanese Fleet Strength:  %d\n", fleetStrength);
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
	printf("American Carriers Located: 0 out of 3\n");
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
	printf("2) Keep scout planes close to save fuel and protect the fleet\n");
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
	printf("\nYou send fighters to escrot the bombers.\n");
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
	printf("Your offiercs are waiting for your invasion orders.\n");
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
	printf("The counterattack hits your fleet!\n");
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

	
	else if (carrierDamage < 2 && midwayCaptured == 1)
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
