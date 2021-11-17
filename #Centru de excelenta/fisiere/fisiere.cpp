#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("date.in");
ofstream fout ("date.out");

int main ()
{
    int a;
    int b;
    fin >> a >> b;

    int c = a + b;
    fout << c;

    return 0;
}
