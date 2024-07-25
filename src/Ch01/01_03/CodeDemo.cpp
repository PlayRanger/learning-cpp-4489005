// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Hello! My name is Compooterax. What is your name?" << std::endl;
    std::cout << std::flush;
    std::cin >> str;
    std::cout << "Well, " << str << " is an odd name for a compeeter, but I think we can be friends, " << str << "!";

    std::cout << std::endl << std::endl;
    return (0);
}
