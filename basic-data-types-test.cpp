//************************************************************//
//  Author:         Nicholas Gill                             //
//  Start Date:     07/23/2025                                //
//  End Date:       07/??/2025                                //
//  File Name:      basic-data-typess.cpp                     //
//  Version:        1.0.0                                     //
//  Description:    Runs a few tests on the basic data types  //
//************************************************************//


#include<iostream>

int main(){
    int num_live_shells = 7;
    int num_blank_shells = 3;

    char alive = 'A';
    char dead = 'D';

    double chance_alive = 0.3;
    double chance_dead = 0.7;
    
    std::string alive_text = "You shot a blank.";
    std::string dead_text = "You shot a live round.";

    std::cout << "\n";
    
    std::cout << "Blank shells = " << num_blank_shells << "\n";
    std::cout << "Live shells = " << num_live_shells << "\n\n";
    std::cout << "alive = " << alive << "   dead = " << dead << "\n\n";
    std::cout << "chance to live = " << chance_alive << "\n";
    std::cout << "chance to die =  " << chance_dead << "\n\n";
    std::cout << chance_alive * 100 << "% " << alive_text << "\n";
    std::cout << chance_dead *100 << "% " << dead_text << "\n\n";

    return 0;
}