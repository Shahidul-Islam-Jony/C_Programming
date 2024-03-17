#include <stdio.h>
#include <conio.h>

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int num1, num2;
    printf("Enter two number for swap : ");
    scanf("%d %d", &num1, &num2);
    swap(&num1, &num2);
    printf("After swaping num are num1 = %d and num2 = %d", num1, num2);

    return 0;
}