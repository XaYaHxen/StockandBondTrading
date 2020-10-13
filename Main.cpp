//An application for Stock and Bond Trading.

//Declare our included libraries
#include <iostream>	//for using cout & cin
#include <chrono> //for using microseconds & seconds
#include <thread> //for using sleep_for


//Simplistic approach using switch casing.

int main()	//Usually I would not stick everything into main, but for the sake of learning we shall.
{
	//Declare variables.
	char menuChoice;
	bool isRunning = true;
	enum choices{A, B, C, D, E, X};

	//Declare our loop.
	while(isRunning)	//While the program is running, loop.
	{
		std::this_thread::sleep_for(std::chrono::seconds{ 5 }); //Sleep for 5 seconds.
		system("cls");
		std::cout << "A. Buy Bonds\tB. Sell Bonds\nC. Buy Stocks\tD. Sell Stocks\nE. Short Stock Sale\tX. Exit\nPlease input the letter corresponding with your choice: ";	//Output Choices
		std::cin >> menuChoice;	//Input user choice.

		if(menuChoice == 'A' || menuChoice == 'B' || menuChoice == 'C' || menuChoice == 'D' || menuChoice == 'E' 
			|| menuChoice == 'X' )	//Check for inputs to match parameters.
		{
			switch (1)	//Begin Switch Statement.
			{
			case 1: if (menuChoice == 'A')	//Cases 1 - 6, check if input matches parameter.
			{
				std::cout << "\nUser Selected Buy Bonds";	//Output.
				break;	//Break.
			}
			case 2: if (menuChoice == 'B')
			{
				std::cout << "\nUser Selected Sell Bonds";
				break;
			}
			case 3: if (menuChoice == 'C')
			{
				std::cout << "\nUser Selected Buy Stocks";
				break;
			}
			case 4: if (menuChoice == 'D')
			{
				std::cout << "\nUser Selected Sell Stocks";
				break;
			}
			case 5: if (menuChoice == 'E')
			{
				std::cout << "\nUser Selected Short Stock Sale";
				break;
			}
			case 6: if (menuChoice == 'X')
			{
				std::cout << "\nX. Done!";
				isRunning = false;	//Make isRunning false, end the loop.
				//Adding a break here is redundant.
			}
			}
		}
		else
		{
			std::cout << "\nInvalid Choice.\n";
			return 5;
		}
	}
	
	return 0;
}