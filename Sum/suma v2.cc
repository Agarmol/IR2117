#include <iostream>

int main()
{
    int num, sum= 0;
    std::cout<<"Enter a number: ";
    std::cin >> num;
    for(int i= 1; i <= num; i++){
        sum = sum+i;
    }
    std::cout<< "La suma entre 1 y " << num << " es :" << sum;
    
    return 0;
}
