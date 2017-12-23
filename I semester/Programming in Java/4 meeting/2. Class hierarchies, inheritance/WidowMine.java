package com.company;

public class WidowMine extends RaceTerran {

    private int requiredMinerals = 75;
    private int requiredVespeneGas = 25;
    private int lifePoints = 90;
    private int armorPoints = 0;

    private String unitName = "Widow Mine";

    void giveCall(){
        System.out.println("I am " + unitName + "!");
    }
}
