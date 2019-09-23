#include <iostream>

using namespace std;

int main()
{
    int n, l, j, number, w, t, u;
    bool SameNum;
    cin >> n >> l;
    int NumberArray[n];
    number=1;

    j=0;

    for (t=0;t<n;number++)
    {
        u=number;
       SameNum=false;
       for (int i=0;i<5;i++)
        {
            w=u%10;
            if (w == l)
            {
                SameNum=true;
            }
            u/=10;
        }
        if (SameNum==false)
        {
            NumberArray[j]=number;
            j++;
            t++;
        }
    }
    cout << NumberArray[n-1] << endl;
}
