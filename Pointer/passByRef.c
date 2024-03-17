#include<stdio.h>
#include<conio.h>

void makeDouble(int *a){    //reciving address of num
    *a *=2; // multipling value , which is stored in address of a;
}


int main(){
    int num = 5;
    makeDouble(&num);   // passing address of  num.
    printf("%d",num);

    return 0;
}