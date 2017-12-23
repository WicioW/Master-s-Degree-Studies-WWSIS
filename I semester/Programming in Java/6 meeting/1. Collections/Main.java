package com.company;

import java.util.ArrayList;
import java.util.Collection;

public class Main {

    public static void main(String[] args) {

    Collection<Integer> numbers = new ArrayList<Integer>();

        numbers.add(1);
        numbers.add(2);
        numbers.add(21);
        numbers.add(13);
        numbers.add(8);
        numbers.add(7);
        numbers.add(3);
        numbers.add(2);
        numbers.add(45);
        numbers.add(23);
        numbers.add(8);

        for(Integer tmp : numbers)
        {
            if(tmp%2==0)
            {
                System.out.println(tmp);
            }
        }

    }
}
