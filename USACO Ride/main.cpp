#include <iostream>

using namespace std;

int main()
{
    string NameOfComet, NameOfGroup;
    int ProductOfComet=1, ProductOfGroup=1;

    cin >> NameOfComet;
    cin >> NameOfGroup;
    int a=NameOfComet.length(), b=NameOfGroup.length();
    for (int i=0; i<a; i++)
    {
        cout << "ProductOfComet=" << ProductOfComet << endl;
        ProductOfComet*=NameOfComet[i];

    }

    for (int i=0; i<b; i++)
    {
        ProductOfGroup*=NameOfGroup[i];
    }

    ProductOfComet=ProductOfComet%47;
    ProductOfGroup=ProductOfGroup%47;

    if (ProductOfGroup==ProductOfComet)
    {
        cout << "GO";
    }
    else
    {
        cout << "STAY";
    }
}
