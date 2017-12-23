#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int CeilIndex(vector<int> &arr, vector<int> &v, int l, int r, int key)
{
    int low = 0;
    int high = r+1;
    int mid;
    while(low<high)
    {
        mid = low + ((high-low)/2);
        if(arr[v[mid]] > key) high = mid;
        else if(arr[v[mid]]< key) low = mid +1;
        else return mid;
    }
    return low;



//	while (r-l > 1)
//    {
//        int m = l + (r-l)/2;
//        if (arr[v[m]] >= key)
//            r = m;
//        else
//            l = m;
//	}
//
//	return r;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr;
    vector<int> indexAsLength(n, 0);
    vector<int> pathOfArray(n, -1);

    int tmp;
    for(int i=0; i<n; i++)
    {
        scanf("%i", &tmp);
        arr.push_back(tmp);
       // cout << arr[i] << " ";
    }

    int maxLength = 0;
    indexAsLength[0] = 0;

    for(int i=1; i<n; i++)
    {
        if(arr[i] < arr[indexAsLength[0]])
        {
            indexAsLength[0] = i;
        }
        else if(arr[i] > arr[indexAsLength[maxLength]])
        {
            pathOfArray[i] = indexAsLength[maxLength];
            maxLength++;
            indexAsLength[maxLength] = i;
        }
        else
        {
            int pos = CeilIndex(arr, indexAsLength, -1, maxLength-1, arr[i]);
            indexAsLength[pos] = i;
            pathOfArray[i] = indexAsLength[pos-1];


        }

//        cout<<"i:"<<i<<" w: ";
//        for(int j=0; j<n; j++)
//        {
//            cout<<indexAsLength[j]<<" ";
//        }
//        cout<<endl;
    }

//    cout << "L:";
      cout << maxLength + 1 << endl;


//    cout << "Ind:";
//    for(int i=0; i<n; i++)
//    {
//        cout << indexAsLength[i] << " ";
//    }
//    cout << endl;

//    cout << "Path:";
//    for(int i=0; i<n; i++)
//    {
//        cout << pathOfArray[i] << " ";
//    }
//    cout << endl;


    int *tab = new int[maxLength+1];
    int j = 0;
    for(int i=indexAsLength[maxLength]; i>pathOfArray[i]>0; i=pathOfArray[i])
    {
       // cout << arr[i] << " ";
        tab[j] = arr[i];
        j++;
    }
    //cout << endl;

    //cerr << "Result:";
    for(int i=maxLength; i>=0; i--)
    {
        cout << tab[i] << " ";
    }
    cout << endl;



    return 0;
}

/*
11
3 4 -1 5 8 2 3 12 7 9 10

*/
