#include <iostream>

using namespace std;

int main()
{
    int how_much;
    cin >> how_much;

    int *tab;
    tab = new int [how_much];

    for(int i=0; i<how_much; i++)
    {
        cin >> tab[i];
    }

    bool swapped = true;
    int j = 0;
    int tmp;

    while(swapped)
    {
        swapped = false;
        j++;

        for(int i=0; i<how_much-j; i++)
        {
            if(tab[i] > tab[i+1])
            {
                tmp = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = tmp;
                swapped = true;

            }
        }

        if(swapped==true)
        {
            for(int k=0; k<how_much; k++)
            {
                cout << tab[k] << " ";
            }

            cout << endl;
        }
    }

    return 0;
}
