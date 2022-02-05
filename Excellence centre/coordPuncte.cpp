//se citesc N puncte, numarati cate se afla in cadranele I, II, III, IV

#include <iostream>

using namespace std;

struct punct
{
    float ox;
    float oy;
};

int main()
{
    int n;
    cin >> n;

    punct P[n];

    for (int i = 0; i < n; i++)
    {
        cin >> P[i].ox >> P[i].oy;
    }

    int I = 0;
    int II = 0;
    int III = 0;
    int IV = 0;

    for (int i = 0; i < n; i++)
    {
        if (P[i].ox > 0 && P[i].oy > 0)
        {
            I++;
        }
        else if (P[i].ox < 0 && P[i].oy > 0)
        {
            II++;
        }
        else if (P[i].ox < 0 && P[i].oy < 0)
        {
            III++;
        }
        else
        {
            IV++;
        }
    }

    cout << I << " puncte in cadranul I" << '\n' << II << " puncte in cadranul II" << '\n' << III << " puncte in cadranul III" << '\n' << IV << " puncte in cadranul IV";

    return 0;
}
