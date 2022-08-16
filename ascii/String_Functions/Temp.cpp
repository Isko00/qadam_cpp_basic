
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char n[100] = "The weather was wonderful";

    char *ptr;

    char* pointers[4];

    ptr = strtok(n, " ");

    int index = 0;

   while (ptr != NULL)
   {
       pointers[index++] = ptr;
       ptr = strtok(NULL, " ");
   }

    for (int i = 0 ; i < index; i++)
        cout << pointers[i] << endl;





















    /*int counter = 0;
    while(ptr != NULL)
    {
        counter++;
        cout<<ptr<<endl;
        ptr = strtok(NULL, " ");
    }

    cout<<counter<<endl;*/

    return 0;
}
