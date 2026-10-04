#include <stdio.h>

void displayValue(void *ptr, char type)
{
    if (type == 'i')
    {
        printf("Integer: %d\n", *(int *)ptr);
    }
    else if (type == 'f')
    {
        printf("Float: %.2f\n", *(float *)ptr);
    }
    else if (type == 'c')
    {
        printf("Character: %c\n", *(char *)ptr);
    }
}

int main()
{
    int number = 50;
    float marks = 87.5;
    char grade = 'A';

    displayValue(&number, 'i');
    displayValue(&marks, 'f');
    displayValue(&grade, 'c');

    return 0;
}
