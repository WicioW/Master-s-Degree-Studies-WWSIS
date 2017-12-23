package com.company;

public class Colossus extends RaceProtoss{

    private int requiredMinerals = 300;
    private int requiredVespeneGas = 200;
    private int lifePoints = 200;
    private int armorPoints = 1;
    private int shieldPoints = 150;

    private String unitName = "Colossus";

    void giveCall(){
        System.out.println("I am " + unitName + "!");
    }
}
