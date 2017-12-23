#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arrayForNumbers = new int[n];
    int *arrayForSum = new int[n];

    for(int i=0; i<n; i++)
    {
        cin >> arrayForNumbers[i];
    }

    for(int i=0; i<n; i++)
    {
        int maximum = 0;
        for(int j=0; j<i; j++)
        {

            if(arrayForNumbers[j] <= arrayForNumbers[i] && arrayForSum[j] > maximum)
            {
                maximum = arrayForSum[j];
            }

        }

        arrayForSum[i] = maximum + 1;

    }

    cout << *max_element(arrayForSum, arrayForSum+n) << endl;

    return 0;
}
