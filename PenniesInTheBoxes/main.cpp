#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    //rules
    cout << "Rules: Pennies in boxes is a two player game. The board is a sequence of N boxes.\nInitially, each box has some pennies.\nPlayers take turns picking either the leftmost or the rightmost box.\nThe game ends when there are no remaining boxes.\nAt the end of the game, the player who has most pennies wins the game.\nIf both players have the same amount of pennies then the game is tied" << endl;
    //define
    int n, i, x;
    srand(time(NULL));
    string Player1, Player2;
    //Ask Player Names
    cout << "Enter a name for Player 1." << endl;
    cin >> Player1;
    cout << "Enter a name for Player 2" << endl;
    cin >> Player2;
    //choose number of boxes(loop)
    do
    {
        cout << "Enter a number of boxes between 1 and 20." << endl;
        cin >> n;
        if (n<1 || n>20)
        {
            cout << "That is an invalid number of boxes!" << endl;
        }
    }
    while (n<1 || n>20);
    //define
    int BoxArray[n];
    //computer chooses pennies for boxes
    for (i=n; i>=0; --i)
    {
        BoxArray[i]=rand();
        BoxArray[i]=(BoxArray[i]%25)+1;
    }
    //define
    int leftmost, rightmost, Turn, P1Score, P2Score, BoxChoice;
    int LoopVar;
    //assign
    rightmost=(n-1);
    leftmost=0;
    Turn=1;
    P1Score=0;
    P2Score=0;
    LoopVar=n;

    //write the BoxArray to the screen the first time
    cout << "Board:" << endl;
    for(x=0; x<n; x++)
    {
        cout << BoxArray[x] << " ";
    }
    cout << " " << endl;
    //Player turn Loop
    do
    {
        //Player's turn
        cout << "Player " << Turn << ", Enter 0 to choose the leftmost box, or 1 to choose the rightmost box." << endl;
        cin >> BoxChoice;
        //invalid move warning
        if (BoxChoice != 0 && BoxChoice != 1)
        {
            cout << "That is an invalid move! Try Again!" << endl;
        }
        //P1 score change and update leftmost or rightmost
        if (BoxChoice==0 && Turn==1 )
        {
            cout << "Player " << Turn << "'s move is " << BoxChoice << endl;
            P1Score=P1Score+BoxArray[leftmost];
            leftmost=leftmost+1;
        }
        else if(BoxChoice==1 && Turn==1)
        {
            cout << " " << endl;
            cout << "Player " << Turn << "'s move is " << BoxChoice << endl;
            P1Score=P1Score+BoxArray[rightmost];
            rightmost=rightmost-1;
        }
        //P2 score change and update leftmost or rightmost
        if (BoxChoice==0 && Turn==2 )
        {
            cout << "Player " << Turn << "'s move is " << BoxChoice << endl;
            P2Score=P2Score+BoxArray[leftmost];
            leftmost=leftmost+1;
        }
        else if(BoxChoice==1 && Turn==2)
        {
            cout << "Player " << Turn << "'s move is " << BoxChoice << endl;
            P2Score=P2Score+BoxArray[rightmost];
            rightmost=rightmost-1;
        }
        if (leftmost<=rightmost)
        {
            //Write Score to screen
            cout << " " << endl;
            cout << "Scores: " << Player1 << ": " << P1Score << " " << Player2 << ": " << P2Score << endl;
            cout << " " << endl;
        }

        if (leftmost<=rightmost)
        {
            //write Box array to screen
            cout << "Board:" << endl;
            for(x=leftmost; x<=rightmost; x++)
            {
                cout << BoxArray[x] << " ";
            }
        }


        cout << " " << endl;
        //change turn
        if (Turn == 1 && (BoxChoice==1 || BoxChoice==0) && leftmost<=rightmost)
        {
           Turn=2;
        }
        else if (Turn == 2 && (BoxChoice==1 || BoxChoice==0) && leftmost<=rightmost)
        {
           Turn=1;
        }
    }
    while (leftmost<=rightmost);
    //define
    int ScoreDifferenceP1minusP2, ScoreDifferenceP2minusP1;
    //assign
    ScoreDifferenceP1minusP2=P1Score-P2Score;
    ScoreDifferenceP2minusP1=P2Score-P1Score;
    //player wins by chooses last box and computer outputs who won or if game is tied
    if (P1Score>P2Score)
    {
        cout << "Scores: " << Player1 << ": " << P1Score << " " << Player2 << ": " << P2Score << endl;
        cout << Player1 << " won by " <<  ScoreDifferenceP1minusP2 << " points!" << endl;
    }
    else if (P2Score>P1Score)
    {
        cout << "Scores: " << Player1 << ": " << P1Score << " " << Player2 << ": " << P2Score << endl;
        cout << Player2 << " won by " << ScoreDifferenceP2minusP1 << " points!" <<  endl;
    }
    else if (P2Score==P1Score)
    {
        cout << "Scores: " << Player1 << ": " << P1Score << " " << Player2 << ": " << P2Score << endl;
        cout << Player1 << " and " << Player2 << " Tied!" << endl;
    }
}
