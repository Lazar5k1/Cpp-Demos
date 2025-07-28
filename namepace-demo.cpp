//************************************************************//
//  Author:         Nicholas Gill                             //
//  Start Date:     07/28/2025                                //
//  File Name:      namespace-demo.cpp                        //
//  Version:        1.0.0                                     //
//  Description:    shows general functionality of namespaces //
//************************************************************//


#include <iostream>

void shortcut();

namespace space2{
    int num = 2;
}

namespace space1{
    int num = 1;
}

int main(){
    int num = 0;

    std::cout << "\n\n";
    std::cout << "namespace::main = " << num << "\n";
    std::cout << "namespace::space1 = " << space1::num << "\n";
    std::cout << "namespace::space2 = " << space2::num << "\n";
//uses the same name for multiple entities since they're using different namepacess

    shortcut();

//  cout << "test";
//using only works on code below it and within the same function so the previous line wouldn't work

    return 0;
}

void shortcut(){
    using namespace space1;
//no need to resolve num cuz of uing namespace
    using std::cout;
//no need to resolve cout cuz of using, but std:: must be applied to other functions
    std::string word = "word";

    cout << "\nnum = " << num << "\n";
    cout << "num = " << space2::num << "\n";
//must specify namespace for onse not being used
}