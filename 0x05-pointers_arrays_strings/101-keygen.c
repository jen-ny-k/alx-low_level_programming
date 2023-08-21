#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** getrandomchar - function to generate random number
 * index: position of elements
 * Return: always 0
 */
char getRandomChar() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    int index = rand() % (sizeof(charset) - 1);
    return charset[index];
}

int main()
{
    srand(time(NULL));

    int passwordLength = 12;
    char password[passwordLength + 1];
    for (int i = 0; i < passwordLength; i++)
    {
        password[i] = getRandomChar();
    }
    password[passwordLength] = '\0';

    printf("Generated Password: %s\n", password);

    return 0;
}

