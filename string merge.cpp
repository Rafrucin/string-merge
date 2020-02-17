//SPOJ submission 23005899 (CPP)plaintext list.Status: AC, problem PP0504B, contest SPOJPL.By ravruc(ravruc), 2019 - 01 - 06 18 : 23 : 04.
#include <iostream>
#include <string>

using namespace std;


int main()
{
    int prob, z;
    string aa, bb;
    cin >> prob;
    for (int j = 1; j <= prob; j++)
    {
        cin >> aa >> bb;
        if (aa.length() <= bb.length())
            z = aa.length() * 2;
        else
            z = bb.length() * 2;
        char* tab;
        tab = new char[z];

        for (int i = 0; i < z; i = i + 2)
        {
            int p = i / 2;
            tab[i] = aa[p];
            tab[i + 1] = bb[p];

        }
        for (int k = 0; k < z; k++)
            cout << tab[k];
        cout << endl;
        delete[] tab;

    }

    return 0;
}
