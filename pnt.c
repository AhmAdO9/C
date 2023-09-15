#include<stdio.h>
#include<stdlib.h>  

int main(){
       int i;
    int *ptr = &i;
    printf("%u\n", ptr);
    ptr++;
    printf("%u", ptr);
    return 0;
}