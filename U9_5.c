#include <stdio.h>
#include <string.h>
void deleteCharFromString(char *str, char ch)
{
    int len = strlen(str);
    int i, j;
    for (i = 0, j = 0; i < len; i++) {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main() {
    char inputString[100];
    char charToDelete;
    printf("Enter a string: ");
    gets(inputString);
    printf("Enter the character to delete: ");
    scanf("%c", &charToDelete);
    deleteCharFromString(inputString, charToDelete);
    printf("String after deleting '%c': %s\n", charToDelete, inputString);
    return 0;
}

