#include <iostream>
#include <vector>
#include <utility>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <stdio.h>

using namespace std;

typedef pair<int, int> point;

bool comp_b(const point &a, const point &b)
{
    return a.second < b.second;
}

int main()
{
    int n = 0;
    cin >> n;

    vector<point> startAndFinish;

    for(int j=0; j<n; j++)
    {
        int a,b,c;

        scanf("%d", &a);
        scanf("%d", &b);

        //cin >> a >> b;
        c = a + b;
        startAndFinish.push_back(make_pair(a, c));
    }

//    for(int i=0; i<n; i++)
//    {
//        cout << "s:" << startAndFinish[i].first << " f:" << startAndFinish[i].second << endl;
//    }

    sort(startAndFinish.begin(), startAndFinish.end(), comp_b);

//    for(int i=0; i<n; i++)
//    {
//        cout << "s:" << startAndFinish[i].first << " f:" << startAndFinish[i].second << endl;
//    }

    int tmp = 0;
    int result = 1;

    for(int k=1; k<n; k++)
    {

        if(startAndFinish[k].first >=startAndFinish[tmp].second)
        {
            result++;
            tmp = k;
        }

    }

    cout << result << endl;



    return 0;
}
