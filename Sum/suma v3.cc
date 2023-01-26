#include <iostream>

int Sumv3(int num){
    int sum = 0;
    for(int i= 1; i <= num; i++){
        sum = sum+i;
    }
    return sum;
}

int main()
{
    int num, sum= 0;
    std::cout<<"Enter a number: ";
    std::cin >> num;
    sum = Sumv3(num);
    std::cout<< "La suma entre 1 y " << num << " es :" << sum;
    
    return 0;
}

