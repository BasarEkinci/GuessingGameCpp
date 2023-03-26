#include <iostream>
#include <vector>

using namespace std;

void StartMenu() {
	cout << "\nStart Menu\n----------" << endl;
	cout << "Select a difficulty level" << endl;
	cout << "1.Easy" << endl;
	cout << "2.Medium" << endl;
	cout << "3.Hard" << endl;
	cout << "4.Back to Main Menu" << endl;
	cout << "===> ";
}

int main() {


	int menuChoice;
	int counter = 0;
	int guessTheNumberScore = 0;
	int guessTheAlphabetScore = 0;
	vector<char> vowels = { 'a', 'e', 'i', 'o', 'u' };
	vector<char> consonants = { 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z' };
	do {
		cout << "\nMENU\n----" << endl;
		cout << "1.Guess The Number" << endl;
		cout << "2.Guess The Alphabet" << endl;
		cout << "3.Total Score" << endl;
		cout << "4.Credit" << endl;
		cout << "5.Exit" << endl;
		cout << "\nEnter your choice: ";
		cin >> menuChoice;


		switch (menuChoice)
		{
			int startMenuChoice;
		case 1://Guess the number
			srand(time(0));
			int randomNumber;
			int guessNumber;
			int wrongRight;
			cout << "\nGuess The Number" << endl;
			//Guess the Number Start menu
			do
			{
				StartMenu();
				cin >> startMenuChoice;

				switch (startMenuChoice)
				{
				case 1://Guess the Number : Easy
					randomNumber = rand() % 15 + 1;
					counter = 0;
					wrongRight = 5;
					cout << "Guess the Number\n\n----------------" << endl;
					cout << "Instructions:" << endl;
					cout << " 1. Guess the number based on given range." << endl;
					cout << " 2. You are allowed to make one guess at a time." << endl;
					cout << " 3. Each game has 5 chance yo guess the correct number." << endl;
					cout << " 4. Once you have used up all your chances, you lost the game." << endl;
					cout << "\nGood Luck!" << endl;
					cout << "Easy:" << endl;

					do {
						cout << "Enter guess number from 1 to 15 . " << wrongRight << " chances left." << endl;
						cout << "Guess number: ";
						cin >> guessNumber;
						if (guessNumber == randomNumber) {
							counter++;
							guessTheNumberScore += 5;
							cout << "Correct!You've won the game with just " << counter << " times." << endl;
						}
						else if (guessNumber < randomNumber) {
							wrongRight--;
							counter++;
							cout << " Wrong! Your guess was too low!\n" << endl;
						}
						else if (guessNumber > randomNumber) {
							wrongRight--;
							counter++;
							cout << "Wrong! Your guess was to high!\n" << endl;
						}

						if (wrongRight == 0) {
							cout << "\nYou lost the game! " << endl;
						}
					} while (wrongRight != 0 && guessNumber != randomNumber);

					break;
				case 2://Guess the number : medium
					randomNumber = rand() % 20 + 1;
					counter = 0;
					wrongRight = 4;
					cout << "Guess the Number\n\n----------------" << endl;
					cout << "Instructions:" << endl;
					cout << " 1. Guess the number based on given range." << endl;
					cout << " 2. You are allowed to make one guess at a time." << endl;
					cout << " 3. Each game has 4 chance yo guess the correct number." << endl;
					cout << " 4. Once you have used up all your chances, you lost the game." << endl;
					cout << "\nGood Luck!" << endl;
					cout << "Medium:" << endl;

					do {
						cout << "Enter guess number from 1 to 20 . " << wrongRight << " chances left." << endl;
						cout << "Guess number: ";
						cin >> guessNumber;

						if (guessNumber == randomNumber) {
							cout << "Correct! You've won the game with just " << counter << " times." << endl;
							guessTheNumberScore += 10;
						}
						else if (guessNumber < randomNumber) {
							wrongRight--;
							counter++;
							cout << " Wrong! Your guess was too low!\n" << endl;
						}
						else if (guessNumber > randomNumber) {
							wrongRight--;
							counter++;
							cout << "Wrong! Your guess was to high!\n" << endl;
						}
						if (wrongRight == 0) {
							cout << "You lost the game! " << endl;
						}
					} while (wrongRight != 0 && guessNumber != randomNumber);
					break;
				case 3://Gues the number : hard
					randomNumber = rand() % 40 + 1;
					counter = 0;
					wrongRight = 3;
					cout << "Guess the Number\n\n----------------" << endl;
					cout << "Instructions:" << endl;
					cout << " 1. Guess the number based on given range." << endl;
					cout << " 2. You are allowed to make one guess at a time." << endl;
					cout << " 3. Each game has 3 chance yo guess the correct number." << endl;
					cout << " 4. Once you have used up all your chances, you lost the game." << endl;
					cout << "\nGood Luck!" << endl;
					cout << "Hard:" << endl;

					do {
						cout << "Enter guess number from 1 to 40 . " << wrongRight << " chances left." << endl;
						cout << "Guess number: ";
						cin >> guessNumber;

						if (guessNumber == randomNumber) {
							cout << "Correct! You've won the game with just " << counter << " times." << endl;
							guessTheNumberScore += 15;
						}
						else if (guessNumber < randomNumber) {
							wrongRight--;
							counter++;
							cout << " Wrong! Your guess was too low!\n" << endl;
						}
						else if (guessNumber > randomNumber) {
							wrongRight--;
							counter++;
							cout << "Wrong! Your guess was to high!\n" << endl;
						}
						else if (wrongRight == 0) {
							cout << "You lost the game ! " << endl;
						}
					} while (wrongRight != 0 && guessNumber != randomNumber);
					break;
				case 4://Return to main menu
					cout << "Return to main menu " << endl;
					break;
				default:
					cout << "Invalid input.Please try again" << endl;
					break;
				}
			} while (startMenuChoice != 4);//Guess the number exit
			break;
		case 2://Guess the Alphabet
			char randomChar;
			char guessChar;
			cout << "\nGuess The Alphabet" << endl;
			//Guess the Alphabet Start menu
			do
			{
				StartMenu();
				cin >> startMenuChoice;

				switch (startMenuChoice)
				{
				case 1://Guess the Alphabet : Easy
					randomChar = vowels[rand() % vowels.size()];
					counter = 0;
					wrongRight = 2;
					cout << "Guess the Alphabet\n\n----------------" << endl;
					cout << "Instructions:" << endl;
					cout << " 1. Guess the vowel alphabet." << endl;
					cout << " 2. You are allowed to make one guess at a time." << endl;
					cout << " 3. Each game has 2 chances to guess the correct vowel." << endl;
					cout << " 4. Once you have used up all your chances, you lost the game." << endl;
					cout << "\nGood Luck!" << endl;
					cout << "Easy:" << endl;

					do {
						cout << "Enter a word: " << wrongRight << " chances left." << "What is the alphabet?" << endl;
						cout << "Guess: ";
						cin >> guessChar;
						if (guessChar == randomChar) {
							counter++;
							guessTheAlphabetScore += 5;
							cout << "Correct!You've won the game with just " << counter << " times." << endl;
						}
						else if (guessChar < randomChar) {
							wrongRight--;
							counter++;
							cout << " Wrong! Your guess was too low!\n" << endl;
						}
						else if (guessChar > randomChar) {
							wrongRight--;
							counter++;
							cout << "Wrong! Your guess was to high!\n" << endl;
						}

						if (wrongRight == 0) {
							cout << "\nYou lost the game! " << endl;
						}
					} while (wrongRight != 0 && guessChar != randomChar);

					break;
				case 2://Guess the Alphabet : medium
					randomChar = consonants[rand() % consonants.size()];
					counter = 0;
					wrongRight = 4;
					cout << "Guess the Alphabet\n\n----------------" << endl;
					cout << "Instructions:" << endl;
					cout << " 1. Guess the consonant alphabet." << endl;
					cout << " 2. You are allowed to make one guess at a time." << endl;
					cout << " 3. Each game has 4 chances to guess the correct vowel." << endl;
					cout << " 4. Once you have used up all your chances, you lost the game." << endl;
					cout << "\nGood Luck!" << endl;
					cout << "Medium:" << endl;

					do {
						cout << "Enter a word: " << wrongRight << " chances left." << "What is the alphabet?" << endl;
						cout << "Guess: ";
						cin >> guessChar;
						if (guessChar == randomChar) {
							counter++;
							guessTheAlphabetScore += 10;
							cout << "Correct!You've won the game with just " << counter << " times." << endl;
						}
						else if (guessChar < randomChar) {
							wrongRight--;
							counter++;
							cout << "Wrong! Your guess was too low!\n" << endl;
						}
						else if (guessChar > randomChar) {
							wrongRight--;
							counter++;
							cout << "Wrong! Your guess was to high!\n" << endl;
						}

						if (wrongRight == 0) {
							cout << "\nYou lost the game! " << endl;
						}
					} while (wrongRight != 0 && guessChar != randomChar);
					break;
				case 3://Gues the Alphabet : hard
					randomChar = 'a' + rand() % 26;
					counter = 0;
					wrongRight = 5;
					cout << "Guess the Alphabet\n\n----------------" << endl;
					cout << "Instructions:" << endl;
					cout << " 1. Guess the alphabet." << endl;
					cout << " 2. You are allowed to make one guess at a time." << endl;
					cout << " 3. Each game has 5 chances to guess the correct vowel." << endl;
					cout << " 4. Once you have used up all your chances, you lost the game." << endl;
					cout << "\nGood Luck!" << endl;
					cout << "Medium:" << endl;

					do {
						cout << "Enter a word: " << wrongRight << " chances left." << "What is the alphabet?" << endl;
						cout << "Guess: ";
						cin >> guessChar;
						if (guessChar == randomChar) {
							counter++;
							guessTheAlphabetScore += 15;
							cout << "Correct!You've won the game with just " << counter << " times." << endl;
						}
						else if (guessChar < randomChar) {
							wrongRight--;
							counter++;
							cout << "Wrong! Your guess was too low!\n" << endl;
						}
						else if (guessChar > randomChar) {
							wrongRight--;
							counter++;
							cout << "Wrong! Your guess was to high!\n" << endl;
						}

						if (wrongRight == 0) {
							cout << "\nYou lost the game! " << endl;
						}
					} while (wrongRight != 0 && guessChar != randomChar);
					break;
				case 4://Return to main menu
					cout << "Return to main menu " << endl;
					break;
				default:
					cout << "Invalid input.Please try again" << endl;
					break;
				}
			} while (startMenuChoice != 4);//Guess the Alphabet Exit
			break;
		case 3://Total Score

			cout << "Guess the Number Best Score: " << guessTheNumberScore << endl;
			cout << "Guess the Alphabet Best Score: " << guessTheAlphabetScore << endl;

			cout << "Total Score: " << guessTheAlphabetScore + guessTheNumberScore << endl;

			break;
		case 4://Credit
			cout << "Students names & IDs: " << endl;
			cout << "Gulsu Oz: " << endl;
			cout << "Omer Akce: 200209045" << endl;
			cout << "Yunus Emre Bektas: 200209043" << endl;
			cout << "Huseyin Murat: 200209028 " << endl;
			cout << "Edar Erdem: 200209002 " << endl;
			cout << "Ismail Basar Ekinci: 200209054 " << endl;
			cout << "Course of Study: Software Engineering" << endl;

			break;
		case 5://Exit
			cout << "Application closed" << endl;

			break;
		default:
			cout << "Invalid input.Please try again!" << endl;
			break;
		}
	} while (menuChoice != 5);
	cout << "Hello";


	return 0;
}