#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        return 1;
    }
    //get key from string convet to int using atoi() , #include <stdlib.h>
    int key = atoi(argv[1]);

    string text = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        //chek if the text[i] is word using isalpha , #include <ctype.h>
        if (isalpha(text[i]))
        {
            //chek if the text[i] is lowercase letter using islower() , #include <ctype.h>
            if (islower(text[i]))
            {
                printf("%c", (text[i] - 'a' + key) % 26 + 'a');
            }
            //chek if the text[i] is uppercase letter using isupper() , #include <ctype.h>
            else if (isupper(text[i]))
            {
            printf("%c", (text[i] - 'A' + key) % 26 + 'A');
            }
        }
        else
        {
            printf("%c", text[i]);
        }

    }
    //at the end print caret at the new line
    printf("\n");

}