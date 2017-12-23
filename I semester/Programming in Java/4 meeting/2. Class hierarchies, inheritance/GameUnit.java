package com.company;

public abstract class GameUnit {
    private int requiredMinerals;
    private int requiredVespeneGas;
    private int lifePoints;
    private int armorPoints;

    private String race;
    private String unitName;

    abstract void giveRaceCall();
}
