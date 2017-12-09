#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int number;
    cin >> number;

    int *providedArray = new int[number];

    for(int i=0; i<number; i++)
    {
        cin >> providedArray[i];
    }

    int *c = new int[number];
    c[0] = providedArray[0];

    for(int i=1; i<6 && i<number; i++)
    {
        c[i] = providedArray[i] + *max_element(c, c + i);
    }
    for(int i=6; i<number; i++)
    {
        c[i] = providedArray[i] + *max_element(c + i - 6, c + i);
    }

    //function
    cout << c[number-1] << endl;

    delete[] providedArray;
    delete[] c;
    return 0;
}
