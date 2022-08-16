#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void mostRecent(char *text, char *word)
{
    char *ptr;
    ptr = strtok(text, " ");

    char* pointers[500];
    int index = 0;

    while(ptr != NULL)
    {
        pointers[index++] = ptr;
        ptr = strtok(NULL, " ");
    }

    word = pointers[index - 1];
    // word -> 'C' -> "CAN?"
    for (int i = 0; i < strlen(word); i++)
    {
        *(word + i) = toupper(*(word + i));

        if (i == strlen(word) - 1)
        {
            if (*(word + i) < 65 || *(word + i) > 90)
                *(word + i) = '\0';
        }

    }


    cout << word << endl;
}

int main()
{
    char sentence[1000];
    cin.getline(sentence, 1000);

    char* last_word = NULL;

    mostRecent(sentence, last_word);

    return 0;
}
