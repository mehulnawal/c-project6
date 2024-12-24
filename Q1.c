#include <stdio.h>
#include <string.h>

int main()
{
    char str[40];

    printf("Enter your string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)

    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    printf("Your string in uppercase is: %s", str);

    return 0;
}