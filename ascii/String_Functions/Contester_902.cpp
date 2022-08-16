#include <iostream>
#include <cstring>
using namespace std;

void replace(char *source, char *dest) {
  for (int i = 0; source[i] != '\0'; i++) {
    if (source[i] == '!')
        dest[i] = '.';
    else dest[i] = source[i];
  }
  dest[strlen(source)] = '\0';
}
int main()
{
  char source[1000];
  char dest[1000];
  cin.getline(source, 1000);
  replace(source, dest);
  cout << dest << endl;
}
