#include <iostream>
using namespace std;

int main()
{
    //rules
    cout << "Rules: Toads and frogs is a one player game.\nGiven a board of size N (where N is odd),\nthe left side of the board is filled with toads\nthe right side is filled with frogs\nthe the middle square is empty." << endl;
    cout << "You may make one of following moves:" << endl << " Move a toad 1 space to the right or make a toad jump over 1 space to the right." << endl << " Move a frog one space to the left or make a frog jump over one space to the left." << endl;

    //define
    int n, i, x, movecounter,Nby2, Usermove;
    bool legalmove, sym;

    //assign
    legalmove=true;
    sym=true;

    //ask board size(must be odd)
    cout << "Enter a board size(It must be odd)" << endl;
    cin >> n;
    Nby2=n/2;

    //define arrays
    char GameBoardArray[1000];
    char GameOverBoardArray[1000];
    char GameMovesArray[5000];

    //place toads on board
    for (i=0; i<(n/2); ++i)
    {
        GameBoardArray[i]= 'T';
    }
    //place frogs on board
    for (i=n; i>n/2; --i)
    {
        GameBoardArray[i]= 'F';
    }
    //place space on board
    GameBoardArray[Nby2]='_';
    //make solved/finished board
    for (i=(n-1), x=0; i>=0 && x<n; --i,++x)
    {
       GameOverBoardArray[x]=GameBoardArray[i];
    }

    //write game board to screen first time
    for (i=0; i<n; ++i)
    {
        cout << GameBoardArray[i];
    }
    cout << " " << endl;

    //game turn loop
    do
    {
        cout << "Enter a number to move the frog or toad in that position on the game board." << endl;
        cin >> Usermove;
        --Usermove;
        do
        {
             //invalid move warning
            if(Usermove<1 || Usermove>n || GameBoardArray[Usermove]=='_')
            {
                legalmove=false;
            }
            else if (GameBoardArray[Usermove]=='T' && (GameBoardArray[Usermove+1]!='_' && GameBoardArray[Usermove+2]!='_'))
            {
                legalmove=false;
            }
        }
        while (legalmove=false);

        //all user moves
        if (GameBoardArray[Usermove]=='T')
        {
            if (GameBoardArray[Usermove+1]=='_')
            {
                GameBoardArray[Usermove+1]='T';
                GameBoardArray[Usermove]='_';
            }
            else if (GameBoardArray[Usermove+2]=='_')
            {
                GameBoardArray[Usermove+2]='T';
                GameBoardArray[Usermove]='_';
            }
        }
        else if (GameBoardArray[Usermove]=='F')
        {
            if (GameBoardArray[Usermove-1]=='_')
            {
                GameBoardArray[Usermove-1]='F';
                GameBoardArray[Usermove]='_';
            }
            else if (GameBoardArray[Usermove-2]=='_')
            {
                GameBoardArray[Usermove-2]='F';
                GameBoardArray[Usermove]='_';
            }
        }
        //write game board to screen
        for (i=0; i<n; ++i)
        {
            cout << GameBoardArray[i];
        }
        cout << " " << endl;
        //find out if arrays are symmetric
        for (i=0; i<n ; i++)
        {
            if(GameBoardArray[i]!= GameOverBoardArray[i])
            {
                sym=false;
            }
        }
    }
    while (sym==false);
}
