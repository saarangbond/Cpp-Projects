#include <iostream>

using namespace std;

int main()
{
    char GameMatrix[3][3]={{'-','-','-'},{'-','-','-'},{'-','-','-'}};
    string Player1, Player2;
    bool GameOver=true;
    int Move1, Move2, TotalMoves;
    char Comma;
    //rules
    cout << "Rules:Tic Tac Toe is a two player game. Players place X or O on a 3x3 board, and whoever gets three in a row first wins.\nGood Luck!" << endl;
    cout << endl;
    cout << "Enter a name for Player One." << endl;
    cin >> Player1;
    cout << "Enter a name for Player Two" << endl;
    cin >> Player2;
    cout << endl;

    int Turn=1;

    //game loop
    do
    {
        if (TotalMoves>=9 && GameOver==false)
            break;


        //write board to screen
        for (int row=0;row<3;row++)
        {
            for (int col=0;col<3;col++)
            {
                cout << GameMatrix[row][col] << " ";
            }
            cout << endl;
        }

        //Player turn
        if (Turn==1)
        {
            cout << endl;
            cout << Player1 << ", Enter a move in the form of coordinates(y axis first), separated by a comma." << endl;
        }
        else if (Turn==2)
        {
            cout << endl;
            cout << Player2 << ", Enter a move in the form of coordinates(y axis first), separated by a comma." << endl;
        }
        cin >> Move1 >> Comma >> Move2;
        cout << endl;

        //make moves easier to deal with
        Move1--;
        Move2--;

        //invalid move
        if (Move1<0 || Move1>2 || Move2<0 || Move2>2)
            cout << "That is an invalid move! Try Again!" << endl;
        else if (GameMatrix[Move1][Move2]=='X' || GameMatrix[Move1][Move2]=='O')
            cout << "That is an invalid move! Try Again!" << endl;
        else
        {

            TotalMoves++;
            //change board
            if (Turn==1)
            {
                GameMatrix[Move1][Move2]='X';
            }
            else if (Turn==2)
            {
                GameMatrix[Move1][Move2]='O';
            }

            //check game over
            if (Turn==1)
            {
                GameOver=true;
                for (int y=0;y<3;y++)
                {
                    if (GameMatrix[Move1][y]!='X')
                        GameOver=false;
                }
                if (GameOver==true)
                {
                    break;
                }
                for (int y=0;y<3;y++)
                {
                    if (GameMatrix[y][Move2]!='X')
                        GameOver=false;
                }
                for (int y=0, x=0;y<3 && x<3;y++, x++)
                {
                    if (GameMatrix[x][y]!='X')
                        GameOver=false;
                }
                for (int y=2, x=0;y>=0 && x<3;y--, x++)
                {
                    if (GameMatrix[x][y]!='X')
                        GameOver=false;
                }
                for (int y=0, x=2;y<3 && x>=0;x--, y++)
                {
                    if (GameMatrix[x][y]!='X')
                        GameOver=false;
                }
            }
            else if (Turn==2)
            {
                for (int y=0;y<3;y++)
                {
                    if (GameMatrix[Move1][y]!='O')
                        GameOver=false;
                }
                for (int y=0;y<3;y++)
                {
                    if (GameMatrix[y][Move2]!='O')
                        GameOver=false;
                }
                for (int y=0, x=0;y<3 && x<3;y++, x++)
                {
                    if (GameMatrix[x][y]!='O')
                        GameOver=false;
                }
                for (int y=2, x=0;y>=0 && x<3;y--, x++)
                {
                    if (GameMatrix[x][y]!='X')
                        GameOver=false;
                }
                for (int y=0, x=2;y<3 && x>=0;x--, y++)
                {
                    if (GameMatrix[x][y]!='X')
                        GameOver=false;
                }
            }
            //change turn
            if (GameOver==false)
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
    while (GameOver==false);

    if (Turn==1 && TotalMoves<9)
        cout << "Game Over! " << Player1 << " won!" << endl;
    else if (Turn==2 && TotalMoves<9)
        cout << "Game Over! " << Player2 << " won!" << endl;
    else if (TotalMoves>=9)
        cout << "Tie game!" << endl;
}
