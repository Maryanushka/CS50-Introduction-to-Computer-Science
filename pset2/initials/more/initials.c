#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
//programm input string with spaces or not anyway. output only first
//character of words
int main()
{
    string name = get_string();
    if (name != NULL)
    {
        for (int i = 0; i < strlen(name); i++)
        {
            if ((i == 0 || name[i - 1] == ' ') && name[i] != ' ')
            {
                printf("%c", toupper(name[i]));
            }
        }
        printf("\n");
    }

    return 0;
}

