package com.company;

public class Osoba {

    public String imie;

    public Osoba(String imie) {
        this.imie = imie;
    }

    public void przedstawSie() {
        System.out.println("Witaj, jestem osoba, mam na imie " + this.imie);
    }
}
