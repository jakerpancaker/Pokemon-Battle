//
//  main.cpp
//  Pokemon Game
//
//  Created by Robert Burger on 11/20/19.
//  Copyright © 2019 Jake. All rights reserved.
//
//By Jake Burger, LC
//and Trevor Dameika, LB
//
//We pledge our honor that we have abided by the Stevens Honor Code.

#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <vector>
#include <sstream>
using namespace std;

class Pikachu{
//tackle, lightning bolt, thunder, and iron tail
public:
    int rivalHp=200;
    int playerHp=200;
    float tacklePower=25;
    float lightningBoltPower=79;
    float thunderPower=49;
    float ironTailPower=52;
                   
void Tackle(int attack=1){
    cout<< "Charmander's HP is now " <<rivalHp-tacklePower <<endl;
    rivalHp=rivalHp-tacklePower;
}
void LightningBolt(int attack=2){
    cout<< "Charmander's HP is now " <<rivalHp-lightningBoltPower <<endl;
    rivalHp=rivalHp-lightningBoltPower;
}
void Thunder(int attack=3){
    cout<< "Charmander's HP is now " <<rivalHp-thunderPower <<endl;
    rivalHp=rivalHp-thunderPower;
}
void IronTail(int attack=4){
    cout<< "Charmander's HP is now " <<rivalHp-ironTailPower <<endl;
    rivalHp=rivalHp-ironTailPower;
}
void PikachuEnemyAttack() {
        vector<float> list{tacklePower, lightningBoltPower, thunderPower, ironTailPower};
        int index=rand() % list.size();
        int value= list[index];
        playerHp=playerHp-value;
        cout << "Pikachu used  " << moves[index-1]<<endl;
        cout <<"Your HP is " <<playerHp <<endl;
    }
    string moves[4] ={"Tackle", "Lightning Bolt", "Thunder", "Iron Tail"};
};

class Bulbasaur{
//vine whip, grass storm, swipe, and drain
public:
    int rivalHp=200;
    int playerHp=200;
    float vineWhipPower=77;
    float grassStormPower=36;
    float swipePower=24;
    float drainPower=69;
void VineWhip(){
    cout<< "Pikachu's HP is now " <<rivalHp-vineWhipPower <<endl;
    rivalHp=rivalHp-vineWhipPower;
}
void GrassStorm(){
    cout<< "Pikachu's HP is now " <<rivalHp-grassStormPower <<endl;
    rivalHp=rivalHp-grassStormPower;
}
void Swipe(){
    cout<< "Pikachu's HP is now " <<rivalHp-swipePower <<endl;
    rivalHp=rivalHp-swipePower;
}
void Drain(){
    cout<< "Pikachu's HP is now " <<rivalHp-drainPower <<endl;
    rivalHp=rivalHp-drainPower;
}
void BulbasaurEnemyAttack() {
        vector<float> list{vineWhipPower, grassStormPower, swipePower, drainPower};
        int index=rand() % list.size();
        int value= list[index];
        playerHp=playerHp-value;
        cout << "Bulbasaur used  " << moves[index-1]<<endl;
        cout <<"Your HP is " <<playerHp <<endl;
    }
    string moves[4] ={"Vine Whip", "Grass Storm", "Swipe", "Drain"};
    
};

class Charmander{
//ember, bite, fire tail, and headbutt
public:
    int rivalHp=200;
    int playerHp=200;
    float emberPower=46;
    float bitePower=54;
    float fireTailPower=67;
    float headButtPower=35;
void Ember(){
    cout<< "Squirtle's HP is now " <<rivalHp-emberPower <<endl;
    rivalHp=rivalHp-emberPower;
}
void Bite(){
    cout<< "Squirtle's HP is now "<<rivalHp-bitePower<<endl;
    rivalHp=rivalHp-bitePower;
}
void FireTail(){
    cout<< "Squirtle's HP is now "<<rivalHp-fireTailPower<<endl;
    rivalHp=rivalHp-fireTailPower;
}
void HeadButt(){
    cout<< "Squirtle's HP is now "<<rivalHp-headButtPower<<endl;
    rivalHp=rivalHp-headButtPower;
}
void CharmanderEnemyAttack() {
    vector<float> list{emberPower, bitePower, fireTailPower, headButtPower};
    int index=rand() % list.size();
    int value= list[index];
    playerHp=playerHp-value;
    cout << "Charmander used  " << moves[index-1]<<endl;
    cout <<"Your HP is " <<playerHp <<endl;
}
    string moves[4] ={"Ember", "Bite", " Fire Tail", "Head Butt"};
};

class Squirtle{
//roll out, water gun, wave, hydro pump
public:
    int rivalHp=200;
    int playerHp=200;
    float rollOutPower=25;
    float waterGunPower=50;
    float wavePower=65;
    float hydroPumpPower=70;

void RollOut(){
    cout<< "Bulbasaur's HP is now "<<rivalHp-rollOutPower<<endl;
    rivalHp=rivalHp-rollOutPower;
}
void WaterGun(){
    cout<< "Bulbasaur's HP is now "<<rivalHp-waterGunPower<<endl;
    rivalHp=rivalHp-waterGunPower;
}
void Wave(){
    cout<< "Bulbasaur's HP is now "<<rivalHp-wavePower<<endl;
    rivalHp=rivalHp-wavePower;
}
void HydroPump(){
    cout<< "Bulbasaur's HP is now "<<rivalHp-hydroPumpPower<<endl;
    rivalHp=rivalHp-hydroPumpPower;
    }
void SquirtleEnemyAttack() {
    vector<float> list{rollOutPower, waterGunPower, wavePower, hydroPumpPower};
    int index=rand() % list.size();
    int value= list[index];
    playerHp=playerHp-value;
    cout << "Squirtle used  " << moves[index-1]<<endl;
    cout <<"Your HP is " <<playerHp <<endl;
}
    string moves[4] ={"Roll Out", "Water Gun", "Wave", "Hydro Pump"};
};

class Story {
private:
    string playerName="";
    string rivalName="";
    string playerPokemon="";
    string rivalPokemon="";
    int playerHp;
    int rivalHp;
    ofstream writer;
    ifstream reader;
    
public:
    Story() {
        playerName= "";
        rivalName= "";
        playerPokemon="";
        rivalPokemon="";
    }
    
    void menu() {
        int playerChoice = 0;
        
        cout << "Hello, I am Professor Trake. This world is inhabited by many creatures called Pokemon. What is your name?" <<endl;
        getline(cin, playerName);
        writer.open("PlayerName.txt", ios::app);
        writer <<playerName <<endl;
        writer.close();
        
        cout << "Hello, " <<playerName<< ". You know you have a rival. What is his/her name?" <<endl;
        getline(cin, rivalName);
        writer.open("PlayerName.txt", ios::app);
        writer <<rivalName <<endl;
        writer.close();
        
        cout << "Ok, " << rivalName << " is his/her name. Cool." <<endl;
        
        cout << "Now, your battle is about to start. Which Pokemon do you want?" <<endl;
        cout << "1- Charmander, the fire type" <<endl << "2- Squirtle, the water type" <<endl << "3- Bulbasaur, the grass type" <<endl << "4- Pikachu, the electric type" <<endl;
        
        while (bool a = true) {
        cout << "Which will it be?" <<endl;
        cin >> playerChoice;
        
        if (playerChoice == 1) {
            playerPokemon="Charmander";
            rivalPokemon="Squirtle";
            break;
        }
        
        else if (playerChoice == 2) {
            playerPokemon="Squirtle";
            rivalPokemon="Bulbasaur";
            break;
        }
        
        else if (playerChoice == 3) {
            playerPokemon="Bulbasaur";
            rivalPokemon="Pikachu";
            break;
        }
        
        else if (playerChoice == 4) {
            playerPokemon="Pikachu";
            rivalPokemon="Charmander";
            break;
        }
        
        else {
            cout << "Invalid choice." <<endl;
        }
        }
        
    }
    
    void battle() {

        int moveChoice = 0;
        cout <<"++++++++++ VS. ++++++++++" <<endl;
        cout << "You're battling against " << rivalName << ", who chose " << rivalPokemon <<endl;
        
        if (playerPokemon=="Charmander"){
            Charmander Fire;
            Squirtle Attack;
            while(Fire.rivalHp > 0 && Attack.playerHp > 0){
                moveChoice=0;
                while (moveChoice>4 || moveChoice<1) {
                cout << "Choose 1 for Ember"<< endl;
                cout<<"Choose 2 for Bite"<< endl;
                cout<<"Choose 3 for Fire Tail"<<endl;
                cout<<"Choose 4 for Headbutt"<< endl;
                cin>>moveChoice;
                }
                {
                    switch(moveChoice)
                    {
                case 1:
                    Fire.Ember();
                    break;
                case 2:
                    Fire.Bite();
                    break;
                case 3:
                    Fire.FireTail();
                    break;
                case 4:
                    Fire.HeadButt();
                    break;
                    }
                }
                Attack.SquirtleEnemyAttack();
            }
            
            //When Done
            if(Fire.rivalHp <= 0){
                cout << "You won" << endl;
            } else{
                cout << "You lost" << endl;
            }
      
        }
        
        if (playerPokemon=="Bulbasaur"){
            Bulbasaur Grass;
            Pikachu Attack;
            while(Grass.rivalHp>0 && Attack.playerHp >0) {
                moveChoice=0;
                while (moveChoice>4 || moveChoice<1) {
                cout << "Choose 1 for Vine Whip"<< endl;
                cout<<"Choose 2 for Grass Storm"<< endl;
                cout<<"Choose 3 for Swipe"<<endl;
                cout<<"Choose 4 for Drain"<< endl;
                cin>>moveChoice;
                }
                {
                    switch(moveChoice)
                    {
                case 1:
                    Grass.VineWhip();
                    break;
                case 2:
                            Grass.GrassStorm();
                            break;
                case 3:
                            Grass.Swipe();
                            break;
                case 4:
                            Grass.Drain();
                            break;
                    }
                }
                Attack.PikachuEnemyAttack();
            }
            if(Grass.rivalHp <= 0){
                    cout << "You won" << endl;
                       }
            else {
                    cout << "You Lost" << endl;
                       }

        }
        
        if (playerPokemon=="Squirtle"){
            Squirtle Water;
            Bulbasaur Attack;
            while(Water.rivalHp>0 && Attack.playerHp >0) {
                moveChoice=0;
                while (moveChoice>4 || moveChoice<1) {
                cout << "Choose 1 for Roll Out"<< endl;
                cout<<"Choose 2 for Water Gun"<< endl;
                cout<<"Choose 3 for Wave"<<endl;
                cout<<"Choose 4 for Hydro Pump"<< endl;
                cin>>moveChoice;
                }
                {
                    switch(moveChoice)
                    {
                case 1:
                    Water.RollOut();
                    break;
                case 2:
                            Water.WaterGun();
                            break;
                case 3:
                            Water.Wave();
                            break;
                case 4:
                            Water.HydroPump();
                            break;
                    }
                }
                Attack.BulbasaurEnemyAttack();
            }
            if(Water.rivalHp <= 0){
                    cout << "You won" << endl;
                       }
            else {
                    cout << "You Lost" << endl;
                       }

        }
        
        if (playerPokemon=="Pikachu"){
            Pikachu Electricity;
            Charmander Attack;
            while(Electricity.rivalHp>0 && Attack.playerHp >0) {
                moveChoice=0;
                while (moveChoice>4 || moveChoice<1) {
                cout << "Choose 1 for Tackle"<< endl;
                cout<<"Choose 2 for Lightning Bolt"<< endl;
                cout<<"Choose 3 for Thunder"<<endl;
                cout<<"Choose 4 for Iron Tail"<< endl;
                cin>>moveChoice;
                }
                {
                    switch(moveChoice)
                    {
                case 1:
                    Electricity.Tackle();
                    break;
                case 2:
                    Electricity.LightningBolt();
                    break;
                case 3:
                    Electricity.Thunder();
                    break;
                case 4:
                    Electricity.IronTail();
                    break;
                
                    }
                }
                Attack.CharmanderEnemyAttack();
                
            }
            if(Electricity.rivalHp <= 0){
                           cout << "You won" << endl;
                       }
            else{
                           cout << "You Lost" << endl;
                       }
        }
}
};

int main() {

    
    Story save1;
    save1.menu();
    save1.battle();
    
    return 0;
}

