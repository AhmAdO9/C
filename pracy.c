#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack ptr){
    if ((ptr).top == -1){
        return 1;
    }
};

int main(){
    struct stack s;
    (s).size = 80;
    (s).top = -1;
    (s).arr = (int *)malloc((s).size * sizeof(int));
    s.arr[0]=5;
    s.top++;
    printf("%d", *s.arr);
    if(isEmpty(s)){
        printf("stack is empty");
    }
    else{
        printf("stack is filled");
    };


    return 0; 
}