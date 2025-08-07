//************************************************************//
//  Author:         Nicholas Gill                             //
//  Start Date:     08/5/2025                                 //
//  Version:        1.0.0                                     //
//  Description:    shows different uses of strings           //
//************************************************************//

#include<iostream>

int main(){
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::cout << "sentence length: " << sentence.length() << "\n";

    if(sentence.empty()){
        std::cout << "sentence is empty" << "\n";
    }
    else{
        std::cout << "sentence is not empty" << "\n";
    }

    sentence.append("APPEND");
    std::cout << sentence << "\n";

    for(int i = 0; i < sentence.length(); i++){
        std::cout << "pos" << i << ": " << sentence.at(i) << "\n";
    }

    sentence.insert(3, "INSERT");
    std::cout << sentence << "\n";

    std::cout << sentence.find('k') << "\n";

    sentence.erase(3, 8);
    std::cout << sentence << "\n";

    sentence.clear();
    std::cout << sentence << "\nsentence is cleared";

    return 0;
}

//how tf do streams work???
//also getline is pretty simple it's just that streams and strings and addresses and stuff are weird