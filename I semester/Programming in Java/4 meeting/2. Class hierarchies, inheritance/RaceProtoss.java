package com.company;

public abstract class RaceProtoss extends GameUnit{

    private int shieldPoints;

    private String race = "Protoss";

    abstract void giveCall();

    void giveRaceCall(){
        System.out.println("For Aiur!");
    }
}
