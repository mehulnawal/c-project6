#include <stdio.h>
#include <string.h>

int main()
{
    char password[20], checkLetter, checkNum, checkChar;

    // one letter, one num, ono char, min 6 character

    printf("Enter your string: ");
    scanf("%s", password);

    if (strlen(password) >= 6 && strlen(password) <= 20)
    {
        for (int i = 0; password[i] != '\0'; i++)
        {
            if ((password[i] >= 65 && password[i] <= 90) || (password[i] >= 97 && password[i] <= 122))
            {
                checkLetter = 1;
            }

            if (password[i] >= 48 && password[i] <= 57)
            {
                checkNum = 1;
            }

            if (password[i] >= 35 && password[i] <= 38 || password[i] == 64)
            {
                checkChar = 1;
            }
        }
    }
    else
    {
        printf("%s - password must be between 6 and 20 character", password);
    }

    if (checkLetter != 1)
    {
        printf("%s - password must have a letter", password);
    }

    else if (checkNum != 1)
    {
        printf("%s - password must have a number", password);
    }
    else if (checkChar != 1)
    {
        printf("%s - password can only have these special characters - #, $, %%, &, @", password);
    }
    else
    {
        printf("%s - password is strong", password);
    }

    return 0;
}