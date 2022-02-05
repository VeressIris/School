//Se citesc N date de nastere a n elevi sortati-le

#include <iostream>

using namespace std;

struct data
{
    int zz;
    int ll;
    int aa;
};

data DataMax(data x, data y) //https://pastebin.com/WKn3pyan
{
    if (x.aa == y.aa)
    {
        if (x.ll == y.ll)
        {
            if (x.zz == x.zz)
            {
                return x;
            }
            if (x.zz > y.zz)
            {
                return x;
            }
            else
            {
                return y;
            }
        }
        if (x.ll > y.ll)
        {
            return x;
        }
        else
        {
            return y;
        }
    }
    else
    {
        if (x.aa > y.aa)
        {
            return x;
        }
        else
        {
            return y;
        }
    }
}

struct elev
{
    int id;
    data data_n;
};

int main()
{
    int n;
    cin >> n;

    data d[n];

    for (int i = 0; i < n; i++)
    {
        cin >> d.aa >> d.ll >> d.zz;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (DataMax(d[i], d[j]).aa == d[i].aa && DataMax(d[i], d[j]).ll == d[i].ll && DataMax(d[i], d[j]).zz == d[i].zz)
                {
                    swap(d[i], d[j]);
                }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << d[i].aa << d[i].ll << d[i].zz << '\n';
    }

    return 0;
}
