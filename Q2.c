<<<<<<< HEAD
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
=======
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
>>>>>>> a919578e4182967f2fa8afc24c447200e16f3f8f
