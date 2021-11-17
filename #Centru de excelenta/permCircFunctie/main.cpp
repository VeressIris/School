#include <iostream>

using namespace std;

void ls(int v[], int n) //ls = left shift
{
    for (int i = 1; i < n; i++)
    {
        v[i - 1]= v[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    //soultia mea
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int aux = v[0];
            ls(v,n);
            v[n - 1] = aux;
            cout << v[i] << ' ';
        }
        cout << '\n';
    }

    //Solutia 2 (toma)
//    for(int i=0; i < n-1; i++)
//    {
//        for(int j=i+1; j < n; j++)
//            cout<<v[j] << " ";
//        for(int j=0; j < i+1; j++)
//            cout<<v[j] << " ";
//        cout<<endl;
//    }

    return 0;
}
