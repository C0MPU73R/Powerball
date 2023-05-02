#include <iostream>
#include <vector>
#include "powerball.h"
#include "ticket.h"
using namespace std;
int main()
{
	//user
	vector<vector<ball*>> ball_vector;
	vector<ticket*> tickets;
	cout << "How many powerball tickets would you like to purchase?: " << endl; //where 1 ticket is 6 balls with a number each
	int numTickets;
	cin >> numTickets;
	ball_vector.resize(numTickets);
	
	for (int index = 0; index < numTickets; index++)
	{
		cout << "Would you like to choose your own numbers (Y/N)?: " << endl;
		string choice;
		cin >> choice;
		if (choice == "Y")
		{
			int number;
			for (int index2 = 0; index2 < 5; index2++)
			{
				cout << "Enter number: ";
				cin >> number;
				ball_vector[index].push_back(new ball(number));
			}
			int redBallNumber;
			cout << "Choose red ball number: ";
			cin >> redBallNumber;
			ball_vector[index].push_back(new ball(redBallNumber, "red"));
		}
		else //generate numbers for them
		{
			//white
			for (int index3 = 0; index3 < 5; index3++)
			{
				ball_vector[index].push_back(new ball(rand() % 69 + 1));
			}
			//red
			ball_vector[index].push_back(new ball(rand() % 69 + 1, "red"));
		}
	}
	//generate ticket(s) 1 ticket consists of 6 balls each with a color and a number
	for (int index = 0; index < ball_vector.size(); index++)
	{
		tickets.push_back(new ticket(ball_vector[index]));
	}
	//start the powerball
	powerball a;
	a.collectTickets(tickets);





	system("pause");
	return 0;
}