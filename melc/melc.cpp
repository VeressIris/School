#include <iostream>

using namespace std;

float v, T;
int t, d;
int main()
{
    cin >> v >> d;
    v=v*1000/60;
    T=d/v;
    cout << T << endl;
    t=(int)T;
    cout << t << endl;
    if (T > t) 
        t++;
    cout << t << endl;
    cout << (int)1.99;

    return 0;
}