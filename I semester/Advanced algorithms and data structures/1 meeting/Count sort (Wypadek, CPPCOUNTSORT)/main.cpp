#include <iostream>

using namespace std;

int main()
{
   int number;
   cin >> number;

   int *tab = new int(number);

   for(int i=0; i<number; i++)
   {
       cin >> tab[i];
   }

   for(int l=1; l<number; l++)
   {
       for(int k=1; k<number; k++)
       {
           if (tab[k-1] > tab [k])
           {
               int tmp;
                tmp = tab[k];
                tab[k] = tab[k-1];
                tab[k-1] = tmp;
           }
        }
   }

   for(int j=0; j<number; j++)
   {
       cout << tab[j] << " ";
   }
    return 0;
}
