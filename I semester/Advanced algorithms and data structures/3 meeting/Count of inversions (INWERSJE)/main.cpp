#include <iostream>
#include <vector>
#include <stdio.h>
//dla random
//#include <stdlib.h>
//#include <time.h>
//-----------------

using namespace std;

/*
tests:
6: 4 3 1 6 5 2 -> 8
7: 3 7 5 6 4 2 1 -> 16
*/


long long mergeSortAndCount(vector<int>& arr, int left, int mid, int right)
{
    //test-----------------------------------------
//    cout << "Before merge: ";
//    for(int i=0; i<arr.size(); i++)
//    {
//        cout << arr[i];
//    }
//    cout << endl;
    //---------------------------------------------------------
    vector<int> tmp;
    int i = left;
    int j = mid + 1;
    long long deletedFromRightSubarray = 0;

    //test-----------------------------------------
//    cout << "Before:";
//    for(int x=i; x<j; x++)
//    {
//        cout << arr[x];
//    }
//    cout << " ";
//    for(int x=j; x<= right; x++)
//    {
//        cout << arr[x];
//    }
//    cout << endl;
    //-----------------------------------------------------
    long long inversionCount = 0;

    while(i<= mid && j<= right)
    {
        if( arr[i] <= arr[j])
        {
            tmp.push_back(arr[i]);
            i++;
        }
        else
        {
            inversionCount += j - i - deletedFromRightSubarray;
            tmp.push_back(arr[j]);
            j++;
            deletedFromRightSubarray++;
        }
    }


    while(i <= mid)
    {
        tmp.push_back(arr[i]);
        i++;
    }
    while(j <= right)
    {
        tmp.push_back(arr[j]);
        j++;
    }

    //test-------------------------
//    for(int i=0; i<tmp.size(); i++)
//    {
//        cout << tmp[i];
//    }
//    cout << endl;
    //-------------------------------------

    copy(tmp.begin(), tmp.end(), arr.begin() + left);


    //test------------------------
//    cout << "After:   ";
//    for(int i=0; i<arr.size(); i++)
//    {
//        cout << arr[i];
//    }
//    cout << " i:" << inversionCount;
//    cout << endl << endl;
    //-------------------------------------

    tmp.clear();

    return inversionCount;
}

long long divideAndConquer(vector<int>& arr, int left, int right)
{
    long long inversionCount = 0;

    if (left >= right)
    {
        return inversionCount;
    }
    else
    {
        int mid = (left + right)/2;

        inversionCount += divideAndConquer(arr, left, mid);
        inversionCount += divideAndConquer(arr, mid+1, right);
        inversionCount += mergeSortAndCount(arr, left, mid, right);

        return inversionCount;
    }
}

int main()
{
    int number;
    scanf("%d", &number);

    if(number < 1 || number > 1000000) return 0; //check borderline values

    vector<int> arr;

    int tmp;
    for(int i=0; i<number; i++)
    {
        scanf("%d", &tmp);
        if(tmp < 1 || tmp > 1000000) return 0; //check borderline values
        arr.push_back(tmp);
    }

    cout << divideAndConquer(arr, 0, number-1);

    return 0;
}

//Test main to check if counting swaps works (test with bubblesort on random numbers)
//int main()
//{
//    srand(time(NULL));
//    int number;
//
//    number = rand() % 999999 + 1; //random number from 1 to 1 000 000
//
//    if(number < 1 || number > 1000000) return 0; //check borderline values
//
//    vector<int> arr;  //for merge sort
//
//    int *tab = new int [number]; //for bubblesort
//
//
//    int tmp;
//    for(int i=0; i<number; i++)
//    {
//        tmp = rand () %999999 + 1; //rand
//        if(tmp < 1 || tmp > 1000000) return 0; //check borderline values
//        arr.push_back(tmp);
//        tab[i] = tmp;
//    }
//
//    int q = divideAndConquer(arr, 0, number-1);
//    printf("%d\n", q);
//
//    int swap_count = 0;
//    bool swapped = true;
//    int j = 0;
//    int tmp2;
//
//    while(swapped)
//    {
//        swapped = false;
//        j++;
//
//        for(int i=0; i<number-j; i++)
//        {
//            if(tab[i] > tab[i+1])
//            {
//                tmp2 = tab[i];
//                tab[i] = tab[i+1];
//                tab[i+1] = tmp2;
//                swapped = true;
//                swap_count++;
//            }
//        }
//    }
//
//    cout <<"Test(bubble):" << swap_count << endl;
//
//    if ((q > swap_count))
//    {
//        cout << "Mergesort counts TOO MANY swaps  ;(" << endl;
//    }
//    else if ((q == swap_count))
//    {
//        cout << "BINGO !!! They're equal" << endl;
//    }
//    else
//    {
//        cout << "Counts too little ?  ;(" << endl;
//    }
//    return 0;
//}


