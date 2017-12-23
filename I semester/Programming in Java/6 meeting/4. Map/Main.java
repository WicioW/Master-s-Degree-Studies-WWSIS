package com.company;

import java.util.*;

public class Main {

    public static void main(String[] args) {

        Map<Character, Integer> frequency = new HashMap<>();

        for(String element: listOfMonths())
        {
            for(int i=0; i<element.length(); i++)
            {
                if(frequency.containsKey(element.charAt(i))) //if letter exists
                {
                    Integer tmp = frequency.get(element.charAt(i));
                    tmp++;
                    frequency.put(element.charAt(i), tmp);

//                    System.out.print(element + " " + element.charAt(i) + "=" + tmp);
//                    System.out.println();
                }
                else { //new letter
                      frequency.put(element.charAt(i), 1);
//                    System.out.println(element + " " + element.charAt(i) + "=" + 1);
                }
            }
        }
        System.out.println("Statystyka:");
        System.out.println(frequency);

        System.out.println("Czy mapa zawiera literę 'ć' ?");
        System.out.println(frequency.containsKey('ć'));

        System.out.println("Czy istnieje litera, która występuje 13 razy?");
        System.out.println(frequency.containsValue(13));

    }

    private static List<String> listOfMonths()
    {
        List<String> months = new ArrayList<String>();
        months.add("styczeń");
        months.add("luty");
        months.add("marzec");
        months.add("kwiecień");
        months.add("maj");
        months.add("czerwiec");
        months.add("lipiec");
        months.add("sierpień");
        months.add("wrzesień");
        months.add("październik");
        months.add("listopad");
        months.add("grudzień");

        return months;
    }


}
