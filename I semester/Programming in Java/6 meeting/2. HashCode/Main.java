package com.company;

import java.util.HashSet;
import java.util.Set;

public class Main {

    public static void main(String[] args) {

        Set<Tag> tagi = new HashSet<Tag>();
        tagi.add(new Tag("nowy"));
        tagi.add(new Tag("nowy"));
        tagi.add(new Tag("nowy"));
        tagi.add(new Tag("przeczytane"));

        if(tagi.size()==2)
        {
            System.out.println("Dobra implementacja");
        }
        else
        {
            System.out.println("Sprawdź jeszcze raz implementację");
        }
    }
}
