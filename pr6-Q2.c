#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[256] = {0};

    printf("Enter the string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]] = freq[str[i]] + 1;
    }
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("%c=>%d\n", i, freq[i]);
        }
    }

    return 0;
}