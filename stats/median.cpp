#include "median.hpp"
int main(int argc, char** argv) {
  doubble m=0, s=0;
  int n=0, element;
  std::vector<int> elements;
  std::cin >> element;
  while (not std::cin.eof()) {
    elements.push_back(element);
    n += 1;
    std::cin >> element;
    }
    
       //Si la muestra es impar
    if(n%2!=0){
        m=elements[n/2];
    }else{
        m=(elements[n/2]+elements[n/2+1])/2;
    }
    
    //Number of elements is n
    std::cout<<"Number of elements: "<< n <<endl;
    //Sorting de vector
     for(int i=0; i<sizeof(elements)-1; i++){
        for (int j=0; j<n-i-1;j++){
            if(elements[j]>elements[j+1]){
                swap(elements[j], elements[j+1]);
            }
        }
    }

    //Printear el vector ordenado
    cout<<"Los elementos ordenados son: ";
    for(int x=0; x<elements.size(); x++){
        cout<<elements[x];
    }
    //Printear la mediana
    std::cout << "Median: " << m << std::endl;
    return 0;
}
