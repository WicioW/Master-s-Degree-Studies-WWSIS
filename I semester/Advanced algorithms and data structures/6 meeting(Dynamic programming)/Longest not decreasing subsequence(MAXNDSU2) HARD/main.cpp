#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int lengthOfArray;
    cin >> lengthOfArray;
    int tab[lengthOfArray];

    for (int i =0; i<lengthOfArray; i++)
        cin>>tab[i];

    vector<int> d;
    d.push_back(0);

    for (int i=0;i<lengthOfArray;i++)
    {
        int p=0;
        int q=d.size()-1;

        while(p<=q)
        {
            int  m=(p+q)/2;
            if (d[m]<=tab[i]) p=m+1;
            else q=m-1;
        }
        if (p==d.size()) d.push_back(tab[i]);
        else d[p]=tab[i];
    }

    cout<<(d.size() - 1) <<endl;

    return 0;
}
