#include <iostream>

using namespace std;

int main()
{

    int number;
    cin >> number;

    int *tab = new int(number);

    for(int n=0; n<number; n++)
    {
        cin >> tab[n];
    }

    int stop = 0;

    for(int i=0; i<number; i++)
    {
        for(int j=0; j<number; j++)
        {
            if(stop==j)
            {
                cout << stop << " ";
                stop = tab[j];
            }

            if(stop==0)
            {
                return 0;
            }
        }
    }
}

//8
//3 5 1 6 4 7 0 2
//= 0 3 6
//____________________
//10
//4 7 1 9 8 3 2 5 0 6
//= 0 4 8
//____________________
//10
//8 7 9 3 6 5 4 2 2 0
//= 0 8 2 9
