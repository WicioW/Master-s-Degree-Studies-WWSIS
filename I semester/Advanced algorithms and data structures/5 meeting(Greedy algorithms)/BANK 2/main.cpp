#include <iostream>
#include <algorithm>

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

    sort(values, values+number);
//    for(int k=0; k<number; k++)
//    {
//        cout << values[k] << endl;
//    }

    int counter = 0;
    int j = number-1;
    for(;;)
    {
        if(cash>=values[j])
        {
            cash = cash - values[j];
            counter++;

        }
        else
        {
            j--;
        }
        //cout<<"j:" << j <<" cash:"<<cash<<" count:"<<counter<<endl;

        if(j<0)
        {
            cout << counter << endl;
            break;
        }
    }

    return 0;
}
