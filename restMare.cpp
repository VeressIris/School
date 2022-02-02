// //Pentru un număr natural m numim rest mare cel mai mare rest pe care îl obţinem împărţind numărul m la toate numerele naturale
// //de la 1 la m. Fiind dat un număr natural n, se determină pentru fiecare număr de la 1 la n numărul rest mare, iar aceste resturi mari se
// //însumează. Se cere aflarea acestei sume.

// #include <iostream>
// #include <fstream>

// using namespace std;

// ifstream fin ("restmare.in");
// ofstream fout ("restmare.out");

// int RestMare(int m)
// {
//     int rest;
//     int restMare = 0;

//     for (int i = 1; i <= m; i++)
//     {
//         rest = m % i;

//         if (rest > restMare)
//         {
//             restMare = rest;
//         }
//     }
    
//     return restMare;
// }

// int main()
// {
//     int n;
//     fin >> n;

//     long long int sum = 0;
//     int restMare;

//     for (int i = 1; i <= n; i++)
//     {
//         restMare = RestMare(i);

//         sum += restMare;
//     }

//     fout << sum;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

ifstream fin("restmare.in");
ofstream fout("restmare.out");

int main()
{
    int n;
    fin >> n;
    long long int s=0;
    if(n%2==0)
        s=1LL * (1+(n/2-1))*(n-2)/2;  
    else
        s=1LL * (1+((n-1)/2-1))*((n-1)-2)/2+(n-1)/2; 
    fout << s;
    return 0;    
}