package com.company;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Random;

public class Main {
    static Random rnd = new Random();

    public static void main(String[] args) {
        List<Integer> lista = generateRandomNumbers();

        Integer tmpMax = Collections.max(lista);
        Integer tmpMin = Collections.min(lista);
        System.out.println("Index max:" + lista.indexOf(tmpMax) + " value:" + tmpMax);
        System.out.println("Index min:" + lista.indexOf(tmpMin) + " value:" + tmpMin);

        Collections.sort(lista);
       // System.out.println(lista);
        List<Integer> lista2 = new ArrayList<Integer>();
        for(Integer tmp:lista)
        {
            if(tmp%2 == 0) {
                //System.out.print(tmp + " ");
                lista2.add(tmp);
            }
        }
        for(Integer tmp:lista)
        {
            if(tmp%2 == 1)
            {
                //System.out.print(tmp + " ");
                lista2.add(tmp);
            }
        }
        System.out.println("");

        System.out.println(lista2);
        Integer tmpMax2 = Collections.max(lista2);
        Integer tmpMin2 = Collections.min(lista2);
        System.out.println("Index max:" + lista2.indexOf(tmpMax2) + " value:" + tmpMax2);
        System.out.println("Index min:" + lista2.indexOf(tmpMin2) + " value:" + tmpMin2);

    }


    private static List<Integer> generateRandomNumbers()
    {
        List<Integer> list = new ArrayList<Integer>();
        int i = 0;
        while(i<10)
        {
            list.add(rnd.nextInt(100));
            i++;
        }
        return list;
    }




}
