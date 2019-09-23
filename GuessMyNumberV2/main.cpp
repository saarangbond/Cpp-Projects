#include <iostream>

using namespace std;

int main()
{
    string Start;
    string Player;
    int MyGuess;
    string Feedback;
    MyGuess=50;
    int Parameter1=0;
    int Parameter2=100;
    MyGuess>=Parameter1 && MyGuess<=Parameter2;
    cout << "Rules: You will pick a number and keep it in your head. I(the computer) will try to guess your number.\nIf your number is greater, type in more. If your number is lesser, type in less. If I guess the number, type in correct./nRemember, only nonnegative numbers and no decimals\nGood Luck!" << endl;
    cout << "Enter a Username."<< endl;
    cin >> Player;
    cout << "Greetings, "<< Player << "! Pick a number(keep it in your head) and enter start to begin." << endl;
    cin >> Start;
    while (Feedback != "correct")
    {
        if(Start=="start")
        {
            cout << "My guess is " << MyGuess << endl;
            cout << "If your number is greater than my guess, type in 'more'. If your number is less than my guess, type in 'less'." << endl;
            cin >> Feedback;
            if (Feedback=="correct")
            {
                cout << " " << endl;
                cout << "I guessed your number!" << endl;
                cout << "Game Over!" << endl;
            }
            else if (Feedback=="more")
            {
                Parameter1=MyGuess;
                MyGuess=((Parameter2-Parameter1)/2)+MyGuess;
            }
            else if (Feedback=="less")
            {
                Parameter2=MyGuess;
                MyGuess=((Parameter2+Parameter1)/2);
            }
        }
    }

}
