package com.company;

public class Zealot extends RaceProtoss{

    private int requiredMinerals = 100;
    private int requiredVespeneGas = 0;
    private int lifePoints = 100;
    private int armorPoints = 1;
    private int shieldPoints = 50;

    private  String unitName = "Zealot";

    void giveCall(){
        System.out.println("I am " + unitName + "!");
    }

}
