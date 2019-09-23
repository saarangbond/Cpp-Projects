#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

int main()
{
    ifstream fin ("DictionaryForHangman.c");
    //define
    string secretWord, displayString, PreviousGuesses;
    srand(time(NULL));
    int x=rand();
    x=(x%226)+1
    //Rules
    cout << "Rules: Computer chooses a secret word for user to guess(only lowercase letters)." << endl;
    cout << "User enters a letter as a guess. If the guess is correct, the letter will show up on the screen." << endl;
    cout << "You can only guess wrong 5 times, so guess wisely. Good Luck!" << endl;
    //choose secretWord
    cout << endl;
    for (int g=0; g<x; g++)
    {
        fin >> secretWord;
    }

    //define
    int w=secretWord.length(), j, i, l;
    //assign display string (loop)
    for (i=0;i<w;i++)
    {
        displayString[i]='_';
    }
    //write display array to the screen the first time
    for (l=0;l<w;l++)
    {
        cout << displayString[l] << " ";
    }
    cout << endl;
    //define
    char guess;
    int h=0, WrongGuesses, TotalGuesses;
    bool GameOver, GuessedBefore;
    WrongGuesses=0;
    TotalGuesses=0;

    cout << endl;
    //game loop
    do
    {
        //set game over to true
        GameOver=true;
        GuessedBefore=false;
        //ask
        cout << "Enter a guess." << endl;
        cin >> guess;
        //convert to a lowercase letter if needed
        if (guess>='A' && guess<='Z')
        {
            guess+=('a'-'A');
        }
        //update
        PreviousGuesses+=guess;
        TotalGuesses++;
        cout << endl;

        //assign
        h=0;
        if ()

        else if (GuessedBefore==false)
        {
            //turn loop
            for (j=0;j<w;j++)
            {
                if (secretWord[j]==guess)
                {
                    displayString[j]=guess;
                }
                else
                {
                    h++;
                }
            }
            //check wrong guess (if)
            if (h>=w)
            {
                WrongGuesses++;
            }

            //check if game over (loop)
            for (int u=0;u<w;u++)
            {
                if (displayString[u] != secretWord[u])
                {
                    GameOver=false;
                }
            }

            int WrongGuessesLeft=5-WrongGuesses;

            //write board to screen
            for (l=0;l<w;l++)
            {
                cout << displayString[l] << " ";
            }
            //write wrong guesses to screen
             if (GameOver==false)
             {
                cout << endl;
                cout << endl;
                cout << "You have guessed " << WrongGuesses << " wrong guesses." << endl;
                cout << "You may only make " << WrongGuessesLeft << " more wrong guesses." << endl;
                cout << endl;
             }

            //define
            int y;
            y=PreviousGuesses.length();
            //write previous guesses to screen
            cout << "Letters Guessed: ";
            for (int r=0;r<y;r++)
            {
                cout << PreviousGuesses[r] << " ";
            }
            cout << endl;
            cout << endl;
        }

    }
    while (GameOver==false && WrongGuesses<5);

        //if user wins
        if (WrongGuesses<5)
        {
            cout << "Congratulations! You guessed the word in " << TotalGuesses << " guesses!" << endl;
        }
        //if user loses
        else if (WrongGuesses>=5)
        {
            cout << "You guessed wrong too many times. You have failed!" << endl;
        }

}
