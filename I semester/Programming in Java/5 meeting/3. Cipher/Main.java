package com.company;

public class Main {

    public static void main(String[] args) {

        String password = "thispasswordistooeasy";

        for(int i=0; i<password.length(); i++)
        {
            password = password.replace("t", "7");
            password = password.replace("h", "|-|");
            password = password.replace("i", "1");
            password = password.replace("s", "5");
            password = password.replace("p", ",o");
            password = password.replace("a", "@");
            password = password.replace("w", "vv");
            password = password.replace("o", "0");
            password = password.replace("r", "_");
            password = password.replace("d", "o|");
            password = password.replace("e", "#");
            password = password.replace("y", "x");
        }

        //System.out.println(password);

        StringBuffer intro = new StringBuffer("Zaszyfrowany tekst to: ");
        //StringBuffer intro = new StringBuffer("Encrypted text is: ");
        StringBuffer buff = intro.append(password);
        System.out.println(buff);



    }
}
