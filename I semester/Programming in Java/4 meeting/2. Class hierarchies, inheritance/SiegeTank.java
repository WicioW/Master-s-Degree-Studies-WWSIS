package com.company;

public class SiegeTank extends RaceTerran {

    private int requiredMinerals = 150;
    private int requiredVespeneGas = 125;
    private int lifePoints = 160;
    private int armorPoints = 1;

    private String unitName = "Siege Tank";

    void giveCall(){
        System.out.println("I am " + unitName + "!");
    }

}
