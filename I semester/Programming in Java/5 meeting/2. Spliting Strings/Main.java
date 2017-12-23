package com.company;

public class Main {

    public static void main(String[] args) {

        String[] array = new String[2];
        array[0] = "ACDC";
        array[1] = "Queen";

        int[] tab = new int[2];
        tab[0] = array[0].length() / 2;
        tab[1] = array[1].length() / 2;

        System.out.println(array[0].substring(0, tab[0]) + array[1].substring(tab[1]));
    }
}
