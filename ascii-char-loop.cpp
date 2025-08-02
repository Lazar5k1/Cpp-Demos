//************************************************************//
//  Author:         Nicholas Gill                             //
//  Start Date:     07/23/2025                                //
//  Version:        1.1.0                                     //
//  Description:    Lists out all ascii characters in a loop  //
//************************************************************//


#include<iostream>

int main(){
    int i = 0;

    for(i = 0; i < 128; i++){
        std::cout << "ASCII value of " << (char) i << " = " << i << "\n";
//                                        use this instead of staticcast cuz its easier
    }

    return 0;
}

// Apparently the default number of values is 128. I wonder how you get to 255? Or how to include other encodings?