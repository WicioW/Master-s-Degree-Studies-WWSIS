package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        String[] names = new String[5];

        Scanner read = new Scanner(System.in);

        for(int i=0; i<names.length; i++)
        {
            System.out.print("Podaj imie: ");
            //System.out.print("Write a name: ");
            names[i] = read.nextLine();
        }

        int numberOfWomen = 0;
        for(int j=0; j<names.length; j++)
        {
            int lengthOfName = names[j].length();

            if(names[j].startsWith("a", lengthOfName-1))
            {
                numberOfWomen++;
            }
        }

        System.out.print(numberOfWomen + " kobieta(y): ");
        int tmp = 0;

        for(int j=0; j<names.length; j++)
        {
            int lengthOfName = names[j].length();

            if(names[j].startsWith("a", lengthOfName-1))
            {
               // tmp++;

                if(tmp < numberOfWomen-1)
                {
                    System.out.print(names[j] + ", ");
                    tmp++;
                }
                else
                {
                    System.out.print(names[j] + ".");
                }
            }
        }
        int numberOfMen = 5 - numberOfWomen;

        System.out.print(" " + numberOfMen + " mężczyzn(a): ");
        int tmp2 = 0;

        for(int j=0; j<names.length; j++)
        {
            int lengthOfName = names[j].length();

            if(names[j].startsWith("a", lengthOfName-1))
            {
            }
            else
            {
                if(tmp2 < numberOfMen-1)
                {
                    System.out.print(names[j] +", ");
                    tmp2++;
                }
                else
                {
                    System.out.print(names[j] +".");
                }
            }
        }
    }
}
