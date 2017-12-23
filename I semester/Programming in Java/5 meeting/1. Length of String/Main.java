package com.company;

public class Main {

    public static void main(String[] args) {

        String[] array = new String[3];

        array[0] = " Girl has a cat ";
        array[1] = " Andrew has a dog ";
        array[2] = " Beatris has a tree in the garden ";

        for(int i = 0; i<array.length; i++)
        {
            array[i] = array[i].trim();
        }

        for(int j=50; j>=0; j--)
        {
            if (array[0].length() == j) System.out.println(array[0]);
            if (array[1].length() == j) System.out.println(array[1]);
            if (array[2].length() == j) System.out.println(array[2]);
        }
    }
}
