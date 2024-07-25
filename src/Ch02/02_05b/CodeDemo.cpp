// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';
    auto g = "C++ rules!";

    std::cout << "The type of var a (" << a << ") = " << typeid(a).name() << std::endl;
    std::cout << "The type of var b (" << b << ") = " << typeid(b).name() << std::endl;
    std::cout << "The type of var c (" << c << ") = " << typeid(c).name() << std::endl;
    std::cout << "The type of var d (" << d << ") = " << typeid(d).name() << std::endl;
    std::cout << "The type of var e (" << e << ") = " << typeid(e).name() << std::endl;
    std::cout << "The type of var f (" << f << ") = " << typeid(f).name() << std::endl;
    std::cout << "The type of var g (" << g << ") = " << typeid(g).name() << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
