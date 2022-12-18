#include <iostream>


using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0)); //seed random number generator
	num = rand() % 100 + 1; // random number between 1 and 100
	cout << "Guess My Number Game\n\n";
	

	do
	{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		tries++;
string stri =to_string(tries);
if(tries==8)
	{
	    cout<<"you lose\n\n";
	}
		if (guess > num)
		{
			cout << "Too high!\n\n";
			cout << stri<<endl ;
		}
		else if (guess < num)
		{
			cout << "Too low!\n\n";
			cout << stri<<endl ;
		}
		else
		{
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
		}
	} while (guess != num);

	return 0;
}
