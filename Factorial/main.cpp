#include <iostream>

using namespace std;

int main()
{
    unsigned long n, LoopVar, f;
    f=1;
    cin >> n;
    for (LoopVar=1; LoopVar<=n; LoopVar++)
    {
        f=f*LoopVar;
    }
    cout << f << endl;
}
