#include <iostream>
using namespace std;

int main()
{
    int n, q, i, s, e, ZeeSum;
    cin >> n >> q;

    int MyArray[200];
    int k;

    for (k=0; k<n;++k)
    {
        cin >> MyArray[k];
        cout << "k=" << k << endl;
    }
    for (i=0;i<q;i++)
    {
        cin >> s >> e;
        ZeeSum=0;
        for (int y=s;y<=e;y++)
        {
            cout << "MyArray[s]=" << MyArray[s] << endl;
            ZeeSum+=MyArray[s];
            s++;
            cout << "ZeeSum=" << ZeeSum << " s=" << s << endl;
        }
        cout << ZeeSum << endl;
    }
}

