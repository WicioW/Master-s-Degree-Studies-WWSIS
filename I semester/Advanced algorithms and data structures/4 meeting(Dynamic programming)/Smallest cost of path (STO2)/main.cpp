#include <iostream>
#include <stdio.h>

using namespace std;

int table[1000][1000];
int tableOfRouteCosts[1000][1000];
int arrayofCoordinates[1000];

int minim(int a, int b, int c)
{
    int minimum = 0;

    if (a<0 && b<0 && c<0) minimum = 0;
    else if (a<0 && b<0)   minimum = c;
    else if (a<0 && c<0)   minimum = b;
    else if (b<0 && c<0)   minimum = a;
    else if (a<0)          minimum = min(b,c);
    else if (b<0)          minimum = min(a,c);
    else if (c<0)          minimum = min(a,b);
    else                   minimum = min(a, min(b,c));

    return minimum;
}

int main()
{
    int n = 0;
    int m = 0;


    scanf("%i", &n);
    scanf("%i", &m);
   // cin >> n >> m;


    for(int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {

            scanf("%i", &table[i][j]);
//           int tmp;
//           scanf("%i", &tmp);
//           table[i][j] = tmp;
        }
    }

     //fill up with columns firstly, then rows
    for(int x=0; x<m; x++) //columns
    {
        for(int y=0; y<n; y++) //rows
        {
            int a=-1;
            int b=-1;
            int c=-1;

            if(x-1>=0)
            {
                if(y-1>=0) a = tableOfRouteCosts[x-1][y-1];
                           b = tableOfRouteCosts[x-1][y];
                if(y+1<n)  c = tableOfRouteCosts[x-1][y+1];
            }

            tableOfRouteCosts[x][y] = table[x][y] + minim(a,b,c);
        }
    }

    //find the smallest number in last column
    int a = tableOfRouteCosts[m-1][0];
    for(int k=0; k<n; k++)
    {
        if(tableOfRouteCosts[m-1][k] < a)
        {
            a = tableOfRouteCosts[m-1][k];
            arrayofCoordinates[m-1] = k;
        }
    }
    //check
    //cout << "last column: " << endl;
    //cout << "a: " << a << " " << "x: " << arrayofCoordinates[m-1];

    //check each column by going back, find smallest of three
    int Y = arrayofCoordinates[m-1];
    for(int e=m-2; e>=0 ; e--)
    {
       int a=-1;
       int b=-1;
       int c=-1;

       if(Y-1>=0) a=tableOfRouteCosts[e][Y-1];
                  b=tableOfRouteCosts[e][Y];
       if(Y+1< n) c=tableOfRouteCosts[e][Y+1];

       int tmp = minim(a, b, c);

       if       (tmp == a) Y--;
       else if  (tmp == c) Y++;
       else                Y=Y;

       arrayofCoordinates[e] = Y;
    }

   // cout << endl << "array of coordinates: " << endl;
    for(int q=0; q<m; q++)
    {
        cout << arrayofCoordinates[q] << " ";
    }
    cout << endl;






//    cout << "table" << endl;
//    for(int j=0; j<n; j++)
//    {
//        for(int i=0; i<m; i++)
//        {
//            cout << table[i][j] << " ";
//        }
//        cout << endl;
//    }


   //cout << "tableOfRouteCosts" << endl;
//    cout << "____________" << endl;
//    for(int j=0; j<n; j++)
//    {
//        for(int i=0; i<m; i++)
//        {
//           // if (tableOfRouteCosts[i][j] == -1) cout << "e ";
//           // else
//                cout << tableOfRouteCosts[i][j] << " ";
//        }
//        cout << endl;
//    }

    return 0;
}
/* another test
10 14
2 1 3 1 5 9 7 3 2 1 0 0 3 1
3 0 1 5 2 3 5 0 1 0 0 0 1 1
5 1 0 6 5 0 1 2 1 0 1 0 0 1
1 0 1 1 0 5 1 3 0 2 3 2 3 1
3 1 0 2 3 5 5 5 3 0 6 1 5 6
2 0 1 3 2 0 0 6 5 0 5 2 3 2
5 1 0 3 7 8 9 0 6 9 9 9 9 9
3 0 1 1 1 1 2 3 9 6 9 9 9 9
3 1 0 3 2 2 3 1 9 9 7 9 9 9
0 0 1 1 0 0 3 5 9 9 9 8 0 0


possible answers:
3 3 2 3 3 2 2 1 1 1 0 1 2 1
* * 4 * * * * * 2 * 1 2 * 2
* * * * * * * * * * * * * 3


*/
