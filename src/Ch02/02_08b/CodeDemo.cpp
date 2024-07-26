// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
// #define AGE_LENGTH 4

int main(){
    const size_t AGE_LENGTH = 4;

    int age[AGE_LENGTH];
    float temp[] = {31.4, 32.2, 38.5};

    age[0] = 48;
    age[1] = 45;
    age[2] = 42;
    age[3] = 36;

    std::cout << "The length of the Array is " << AGE_LENGTH << " elements" << std::endl;
    std::cout << "The Age of the first person (age[0]) is: " << age[0] << std::endl;
    std::cout << "The Age of the second person (age[1]) is: " << age[1] << std::endl;
    std::cout << "The Age of the third person (age[2]) is: " << age[2] << std::endl;
    std::cout << "The Age of the fourth person (age[3]) is: " << age[3] << std::endl;
    std::cout << std::endl;
    std::cout << "The first temp (temp[0]) is: " << temp[0] << " deg C" << std::endl;
    std::cout << "The second temp (temp[1]) is: " << temp[1] << " deg C" << std::endl;
    std::cout << "The third temp (temp[2]) is: " << temp[2] << " deg C" << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
