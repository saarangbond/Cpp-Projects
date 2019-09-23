#include <iostream>

using namespace std;

int main()
{
    string string1;
    int i, n, m, x;

    cin >> string1;
    n=string1.length();
    m=n%3;
    x=n/3;

    for (i=m;i<=n;i+=4)
    {
        if (m==0)
        {
            m+=3;
        }
        string1.insert(i,",");
    }
    cout << string1 << endl;
}
