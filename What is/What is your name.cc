#include <iostream>

int main()
{
    std::string nom;
    
    std::cout<<"What is your name?" << std::endl;
    
    std::cin >> nom;
    
    std::cout<< "Hello " << nom << "!" << std::endl;
    
    return 0;
}
