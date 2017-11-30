#include <iostream>

using namespace std;

int lcs(string array1, string array2)
{
    int table[101][101];
    int m = array1.length();
    int n = array2.length();

    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==0 || j==0)
            {
                table[i][j] = 0;
            }
            else if (array1[i-1] == array2[j-1])
            {
                table[i][j] = table[i-1][j-1] + 1;
            }
            else
            {
                table[i][j] = max(table[i-1][j], table[i][j-1]);
            }

        }
    }

    return table[m][n];
}



int main()
{
    string arr1;
    string arr2;

    cin >> arr1;
    cin >> arr2;

    cout << lcs(arr1,arr2) << endl;

    return 0;
}
