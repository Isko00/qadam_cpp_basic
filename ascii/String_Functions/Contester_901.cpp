#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

void iitu(char* c, bool* b) {
  for (int i = 0; i < strlen(c) - 3; i++) {
    if (c[i] == 'i' && c[i + 1] == 'i' && c[i + 2] == 't' && c[i + 3] == 'u')
        *b = true;
  }
}

int main()
{
  char c[1000];
  bool b = false;
  cin >> c;

  for (int i = 0 ; i < strlen(c); i++)
    c[i] = tolower(c[i]);

  iitu(c, &b);
  if (b)
    cout << "YES";
  else cout << "NO";
}
