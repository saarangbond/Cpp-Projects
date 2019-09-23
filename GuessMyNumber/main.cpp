#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand (time(NULL));
    int CorrectNumber;
    CorrectNumber = rand();
    CorrectNumber %= 101;
    int Guess;
    int NumberOfGuesses;
    NumberOfGuesses=0;
    string UserName;
    cout << "Rules: I(The Computer) will pick a number. You will try to guess my number.\nIf my number is greater, than I will say greater. If it is less, I will say less.\nTry to get my number in the least number of guesses. Good luck!" << endl;
    cout << "Enter a name for the User." << endl;
    cin >> UserName;
    while (CorrectNumber != Guess)
    {
        if(Guess != CorrectNumber)
        {
            cout << "Guess a number between 0 and 100(inclusive)." << endl;
            cin >> Guess;
            cout << UserName << "'s guess is " << Guess << endl;
            NumberOfGuesses=NumberOfGuesses+1;
            if (Guess != CorrectNumber)
            {
               cout << UserName<< "'s Number Of Guesses so far is " << NumberOfGuesses << endl;
            }
            if (Guess>100 || Guess<0)
            {
                cout << "That guess is invalid! Try again!";
            }
            if (Guess>=0 && Guess<=100 && Guess != CorrectNumber)
            {
                if (Guess > CorrectNumber)
                {
                    cout << "The Correct Number is Lesser." << endl;
                }
                else if (Guess<CorrectNumber)
                {
                        cout << "The Correct Number is Greater." << endl;
                }
            }
        }
    }
    if(Guess==CorrectNumber)
    {
        cout << "The Correct Number is Greater." << endl;
        cout << "LOL JK YOU GOT IT CORRECT!" << endl;
        cout << "It took " << UserName << " " << NumberOfGuesses << " Guesses to get the Correct Number." << endl;
    }
}
