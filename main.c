#include <stdio.h>

int main() {
    printf("Hello, World!");
    int i = 0; 
    for(i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    if(i == 10) {
        printf("\nLoop completed successfully.");
    }
    else {
        printf("Not 10");
    }
    printf("Happy!");
    return 0;
}
