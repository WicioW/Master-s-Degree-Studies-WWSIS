#include <iostream>

using namespace std;

int main()
{
    int length;
    int number;

    int val[2001] = {0};

    cin >> length;

    for(int i=0; i<length; i++)
    {
        cin >> number;
        val[number+1000]++; //because values are from -1000 to 1000
    }

    for(int i=0; i<2001; i++)
    {
        if(val[i]%2 == 1)
        {
            cout << i-1000 << " ";
        }
    }


    return 0;
}
