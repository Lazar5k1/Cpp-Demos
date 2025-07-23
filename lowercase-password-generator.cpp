//**********************************************************//
//  Author:         Nicholas Gill                           //
//  Start Date:     07/23/2025                              //
//  End Date:       07/23/2025                              //
//  File Name:      lowercase-password-generator.cpp        //
//  Version:        1.0.0                                   //
//  Description:    generates all lowercase 6 character     //
//  Passwords.                                              //
//**********************************************************//


#include<iostream>

int main(){
    int pos1, pos2, pos3, pos4;
    pos1 = pos2 = pos3 = pos4 = 97;

// 97 = a, 122 = z
    for(pos1 = 97; pos1 < 123; pos1++){
        std::cout << static_cast<char>(pos1) << static_cast<char>(pos2) << static_cast<char>(pos3) << static_cast<char>(pos4) << "\n";
// Output each character
        if(pos1 == 122 && pos2 < 122){
            pos2++;
            pos1 = 96;
        }
        if(pos1 == 122 && pos2 == 122 && pos3 < 122){
            pos3++;
            pos2 = 97;
            pos1 = 96;
        }
        if(pos1 == 122 && pos2 == 122 && pos3 == 122 && pos4 < 122){
            pos4++;
            pos3 = 97;
            pos2 = 97;
            pos1 = 96;
        }
    } 
    
    return 0;
}