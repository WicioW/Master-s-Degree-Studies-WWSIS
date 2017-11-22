#include <iostream>
#include <string>


using namespace std;

int main()
{
    int tmp;
    long addition = 0;

    int numbers[10] = {0}; //table of numbers from 0 to 9

    string string_number;
    cin >> string_number;

    for(int i=0; i<string_number.size(); i++)
    {
        tmp = string_number[i] - 48; //converting char to int
        numbers[tmp]++;
        addition += tmp;
    }
    //number can be divided by 30 when it can be devided by 3 and 10
    //so...
    if((numbers[0] != 0) && (addition%3 == 0))
    {
        for(int i=9; i>=0; i--)
        {
            while (numbers[i] > 0)
            {
                cout << i;
                numbers[i]--;
            }
        }
    }
    else
    {
        cout << "-1";
        return 0;
    }



    return 0;
}
