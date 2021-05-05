#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand(time(0));
	int randNum = (rand() % 3);
	int guesNum;
	cout << "Rock, Paper, Scissor game" << endl;
	cout << "Choose a number between 0,1 and 2" << endl;
	cout << "The 0 stands for scissor, the 1 stands for rock and 2 stands for paper" << endl;
	cin >> guesNum;
	//cout << "The computer is" << randNum << endl;
	//cout << "You are" << guesNum << endl;
	if (randNum == 1 & guesNum == 2)
	{
		cout << "The computer is rock, You are paper" << endl;
		cout << "You win" << endl;
	}
	else if (randNum == 0 % guesNum == 1)
	{
		cout << "The computer is scissor, You are rock" << endl;
		cout << "You win" << endl;
	}
	else if (randNum == 2 & guesNum == 0)
	{
		cout << "The computer is paper, You are scissor " << endl;
		cout << "You win" << endl;
	}
	else if (randNum == 0 & guesNum == 2)
	{
		cout << "The computer is scissor, You are paper " << endl;
		cout << "You lose" << endl;
	}
	else if (randNum == 1 & guesNum == 0)
	{
		cout << "The computer is rock, You are scissor" << endl;
		cout << "You lose" << endl;
	}
	else if (randNum == 2 & guesNum == 1)
	{
		cout << "The computer is paper, You are rock" << endl;
		cout << "You lose" << endl;
	}
	else if (randNum == guesNum)
	{
		
		if (randNum == 1)
		{
			cout << "You are both rock" << endl;
	    }
		if (randNum == 0)
		{
			cout << "You are both scissor" << endl;
		}
		if (randNum == 2) {
			cout << "You are both paper" << endl;
		}
		cout << "Tt's a draw" << endl;
	}
	return 0;
}