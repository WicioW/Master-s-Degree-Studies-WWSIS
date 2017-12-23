package com.company;

public class Mutalisk extends RaceZerg{

    private int requiredMinerals = 100;
    private int requiredVespeneGas = 100;
    private int lifePoints = 120;
    private int armorPoints = 0;

    private String unitName = "Mutalisk";

    void giveCall(){
        System.out.println("I am " + unitName + "!");
    }
}
