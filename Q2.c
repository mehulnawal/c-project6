#include <stdio.h>
#include <string.h>

int main()
{
    char correctEmail[] = "email@gmail.com", userEmail[40];
    char correctPassword[] = "123456", userPassword;

    printf("Enter your email: ");
    scanf("%s", userEmail);

    printf("Enter your password: ");
    scanf("%s", userPassword);

    if (correctEmail == userEmail)
    {
        printf("Your email is correct");
    }
    else
    {
        printf("Your email is not correct");
    }

    return 0;
}
