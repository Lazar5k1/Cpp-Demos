//************************************************************//
//  Author:         Nicholas Gill                             //
//  Start Date:     08/2/2025                                 //
//  Version:        1.0.0                                     //
//  Description:    shows general functionality of switches   //
//  and the tertiary operator                                 //
//************************************************************//

#include<iostream>

int main(){
    char answer;
    bool x = true;
    int guesses = 1;
    std::cout << "\nChoose a letter from A-D: ";

    while(x){
        std::cin >> answer;
        switch(answer){
            case 'A':
                std::cout << "Wrong answer, try again: ";
                break;
                guesses++;
            case 'a':
                std::cout << "Wrong answer, try again: ";
                break;
                guesses++;
            case 'B':
                std::cout << "Wrong answer, try again: ";
                break;
                guesses++;
            case 'b':
                std::cout << "Wrong answer, try again: ";
                break;
                guesses++;
            case 'C':
                std::cout << " You got it";
                x = false;
                break;
            case 'c':
                std::cout << " You got it";
                x = false;
                break;
            case 'D':
                std::cout << "Wrong answer, try again: ";
                break;
                guesses++;
            case 'd':
                std::cout << "Wrong answer, try again: ";
                break;
                guesses++;
            default:
                std::cout << "Please enter a letter from A-D, try again: ";
        }
    }

    guesses == 1 ? std::cout << " on your first try!" : std::cout << " after your first try!";
//     if this          do that                              else do this
// the tertiary operator is just a shorthand if else statement

    return 0;
}