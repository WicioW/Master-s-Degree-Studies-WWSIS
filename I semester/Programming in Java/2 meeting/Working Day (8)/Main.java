package com.company;

public class Main {

    public static void main(String[] args) {

        String freeornot = null;

        for(int i=1; i<31; i++)
        {
            if(i%7==2 || i%7==3 || i==1 || i ==11 )
            {
                freeornot = "Wolny";
            }
            else{
                freeornot = "Pracujacy";
            }

            System.out.println(i + " Listopad - " + freeornot);
        }

    }
}
