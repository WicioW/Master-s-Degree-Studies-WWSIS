#include <iostream>
#include <cmath>

using namespace std;

int arrayOfGroups[4] = {0};

int main()
{
    int n = 0;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        arrayOfGroups[a-1]++;
    }

    //test
//    for(int j=0; j<4; j++)
//    {
//        cout << arrayOfGroups[j] << " ";
//    }
//    cout << endl;

    int result = 0;

    //for number '4'
    result += arrayOfGroups[3];
    //cout << "R after 4:" << result << endl;

    //for '3'
    if(arrayOfGroups[2]>0)
    {
        if(arrayOfGroups[0]>0)
        {
            if(arrayOfGroups[0]>= arrayOfGroups[2])
            {
                int tmp = arrayOfGroups[2];
                arrayOfGroups[2] -= tmp; //should be 0
                arrayOfGroups[0] -= tmp;
                result += tmp;
            }
            else
            {
                int tmp = arrayOfGroups[0];
                arrayOfGroups[2] -= tmp;
                arrayOfGroups[0] -= tmp; //should be 0
                result += tmp;
            }
        }
    }
    //if there are '3' left
    if(arrayOfGroups[2]>0)
    {
        result += arrayOfGroups[2];
        arrayOfGroups[2] = 0;
    }
    //cout << "R after 3:" << result << endl;


    //for '2'
    if(arrayOfGroups[1]>0)
    {
        result += arrayOfGroups[1] / 2;
        //if sth is left

        if(arrayOfGroups[1]%2 != 0) //if any '2' is left
        {
            if(arrayOfGroups[0] >= 2)
            {
                arrayOfGroups[0] -= 2; //remove 2* '1'
                arrayOfGroups[1] -= 1;
                result += 1;            //this makes additional taxi
            }
            else if(arrayOfGroups[0] == 1)
            {
                arrayOfGroups[0] -= 1;
                arrayOfGroups[1] -= 1;
                result += 1;
            }
            else
            {
                arrayOfGroups[1] -= 1;
                result += 1; //there are no '1' but still '2' to go
            }
        }
    }
    //cout << "R after 2:" << result << endl;


    //for '1'
    if(arrayOfGroups[0] > 0)
    {
        result += ceil((double)arrayOfGroups[0]/4);
    }
    //cout << "R after 1:" << result << endl;

    cout << result << endl;


    return 0;
}
