//************************************************************//
//  Author:         Nicholas Gill                             //
//  Start Date:     07/29/2025                                //
//  File Name:      hypotenuse.cpp                            //
//  Version:        1.0.0                                     //
//  Description:    takes user input to name a triangle and   //
//  calculate its hypotenuse                                  //
//************************************************************//


#include <iostream>
#include <cmath>

int main(){
    std::string name;
    int a, b, c;

    std::cout << "Enter triangle name: ";
    std::getline(std::cin >> std::ws, name);
//getline gets everything up until '\n' including spaces while cin doesn;t take any whitespaces
//cin >> std::ws does something
    std::cout << "Enter side a: ";
    std::cin >> a;
    std::cout << "Enter side b: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
//pow(x, y) gives x to the power of y
    c = sqrt(a + b);
//sqrt(x) takes the square root of x

    std::cout << "Triangle name: " << name << "\n";
    std::cout << "Side c = " << c;

    return 0;
}