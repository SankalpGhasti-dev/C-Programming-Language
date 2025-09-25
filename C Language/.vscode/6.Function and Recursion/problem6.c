#include <stdio.h>

int main() {
    
    int a=4;
    printf("%d %d %d \n", a , ++a , a++);

    // When evauluation order is not defined then compiler decide evaulation order . In this it is left to right . 
    
    return 0;

}