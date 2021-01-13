//Code for dynamic memory allocation in C

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* Test;
    Test = (int*) malloc(sizeof(int) * 10);
    if(Test != NULL){
        printf("Test is not null\n");
        printf("Adding 10 Elements to test, 0-9\n");
        for(int i = 0; i < 10; i++){
            Test[i] = i;
        }
        printf("Printing Test\n");
        for(int i = 0; i < 10; i++){
            printf("Position %d: %d Hex: %p\n", i, Test[i], &Test);
        }
        free(Test);
        Test = NULL;
        if(Test != NULL){
            printf("Memory was not free...");
        }
    }
    return 0;
}
