#include <iostream>

using namespace std;

int main()
{
    int nr1, nr2, nr3;
    int gl1, gl2, gl3;
    cin >> nr1 >> gl1 >> nr2 >> gl2 >> nr3 >> gl3;

    if (gl1 > 100)
    {
        cout << nr1 << endl;
    }

    if (gl2 > 100)
    {
        cout << nr2;
    }

    if (gl3 > 100)
    {
        cout << nr3 << endl;
    }

    return 0;
}
