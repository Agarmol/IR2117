#include <iostream>
#include <vector>
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
    
      //Count first number
    int x;
    for(int i=0; i<elements.size();i++){
        if(elements[0]==elements[i]){
            x++;
        }
    }

    std::cout << "Mode: " << m << std::endl;
    return 0;
}
