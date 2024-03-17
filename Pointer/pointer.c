#include<stdio.h>
#include<conio.h>

int main(){
    //pointer is an address of value.
    int a=10;
    int* ptr = &a;  // declaring of pointer
    printf("%d value of a in integer \n",*ptr);  // printing value 10 which is stored in pointer ptr
    printf("%p value of a in hexadecimal \n",*ptr);  // printing value of 10 in hexadecimal which is stored in pointer ptr
    printf("%p This is address of a in hexadecimal \n", ptr); // address of ptr;
    printf("%d this is address of a in integer \n",ptr); // address of ptr in integer

}