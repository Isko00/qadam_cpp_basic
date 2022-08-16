#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char sentence[1000];
    cin.getline(sentence, 1000);

    char *ptr;
    ptr = strtok(sentence, " ");

    char* words[500];
    int index = 0;

    while(ptr != NULL)
    {
        words[index++] = ptr;
        ptr = strtok(NULL, " ");

        for (int i = 0; i < index; i++)
            if (words[i] == ptr)
            {
                ptr = strtok(NULL, " ");
                break;
            }
    }

    for (int i = 0; i < index; i++)
        cout << words[i] << " ";



    return 0;
}

