//************************************************************//
//  Author:         Nicholas Gill                             //
//  Start Date:     07/28/2025                                //
//  File Name:      arithmetic-demo.cpp                       //
//  Version:        1.2.0                                     //
//  Description:    shows general functionality of arithmetic //
//  operators                                                 //
//************************************************************//


#include<iostream>
#include<cmath>

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
    int num2 = 8 / 4 * 2;
//C++ sees multiplication and division on the same level and goes from left to right
    std::cout << "\n" << "7 - 8 / 2 + 3 * 4 = " << num0;
    std::cout << "\n" << "1 / 2 = " << num1;
    std::cout << "\n" << "8 / 4 * 2 = " << num2;


//some cmath functions
    std::cout << "\n\n" << "pow(4, 2) = " << pow(4, 2);
//pow(x, y) returns x to the power of y
    std::cout << "\n" << "sqrt(16) = " << sqrt(16);
//sqrt(x) takes the square root of x
    std::cout << "\n" << "max(5, 6) = " << std::max(5, 6);
//max(x, y) returns the larger of the two numbers
    std::cout << "\n" << "min(5, 6) = " << std::min(5, 6);
//min(x, y) returns the smaller of the two numbers
    std::cout << "\n" << "abs(-2) = " << abs(-2);
//abs(x) returns the absolute value of x
    std::cout << "\n" << "round(2.2) = " << round(2.2);
    std::cout << "\n" << "round(2.5) = " << round(2.5);
//round(x) rounds x to the nearest whole number
    std::cout << "\n" << "ceil(3.1) = " << ceil(3.1);
//ceil(x) rounds to the next higher integer
    std::cout << "\n" << "floor(3.8) = " << floor(3.8);
//floor(3.8) rounds to the next lower integer

    return 0;
}