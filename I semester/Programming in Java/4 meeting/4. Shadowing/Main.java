package com.company;

public class Main {

    public static void main(String[] args) {
        Osoba osoba = new Kobieta("Anna");
        //Osoba kobieta = osoba; //also works
        Kobieta kobieta = (Kobieta) osoba;
        kobieta.przedstawSie();

    }
}
