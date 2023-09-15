// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int i =4;
//     int *j = &i;
//     int **k = &j;
//     int ***l = &k;
//     printf("value of i is: %u\n", &i);
//     printf("value of i is: %u\n", *j);
//     // printf("value of i is: %u\n", k);
//     // printf("value of i is: %u\n", l);
//     // printf("value of i is: %u\n", j);
//     // printf("value of j is: %u", &j);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int *ptr;
//     ptr = (int *) malloc(6* sizeof(int));
//     for(int i=0;i<6;i++){
//         printf("write for %d: \n", i);
//         scanf("%d", &ptr[i]);
//     }
//         printf("%d", ptr[i]);
//     return 0;
//     }



#include<stdio.h>
#include<stdlib.h>

    struct Node{
    int data;
    struct Node *next;
    };
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    (*head).data = 7;
    (*head).next = second;

    (*second).data = 7;
    (*second).next = third;

    (*third).data = 7;
    (*third).next = NULL;


    
    return 0;
}