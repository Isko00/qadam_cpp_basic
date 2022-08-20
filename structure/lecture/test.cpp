#include <iostream>
#include <string>
using namespace std;

struct Table {
  int characteristics[2] = {4, 5};
  
};

int main() { 
  Table table1;
  cout << table1.characteristics[0] << endl; 
  
  Table table3;
  cout << table1.characteristics[1] << endl; 
}
