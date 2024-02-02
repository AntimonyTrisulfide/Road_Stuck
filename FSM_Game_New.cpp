#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string>
using namespace std;
string state = "";
string input = "";
string statechoice1;
string statechoice2;
bool ended = false;

void stateChoice() {
	if (state == "") {
		statechoice1 = "City Road";
		cout << endl;
		statechoice2 = "Alley";
		cout << endl;
		cout << endl;
	}
	//States for City Segments
	else if (state == "A") {
		statechoice1 = "Conveience Store";
		cout << endl;
		statechoice2 = "Petrol Filling Station";
		cout << endl;
		cout << endl;
	}
	else if (state == "AA") {
		statechoice1 = "Ask the Cashier for Help";
		cout << endl;
		statechoice2 = "Buy some Snacks";
		cout << endl;
		cout << endl;
	}
	else if (state == "AB") {
		statechoice1 = "Approach the Filling Station guy";
		cout << endl;
		statechoice2 = "";
		cout << endl;
		cout << endl;
	}
	else if (state == "ABA") {
		statechoice1 = "Return to City Road";
		cout << endl;
		statechoice2 = "";
		cout << endl;
		cout << endl;
	}
	else if (state == "ABB") {
		state = "AB";
	}
	else if (state == "ABAA") {
		state = "A";
	}
	else if (state == "AAA") {
		statechoice1 = "Pickup Card and dial the towing service number";
		cout << endl;
		statechoice2 = "";
		cout << endl;
		cout << endl;
	}
	else if (state == "AAB") {
		statechoice1 = "Eat them first";
		cout << endl;
		statechoice2 = "";
		cout << endl;
		cout << endl;
	}
	else if (state == "AAAAA") {
		cout << "You Won"; 
		cout << endl;
		cout << endl;
		cout << endl;
		ended = true;
		cout << "Press R key to reset";
	}
	else if (state == "AAAA") {
		statechoice1 = "Wait";
		cout << endl;
		statechoice2 = "";
		cout << endl;
		cout << endl;
	}
	else if (state == "AAAB") {
		state = "AAA";
	}
	else if (state == "AAAAB") {
		state = "AAAA";
	}
	else if (state == "AABB") {
		state = "AAB";
	}
	else if (state == "AABA") {
		statechoice1 = "Trace Back to Cashier Desk";
		cout << endl;
		statechoice2 = "";
		cout << endl;
		cout << endl;
	}
	else if (state == "AABAB") {
		state = "AABA";
	}
	else if (state == "AABAA") {
		state = "AA";
	}
	else if (state == "ABAB") {
		state = "ABA";
	}
	//States for Alley Segments
	else if (state == "B") {
		statechoice1 = "Ask the Random Strangers for Help";
		cout << endl;
		statechoice2 = "Approach the Mechanic Store";
		cout << endl;
		cout << endl;
	}
	else if (state == "BA") {
		statechoice1 = "Talk with them";
		cout << endl;
		statechoice2 = "Return to your car for safety";
		cout << endl;
		cout << endl;
	}
	else if (state == "BB") {
		statechoice1 = "Press the Buzzer switch";
		cout << endl;
		statechoice2 = "Knock on his house door";
		cout << endl;
		cout << endl;
	}
	else if (state == "BBA") {
		cout << "Game Over";
		cout << endl;
		cout << endl;
		cout << endl;
		ended = true;
		cout << "Press R key to reset";
	}
	else if (state == "BBB") {
		statechoice1 = "Get Inside";
		cout << endl;
		statechoice2 = "Traceback to Alley";
		cout << endl;
		cout << endl;
	}
	else if (state == "BAA") {
		statechoice1 = "Get the Petrol Can";
		cout << endl;
		statechoice2 = "";
		cout << endl;
		cout << endl;
	}
	else if (state == "BAB") {
		state = "";
	}
	else if (state == "BAAB") {
		state = "BAA";
	}
	else if (state == "BAAA") {
		cout << "You Won";
		cout << endl;
		cout << endl;
		cout << endl;
		ended = true;
		cout << "Press R key to reset";
	}
	else if (state == "BBBB") {
		state = "B";
	}
	else if (state == "BBBA") {
		statechoice1 = "Break the Door with the Hammer";
		cout << endl;
		statechoice2 = "Escape from the Terrace by jumping";
		cout << endl;
		cout << endl;
	}
	else if (state == "BBBAA") {
		cout << "Game Over";
		cout << endl;
		cout << endl;   
		cout << endl;
		ended = true;
		cout << "Press R key to reset";
	}
	else if (state == "BBBAB") {
		cout << "Game Over";
		cout << endl;
		cout << endl;
		cout << endl;
		ended = true;
		cout << "Press R key to reset";
	}
	else {
		system("cls");
		cout << "E1-Unhandled Exception";
		Sleep(5000);
	}
}

void printMessage() {
	if (state == "") {
		cout << "Your Car has no fuel, you are stranded in an unknown city with no one else in the surrounding\nAll you can see is an Alley and a Main City Road\n\nMake a choice";
		cout << endl;
		cout << endl;
		stateChoice();
	}
	//States for City Segments
	else if (state == "A") {
		cout << "You are now on the City Road having ample lighting, it is still quite deserted there but some lights can be seen\nAfter a bit walking you get to see a board of Convenience Store nearby and other road leading to a Petrol Filling Station\n\nMake a choice";
		cout << endl;
		cout << endl;
		stateChoice();
	}
	else if (state == "AA") {
		cout << "You see a Convenience Store open this time, luckliy the cashier is still there, you also saw a board for a Petrol Filling Station nearby\nMake a Choice";
		cout << endl;
		cout << endl;
		stateChoice();
	}
	else if (state == "AB") {
		cout << "You see a large board of Petrol Filling Station, you are feeling quite distressed, \nyou approach the filling guy with a smile\n";
		cout << endl;
		cout << endl;
		stateChoice();
	}
	else if (state == "ABA") {
		cout << "The filling guy tell you that he cant give you petrol in a Can, as it is not allowed, you tried convincing him\nBut he politely refused";
		cout << endl;
		cout << endl;
		stateChoice();
	}
	else if (state == "ABAB") {
		stateChoice();
		printMessage();
	}
	else if (state == "ABAA") {
		stateChoice();
		printMessage();
	}
	else if (state == "ABB") {
		stateChoice();
		printMessage();
	}
	else if (state == "AAA") {
		cout << "The cashier listens to you and offers the phone number of a towing service\nYou thanked him and accepted the contact card";
		cout << endl;
		cout << endl;
		stateChoice();
	}
	else if (state == "AAB") {
		cout << "For some weird reasons, you decided to buy some snacks first";
		cout << endl;
		cout << endl;
		stateChoice();
	}
	else if (state == "AABB") {
		stateChoice();
		printMessage();
	}
	else if (state == "AAAA") {
		cout << "You gave your details to the towing guy and he is ready to help, he asks you to wait for a while";
		cout << endl;
		cout << endl;
		stateChoice();
	}
	else if (state == "AAAB") {
		stateChoice();
		printMessage();
	}
	else if (state == "AAAAA") {
		cout << "You waited for a while, he showed up with a towing truck and you get in with him, showing him your car\nHe tows it to the nearest garage and also drops you to the nearest Hotel";
		cout << endl;
		cout << endl;
		Sleep(1500);
		stateChoice();
	}
	else if (state == "AABA") {
		cout << "You ate those snacks first and finally decide to talk to the cashier";
		cout << endl;
		cout << endl;
		stateChoice();
	}
	else if (state == "AABAA") {
		stateChoice();
		printMessage();
	}
	else if (state == "AABAB") {
		stateChoice();
		printMessage();
	}
	else if (state == "AAAAB") {
		stateChoice();
		printMessage();
	}
	//States for Alley Segments
	else if (state == "B") {
		cout << "You approach towards a Alley, luckliy some strangers can be seen conversing\nOn a different lane you can see the board for a Mechanic Store, its very likely he lives here\n\nMake a choice";
		cout << endl;
		cout << endl;
		stateChoice();
	}
	else if (state == "BA") {
		cout << "You make advancements towards the strangers, luckily they didnt notice you, \nyou are feeling anxious and rethinking your choice, you can feel the adrenaline rush\n\nMake a choice";
		cout << endl;
		cout << endl;
		stateChoice();
	}
	else if (state == "BB") {
		cout << "You enter the other lane, one which has the Mechanic Store and His House inside, \nseeing his store closed you slowly approach towards it.\n\nMake a choice";
		cout << endl;
		cout << endl;
		stateChoice();
	}
	else if (state == "BBA") {
		cout << "You got Electrocuted\nThe switch was broken and mistakenly you touched live wires";
		cout << endl;
		cout << endl;
		Sleep(1500);
		stateChoice();
	}
	else if (state == "BBBAA") {
		cout << "You broke the door with the hammer, you tried to run out of there but got hit in the head by a wrench and fell unconscious, leaving your fate uncertain";
		cout << endl;
		cout << endl;
		Sleep(1500);
		stateChoice();
	}
	else if (state == "BBBAB") {
		cout << "You jumped from the terrace, you escaped out of the house, but your right leg got fractured in the jump and you can no longer feel it, leaving you immobilized\nYou want to scream out of agony, but cant.\n You hope the guy who locked you does not finds you";
		cout << endl;
		cout << endl;
		Sleep(1500);
		stateChoice();
	}
	else if (state == "BBB") {
		cout << "You knocked the door only to realise that the door unlatched\nYou refrain from stepping inside but also concerned about your car and timely reach\n\nMake a choice";
		cout << endl;
		cout << endl;
		stateChoice();
	}
	else if (state == "BBBA") {
		cout << "You stepped inside and before you can think of something, someone latches the door from outside\nConfused, Frightened, you started thinking of escaping, all you can see is a Hammer\n\nMake a choice";
		cout << endl;
		cout << endl;
		stateChoice();
	}
	else if (state == "BBBB") {
		stateChoice();
		printMessage();
	}
	else if (state == "BAA") {
		cout << "You decided to approach the strangers talking\nThey listened to you calmly and one of them is ready to help you with a can full of petrol, but demands 2x the price,\nluckily you have just the money with you\n\nMake a choice";
		cout << endl;
		cout << endl;
		stateChoice();
	}
	else if (state == "BAB") {
		stateChoice();
		printMessage();
	}
	else if (state == "BAAB") {
		stateChoice();
		printMessage();
	}
	else if (state == "BAAA") {
		cout << "You got the Petrol Can, you quickly reach your car, fill it and drive out of the town";
		cout << endl;
		cout << endl;
		Sleep(1500);
		stateChoice();
	}
	else {

	}
}

int gamemain() {
	const int numOptions = 2;
	int selectedOption = 0;

	while (true) {
		system("cls"); // clear the console
		printMessage();
		// Display menu options
		for (int i = 0; i < numOptions; ++i) {
			if ((i == selectedOption) && (ended != true)) {
				cout << ">> ";
				//cout << "This is a Test";
			}
			else {
				cout << "   ";
			}

			// Display menu option
			if (i == 0 && ended != true) {
				cout << statechoice1 << endl;
			}
			else if (i == 1 && ended != true) {
				cout << statechoice2 << endl;
			}
		}

		// Wait for user input
		int key = _getch();

		// Handle user input
		switch (key) {
		case 72:
			// Move selection up
			if (ended == false) {
				selectedOption = (selectedOption - 1 + numOptions) % numOptions;
				break;
			}
			else {
				break;
			}

		case 80:
			// Move selection down
			if (ended == false) {
				selectedOption = (selectedOption + 1) % numOptions;
				break;
			}
			else {
				break;
			}

		case 27:
			state = "";  // Reset the game state to the initial state
			input = "";
			return 1;

		case 82:
		case 114:
			if (state == "AAAAA" || state == "BBBAB" || state == "BBBAA" || state == "BAAA" || state == "BBA") {
				//BBBAB  BBBAA  BAAA BBA AAAAA WINSTATES
				ended = false;
				system("cls");
				Sleep(500);
				cout << "Game Resetting.....";
				state = "";  // Reset the game state to the initial state
				input = "";
				system("cls");
				Sleep(1000);
				break;
			}
			else {
				break;
			}

		case 13: // Enter key
			// Perform action based on the selected option
			if (ended == false) {
				if (selectedOption == 0) {
					state.append("A");
				}
				else if (selectedOption == 1) {
					state.append("B");
				}
				else {
					// Ignore other keys
					break;
				}
			}
			else {
				break;
			}

		default:
			// Ignore other keys
			break;
		}
	}
}

void artGameMenu() {
	cout << "######                           #####                             " << endl;
	cout << "#     #  ####    ##   #####     #     # ##### #    #  ####  #    #" << endl;
	cout << "#     # #    #  #  #  #    #    #         #   #    # #    # #   #" << endl;
	cout << "######  #    # #    # #    #     #####    #   #    # #      ####" << endl;
	cout << "#   #   #    # ###### #    #          #   #   #    # #      #  #" << endl;
	cout << "#    #  #    # #    # #    #    #     #   #   #    # #    # #   #" << endl;
	cout << "#     #  ####  #    # #####      #####    #    ####   ####  #    #" << endl;
	cout << endl;
	cout << "Adventure Game by Manav Marmat";
	cout << endl;                                                                  
}

int main() {
	const int numOptions = 2;
	int selectedOption = 0;

	while (true) {
		system("cls"); // clear the console
		artGameMenu();
		// Display menu options
		for (int i = 0; i < numOptions; ++i) {
			if (i == selectedOption) {
				cout << ">> ";
			}
			else {
				cout << "   ";
			}

			// Display menu option
			if (i == 0) {
				cout << "Play" << endl;
			}
			else if (i == 1) {
				cout << "Exit" << endl;
			}
		}

		// Wait for user input
		int key = _getch();

		// Handle user input
		switch (key) {
		case 72:
			// Move selection up
			selectedOption = (selectedOption - 1 + numOptions) % numOptions;
			break;

		case 80:
			// Move selection down
			selectedOption = (selectedOption + 1) % numOptions;
			break;

		case 13: // Enter key
			// Perform action based on the selected option
			if (selectedOption == 0) {
				gamemain();
			}
			else if (selectedOption == 1) {
				return 1;
			}

		default:
			// Ignore other keys
			break;
		}
	}
	return 0;
}
