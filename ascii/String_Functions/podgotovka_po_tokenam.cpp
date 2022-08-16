#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

int main()
{

    char c[100];
    cin.getline(c, 100);

    char *ptr;

    ptr = strtok(c, " ");

    while(ptr != NULL)
    {
        cout<<ptr<<endl;
        ptr = strtok(NULL, " ");
    }

    return 0;
}
