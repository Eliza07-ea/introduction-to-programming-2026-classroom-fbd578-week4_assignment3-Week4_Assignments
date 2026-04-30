#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {4, 8, 15, 16, 23, 42, 99, 3, 7, 21};
    int size = 10;

    int query = get_int("Number: ");

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == query)
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
}
