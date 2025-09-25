#include <stdio.h> 

int main() {

    int a = 4;
    int* b= &a; 
    int** c = &b;

    printf("The value of a is %d.\n", a);
    printf("The value of a using pointer is %d.\n", *b);
    printf("The value of a using pointer to pointer is %d.\n", **c);
    
}
