#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(int argc, char** argv) {
  doubble m=0, s=0;
  int n=0, element;
  std::vector<int> elements;
  std::cin >> element;
  while (not std::cin.eof()) {
    elements.push_back(element);
    n += 1;
    cin >> element;
    }
    
    //Count number of elements equal to whichever
    map<double,int> dicc;
    for(int i=0; i<elements.size();i++){
      int x=0;
        for(int j=0; j<elements.size();j++){
            if(elements[i]==elements[j]){
                x++;
            }
            dicc[i]=x;
        }
    }

    cout << "Mode: " << m << std::endl;
    return 0;
}
