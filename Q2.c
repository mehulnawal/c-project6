#include <stdio.h>

int main()
{
    char str[40];

    printf("Enter your string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
    }

    printf("Your stirng in lowercase is: %s", str);

    return 0;
}