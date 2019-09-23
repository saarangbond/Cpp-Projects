#include <iostream>

using namespace std;

int main()
{
    int a, m, x, y, b, GreatestSum, CurrentSolution;
    CurrentSolution=0;
    cout << "Enter three numbers(x,y,and m) separated by spaces, and hit enter.\nRemember, '1' is less than or equal to 'x', 'x' is less than 'y',\n'y' is less than 'm', 'm' is less than or equal to '1000'." << endl;
    cin >> x >> y >> m;
    for (a=0;a<=m/x;a++)
    {
        b=(m-a*x)/y;
        GreatestSum=a*x+b*y;
        GreatestSum<=m;
        if (GreatestSum>CurrentSolution && CurrentSolution<=m)
        {
            CurrentSolution=GreatestSum;
        }
    }
    cout << CurrentSolution;
    return 0;
}
