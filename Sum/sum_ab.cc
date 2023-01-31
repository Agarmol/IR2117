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
    do{
        std::cout << "Enter a number higher than 0 for a: ";
        std::cin >> a;
    }
    while(a < 1);
    do{
        std::cout << "Enter a number higher than 0 for b: ";
        std::cin >> b;
    }
    while(b < 1);
    sum = Sumv3(a, b);
    std::cout<< "La suma entre " << a << " y " << b << " es :" << sum;
    
    return 0;
}

