package com.company;

public class Kobieta extends Osoba {

    public Kobieta(String imie) {
        super(imie);
    }

    public void przedstawSie() {
        System.out.println("Witaj, jestem kobieta, mam na imie " + this.imie);
    }
}
