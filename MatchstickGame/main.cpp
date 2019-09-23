#include <iostream>

using namespace std;

int main()
{
    int Turn;
    Turn=1;
    int matchstick123;
    int NumberOfMatchsticks;
    string P1Name;
    string P2Name;
    string START;
    cout << "Type in start to begin the game." << endl;
    cin >> START;
    if (START=="start")
      {
          cout << "Rules: each player chooses a number of matchsticks(1,2,or 3) and subtracts it from the total.\nPlayer1 goes first, and whoever picks the last matchstick wins!\nGood luck!" << endl;
            cout << "Type in a name for Player1." << endl;
            cin >> P1Name;
            cout << "Type in a name for Player2" << endl;
            cin >> P2Name;
            cout << "Player 2 chooses a number of matchsticks between 10 and 50." << endl;
            cin >> NumberOfMatchsticks;
            if (10<=NumberOfMatchsticks && NumberOfMatchsticks<=50)
            {
               while(NumberOfMatchsticks>0)
                {
                    cout << "Choose 1,2, or 3 matchsticks(Type the number that you choose below)." << endl;
                    cin >> matchstick123;
                    if (matchstick123>NumberOfMatchsticks)
                    {
                       cout << "That is an invalid number. Try Again!" << endl;
                    }
                    if (matchstick123 != 1 && matchstick123 != 2 && matchstick123 != 3)
                    {
                        cout << "Player " << Turn << "'s move is " << matchstick123 << endl;
                        cout << "That is an invalid number. Try Again!" << endl;
                    }

                    if ((matchstick123==1 || matchstick123==2 || matchstick123==3) && matchstick123<=NumberOfMatchsticks)
                    {
                        NumberOfMatchsticks=NumberOfMatchsticks-matchstick123;
                        cout << "Player " << Turn << "'s move is " << matchstick123 << endl;
                        cout << "Number of Matchsticks Left=" << NumberOfMatchsticks << endl;
                    }
                    if (NumberOfMatchsticks != 0 && (matchstick123==1 || matchstick123==2 || matchstick123==3) && Turn==1 && matchstick123<=NumberOfMatchsticks)
                    {
                    Turn=2;
                    }
                    else if ( NumberOfMatchsticks != 0 && (matchstick123==1 || matchstick123==2 || matchstick123==3) && Turn==2 && matchstick123<=NumberOfMatchsticks)
                    {
                        Turn=1;
                    }
                    else if (NumberOfMatchsticks==1 || NumberOfMatchsticks==2)
                    {
                        if (Turn==1)
                        {
                            Turn=2;
                        }
                        else if (Turn==2)
                        {
                            Turn=1;
                    }
                    }
                }
                }
             }

    if(NumberOfMatchsticks == 0)
    {
        cout << "Yay! Player " << Turn << " won!";
    }
}
