//************************************************************//
//  Author:         Nicholas Gill                             //
//  Start Date:     07/23/2025                                //
//  Version:        1.0.0                                     //
//  Description:    Lists out all ascii characters in a loop  //
//************************************************************//


#include<iostream>

int main(){
    int i = 0;

    for(i = 0; i < 128; i++){
        std::cout << "ASCII value of " << static_cast<char>(i) << " = " << i << "\n";
    }

    return 0;
}

// Apparently the default number of values is 128. I wonder how you get to 255? Or how to include other encodings?