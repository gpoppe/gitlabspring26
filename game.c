//Contributors
//GP
//Christine Pham
//GP+
//LS
//Ryan Rodriguez
//Anthony Farris
//Charles Parker
//Kristopher Willett
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
void gameroom30(void);

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
				abFun();
				puts("room29");
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


