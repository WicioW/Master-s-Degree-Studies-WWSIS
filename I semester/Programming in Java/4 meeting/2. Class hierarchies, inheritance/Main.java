package com.company;

public class Main {

    public static void main(String[] args) {

        Hydralisk hydraWydra = new Hydralisk();
        Mutalisk mutalisek = new Mutalisk();

        SiegeTank tank = new SiegeTank();
        WidowMine wdowa = new WidowMine();

        Zealot zelot = new Zealot();
        Colossus kolos = new Colossus();

        hydraWydra.giveRaceCall();
        hydraWydra.giveCall();
        System.out.println("");

        mutalisek.giveRaceCall();
        mutalisek.giveCall();
        System.out.println("");

        tank.giveRaceCall();
        tank.giveCall();
        System.out.println("");

        wdowa.giveRaceCall();
        wdowa.giveCall();
        System.out.println("");

        zelot.giveRaceCall();
        zelot.giveCall();
        System.out.println("");

        kolos.giveRaceCall();
        kolos.giveCall();

    }
}
