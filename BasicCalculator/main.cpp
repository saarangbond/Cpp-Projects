#include <iostream>

using namespace std;

int main()
{
    float Number1, Number2, ResultNumber;
    char operation;
    cin >> Number1 >> operation >> Number2;
    if (operation=='+') ResultNumber=Number1+Number2;
    if (operation=='-') ResultNumber=Number1-Number2;
    if (operation=='*') ResultNumber=Number1*Number2;
    if (operation=='/') ResultNumber=Number1/Number2;
    cout << "=" << endl;
    cout <<  ResultNumber << endl;
}
