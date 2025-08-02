//************************************************************//
//  Author:         Nicholas Gill                             //
//  Start Date:     07/28/2025                                //
//  Version:        1.0.0                                     //
//  Description:    shows general functionality of typedef    //
//************************************************************//

#include<iostream>
#include<vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef is useful for really long dataypes like this one since you can make them way shorter
//also, it's a best practice to put a _t after an alias
typedef int number_t;
typedef int another_t;
//you can make multiple aliases of the same datatype
using decimal_t = double;
using text_t = std::string;
//'using' is more popular and apparently better for templates or whatever so use using instead of typedef

int main(){
    std::vector<std::pair<std::string, int>> pair0;
    pairlist_t pair1;

    int num0 = 0;
    number_t num1 = 1;
    another_t num2 = 2;

    double dec0 = 0.1;
    decimal_t dec1 = 1.1;
    text_t word = "word";
//all of these are essentially doing the same thing

std::cout << num0 << "\n" << num1 << "\n" << num2 << "\n";
std::cout << dec0 << "\n" << dec1 << "\n" << word;


    return 0;
}