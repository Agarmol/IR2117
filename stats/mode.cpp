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
    
    std::cout << "Mode: " << m << std::endl;
    return 0;
}
