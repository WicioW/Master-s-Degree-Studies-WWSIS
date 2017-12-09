#include <iostream>

using namespace std;

int values[1000];
int arrayForCash[20010];

int main()
{
    int number = 0;
    cin >> number; //scanf

    for(int i=0; i<number; i++)
    {
        cin >> values[i];
    }

    int cash = 0;
    cin >> cash;

    arrayForCash[0] = 0;
    for(int j=1; j<=cash; j++)
    {
        arrayForCash[j] = -1; // =cash;
    }

    for(int m=0; m<number; m++)
    {
        for(int n=cash; n - values[m]>=0; n--)
        {
            int a = n;
            int b = n - values[m];
            //if((a-b)<2) cout << "KURWA" <<a<<","<<b;
            //spr
           // cout << "a:" << a << endl;
            //cout << "b:" << b << endl;

            if(b>=0 && arrayForCash[b] != -1)
            {
                if(arrayForCash[a] < 0) // ==-1
                {
                    arrayForCash[a] = arrayForCash[b] + 1;

                }
                else
                {
                   //if(arrayForCash[404] <= 2) cout << "a:" << arrayForCash[a] << ",b+1:" << arrayForCash[b] + 1 << endl;
                    arrayForCash[a] = min(arrayForCash[a], arrayForCash[b] + 1);
                }

               // cout << "result:" << arrayForCash[a] << endl;


            }

            //cout << "_________" << endl;
        }
    }

    cout << arrayForCash[cash] << endl;

    //test for arrayForCash
//    for(int i=0; i<=cash; i++)
//    {
//        cout << i << ":" << arrayForCash[i] << " ";
//    }

    return 0;
}
