#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin ("test.txt");
    ofstream fout ("output.txt");

    int a, b;

    fin >> a >> b;
    fout << a+b;
}
