#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int *array = new int[n];

    for(int i=0; i<n; i++)
    {
        cin >> array[i];
    }

    int k;
    cin >> k;

    vector<int> array2;

    while( k != 0)
    {
        for(int j=0; j<n; j++)
        {
            if (array[j] <= k)
            {
                k = k - array[j];
                array2.push_back(array[j]);
                //cout << array[j] << " ";
                j--;
            }
        }
        if( k!= 0)
        {
            cout << "NIE";
            return 0;
        }
        else
        {
            for(int k=0; k< array2.size(); k++)
            {
                cout << array2[k] << " ";
            }
            return 0;
        }
    }





    return 0;
}
