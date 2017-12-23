package com.company;

public class Hydralisk extends RaceZerg {

    private int requiredMinerals = 100;
    private int requiredVespeneGas = 50;
    private int lifePoints = 80;
    private int armorPoints = 0;

    private String unitName = "Hydralisk";

    void giveCall(){
        System.out.println("I am " + unitName + "!");
        //System.out.println("My life is: " + lifePoints);
    }

}
