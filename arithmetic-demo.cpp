//************************************************************//
//  Author:         Nicholas Gill                             //
//  Start Date:     07/28/2025                                //
//  File Name:      arithmetic-demo.cpp                       //
//  Version:        1.0.0                                     //
//  Description:    shows general functionality of arithmetic //
//  operators                                                 //
//************************************************************//


#include<iostream>

int main(){
    int bullets = 7;
    int num_health = 100;
    double dec_health = 100;

    std::cout << "\n";
    bullets = bullets + 2;
    std::cout << "\n" << "bullets = " << bullets;
    bullets += 2;
    std::cout << "\n" << "bullets = " <<  bullets;
    bullets++;
    std::cout << "\n" << "bullets = " <<  bullets;

    std::cout << "\n";
    bullets = bullets - 2;
    std::cout << "\n" << "bullets = " <<  bullets;
    bullets -= 2;
    std::cout << "\n" << "bullets = " <<  bullets;
    bullets--;
    std::cout << std::endl << "bullets = " <<  bullets;
    std::cout << "\n" << "num_health = " <<  num_health;
    std::cout << "\n" << "dec_health = " <<  dec_health;
    num_health /= 6;
    dec_health /= 6;
    std::cout << "\n" << "num_health / 6 = " <<  num_health;
    std::cout << "\n" << "dec_health / 6 = " <<  dec_health;
    //gets truncated

    std::cout << "\n";
    bullets = bullets * 2;
    std::cout << "\n" << "bullets = " <<  bullets;
    bullets *= 2;
    std::cout << "\n" << "bullets = " <<  bullets;

    std::cout << "\n";
    bullets = bullets / 2;
    std::cout << "\n" << "bullets = " <<  bullets;
    bullets /= 2;
    std::cout << "\n" << "bullets = " <<  bullets;

    std::cout << "\n";
    std::cout << "\n" << "bullets = " <<  bullets;
    std::cout << std::endl << "bullets/2 = " <<  bullets % 2;
    bullets++;
    std::cout << "\n" << "bullets = " <<  bullets;
    std::cout << std::endl << "bullets/2 = " <<  bullets % 2;
//even vs odd

//order of precedence
//parenthesis
//multiplication and division
//addition and subtraction

    std::cout << "\n\n\n" << "order of precedence demo" << "\n";
    int num0 = 7 - 8 / 2 + 4;
//seen as 7 + -(8 / 2) + 4 = 7, not 7 + -((8 / 2) + 4) = -1
    int num1 = 1 / 2;
//truncate
    std::cout << "\n" << "7 - 8 / 2 + 3 * 4 = " << num0;
    std::cout << "\n" << "1 / 2" << num1;


    return 0;
}