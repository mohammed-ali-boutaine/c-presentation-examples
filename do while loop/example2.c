
#include <stdio.h>

int main() {
    int n = 5; 
    
    printf("------------ While loop\n");

    while (n < 5) {
        printf("%i\n", n);
        n++;
    }
    printf("Exited while loop\n");

    printf("------------ Do While loop\n");
    n = 5; 


    do {
        printf("%i\n", n);
        n++;
    } while (n < 5);
    
    printf("Exited do...while loop\n");

    return 0;
}
