#include <fstream>

using namespace std;

ofstream fout ("fibo.out");

int main()
{
    int t1 = 1;
    int t2 = 1;
    int t3;

    fout << 1 << ' ' << 1 << ' ';

    for (int i = 3; ;i++)
    {
        t3 = t1 + t2;

        if (t3 >= 50000)
        {
            break;
        }
        fout << t3 << ' ';

        t1 = t2;
        t2 =t3;
    }


    return 0;
}
