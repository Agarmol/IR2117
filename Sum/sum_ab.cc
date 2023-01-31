#include <iostream>

int Sumv3(int a, int b){
    int sum = 0;
    for(int i= a; i <= b; i++){
        sum = sum+i;
    }
    return sum;
}

int main()
{
    int a, b, sum= 0;
    std::cout<<"Enter a number a: ";
    std::cin >> a;
    std::cout<<"Enter a number b: ";
    std::cin >> b;
    sum = Sumv3(a, b);
    std::cout<< "La suma entre " << a << " y " << b << " es :" << sum;
    
    return 0;
}
