#include <stdio.h>

int main() {
    
    int a =45;
    int* ptr= &a;

    printf("The address of a is %u.\n", &a);
    printf("The address of a is %u.\n", ptr);

    ptr++;   // ptr will increment according to the data type of ptr. (int = 4 bytes), (char = 1 byte), (float = 4 bytes), (double = 8 bytes).

    printf("The address of a is %u.\n", ptr);
    return 0;
}