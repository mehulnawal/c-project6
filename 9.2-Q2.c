#include <stdio.h>
#include <string.h>

int main()
{
    char correctEmail[] = "admin@gmail.com", userEmail[40];
    char correctPassword[] = "1234", userPassword[40];

    printf("Enter your email: ");
    scanf("%s", userEmail);

    printf("Enter your password: ");
    scanf("%s", userPassword);

    if (strcmp(correctEmail, userEmail) == 0)
    {
        if (strcmp(correctPassword, userPassword) == 0)
        {
            printf("Your credentials are correct\n");
        }
        else
        {
            printf("Your password is not correct\n");
        }
    }
    else
    {
        printf("Your email is not correct\n");
    }

    return 0;
}
