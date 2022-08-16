#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char n[100] = "The weather was wonderful";

    char *ptr;
    ptr = strtok(n, " ");
    int counter = 0;
    while(ptr != NULL)
    {
        counter++;
        cout<<ptr<<endl;
        ptr = strtok(NULL, " ");
    }

    cout<<counter<<endl;

    return 0;
}
