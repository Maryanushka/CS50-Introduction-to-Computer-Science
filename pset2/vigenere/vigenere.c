#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (!(argc == 2))
    {
        return 1;
    }
    for (int i = 0, l = strlen(argv[1]); i < l; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            return 1;
        }
    }
    //get key from string convet to int using atoi() , #include <stdlib.h>
    string keyStr = argv[1];
    string text = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0, j = 0, textLength = strlen(text),keyLen = strlen(argv[1]); i < textLength; i++)
    {
        //
        //chek if the text[i] is word using isalpha , #include <ctype.h>
        if (isalpha(text[i]))
        {
            // keyStrLower is the word of i-th element of key string. If i will equals to keyString lengths using mod we reset i to zero.
            // we always use lower charachter and for getting nuber of charachter in array we minus the lowercase 'a'
            //keyStrlower = tolower(keyStr[j % keyLen]) - 'a';
            //chek if the text[i] is lowercase letter using islower() , #include <ctype.h>
            if (islower(text[i]))
            {
                printf("%c", ((text[i] - 'a') + (keyStr[j % keyLen] - 'a')) % 26 + 'a');
            }
            //chek if the text[i] is uppercase letter using isupper() , #include <ctype.h>
            else if (isupper(text[i]))
            {
                printf("%c", ((text[i] - 'A') + (keyStr[j % keyLen] - 'A')) % 26 + 'A');
            }
        }
        else
        {
            printf("%c", text[i]);
        }
        j++;

    }
    //at the end print caret at the new line
    printf("\n");
    return 0;

}
// encrypts "BaRFoo" as "CaQGon" using "BaZ" as keyword
//     expected "ciphertext: CaQ...", not "ciphertext: CaQ..."

