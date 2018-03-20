//Addition Quiz for Children
//By Olivia Bravo and Tynesha Dorsey
#include <iostream> //Enables input and output
#include <stdlib.h> //For random number
#include <time.h> //For random number
#include <string> //Enables string
using namespace std;

int main()
{
	srand(time(NULL)); //Initializes the random seed
	int score = 0, num1, num2, answer, solution;
	const int numbers[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; //List of numbers that will be used
	string name;
	cout << "Welcome to the Addition Quiz!" << endl;
	cout << "What is your name?" << endl;
	cin >> name;
	cout << "\nHello " << name << "!" << endl;
	cout << "There will be 10 questions and you will submit the answer." <<endl;
	cout << "For every question you get right, your score will increase. Good luck!\n" << endl;
	for (int i = 1; i < 11; i++)
	{
		int randIndex1 = rand() % 9; //Gets random index number
		int randIndex2 = rand() % 9; 
		num1 = numbers[randIndex1]; //Gets random number from list using the random index number
		num2 = numbers[randIndex2];
		solution = num1 + num2;  //Adds the two random numbers to compare solutions with user input
		cout << "Question " << i << endl;
		cout << "What is " << num1 << " + " << num2 << "?" << endl;
		cin >> answer;
		if (answer == solution)
		{
			score++; //Increases score if answer is correct
			cout << "Correct!\n" << endl;
		}
		else
		{
			cout << "Sorry, that's incorrect.\n" << endl;
		}
	}
	cout << "\nYour final score is: " << score << " out of 10." << endl;
	cout << "Thank you for playing!" << endl;
}