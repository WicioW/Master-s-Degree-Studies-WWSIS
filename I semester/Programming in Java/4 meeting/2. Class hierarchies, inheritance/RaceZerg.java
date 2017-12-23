package com.company;

public abstract class RaceZerg extends GameUnit {

    private String race = "Zerg";

    abstract void giveCall();

    void giveRaceCall(){
        System.out.println("For the Overmind!");
    }
}
