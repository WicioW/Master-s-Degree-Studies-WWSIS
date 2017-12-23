package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        String pesel;
        Scanner read = new Scanner(System.in);

        System.out.print("Podaj PESEL: ");
        //System.out.print("Write your PESEL number: ");
        pesel = read.nextLine();

        if(pesel.length() == 11)
        {
            String year = pesel.substring(0, 2);
            String month = pesel.substring(2,4);
            String day = pesel.substring(4,6);

            String s1 = day.concat(".");
            String s2 = s1.concat(month);
            String s3 = s2.concat(".");
            String s4 = s3.concat("19");
            String s5 = s4.concat(year);
            System.out.println(s5);

            String p1 = month.concat("/");
            String p2 = p1.concat(day);
            String p3 = p2.concat("/");
            String p4 = p3.concat("19");
            String p5 = p4.concat(year);
            System.out.println(p5);
        }
        else
        {
            System.out.println("Podano zły PESEL");
            //System.out.printl("Given PESEL number is wrong");
        }

    }
}
