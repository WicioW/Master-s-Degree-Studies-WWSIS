package com.company;

public abstract class RaceTerran extends GameUnit {

    private String race = "Terran";

    abstract void giveCall();

    void giveRaceCall(){
        System.out.println("For the Earth!");
    }
}
