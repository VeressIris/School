//se da o clasa de 30 de elevi. in sem 1 s-a raspuns de n ori. profesorul a notat de fiecare data id-ul elevului care a raspuns.
//afistati elevii care nu au raspuns niciodata in tot semestrul
//ex: 10 elevi au raspuns
//    si au raspuns de-lungul sedintelor elevii:
//    4 3 2 3 2 3 2 3 8 9 10 10 10 4 2 3 2 4 2 3
//    cine nu a raspuns deloc?
//    00000000 00000000 00000011 10001110 <- 32 biti; operatia SAU |
//                           198 76543210
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("date.in");

int main()
{
    int n;
    fin >> n;

    int R = 0; //sirul de biti
    int ID;

    while (fin >> ID)
    {
        R = R | (1 << ID); //il marchez in vectorul de aparitii/caracteristic
    }

    for (int i = 1; i <= 30; i++)
    {
        if ((R & (1 << i)) == 0)
        {
            cout << i << ' ';
        }
    }

    return 0;
}
