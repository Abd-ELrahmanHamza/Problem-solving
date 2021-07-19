#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char word[100];
    scanf("%s", word);
    int lower_count = 0;
    int i = 0;
    for (i = 0; i < strlen(word); i++)
    {
        if (islower(word[i]))
            lower_count++;
    }
    for (i = 0; i < strlen(word); i++)
    {
        if (lower_count >= 0.5 * strlen(word))
            word[i] = tolower(word[i]);
        else
            word[i] = toupper(word[i]);
    }
    printf("%s", word);
    return 0;
}