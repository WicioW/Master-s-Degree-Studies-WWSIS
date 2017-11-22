package com.company;
import java.util.Random;

public class Main {

    public static void main(String[] args) {

        int[] tab = {7, 5, 10, 1};

        System.out.println("Przykładowy ciąg do posortowania:");
        System.out.println("[7, 5, 10, 1]");

        sortuj(tab);

    }


    private static int[] sortuj(int[] tablica)
    {
        boolean swap = true;
        int j = 0;
        int tmp;

        while(swap)
        {
            swap = false;
            j++;

            for(int i=0; i<tablica.length-j; i++)
            {
                if(tablica[i] > tablica[i+1])
                {
                    tmp = tablica[i];
                    tablica[i] = tablica[i+1];
                    tablica[i+1] = tmp;
                    swap = true;
                }
            }

            if(swap == true)
            {
                for(int k=0; k<tablica.length; k++)
                {
                    System.out.print(tablica[k] + " ");
                }
                System.out.println();
            }
        }
        return tablica;
    }
}
