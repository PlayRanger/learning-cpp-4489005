// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5; //single line comment, variables should not be global when possible.

/*
    Multi-
    line
    comment.
*/

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    std::cout << "Hi There!" << std::endl;
    std::cout << "The value of a = " << a << std::endl;
    std::cout << "The value of b = " << b << std::endl;
    std::cout << "The value of my flag = " << my_flag << std::endl;
    my_flag = true;
    std::cout << "The value of !my flag = " << my_flag << std::endl;
    std::cout << "The value of a + b = " << a + b << std::endl;
    std::cout << "The value of b - a = " << b - a << std::endl;
    unsigned positive;
    positive = b - a;
    std::cout << "The value of b - a in an unsigned int = " << positive << std::endl;
   
    std::cout << std::endl << std::endl;
    return (0);
}
