#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int number;
    cin >> number;

    vector<int> tab(number);

    for(int i=0; i<number; i++)
    {
        tab[i] = 0;
    }

    for(int i=0; i<number; i++)
    {
        int tmp;
        cin >> tmp;
        tab[tmp-1]++;
    }


    bool isPermutation = true;

    for(int i=0; i<number; i++)
    {
        if(tab[i] != 1)
        {
            isPermutation = false;
        }
    }

    if(isPermutation == true)
    {
        cout << "TAK" << endl;
    }
    else
    {
        cout << "NIE" << endl;
    }

	return 0;
}
