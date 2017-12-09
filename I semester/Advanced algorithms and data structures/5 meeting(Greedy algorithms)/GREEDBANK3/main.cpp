#include <iostream>


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

    bool is = false;

    while( k != 0)
    {
        for(int j=0; j<n; j++)
        {
            if (array[j] <= k)
            {
                k = k - array[j];
                cout << array[j] << " ";
                j--;
                is = true;
            }
        }

        if( k !=0)
        {
            cout << "klops...";
            return 0;
        }
    }





    return 0;
}
