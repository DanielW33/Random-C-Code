#include <stdio.h>

int main(void){
    int x = 0b01000000010110000000000000000000;
    int y = 0b01000000011111000000000000000000;

    void* p = &y;
    printf("%d\n", (*((int*) p)));
    printf("%f\n", (*((float*) p)));
    printf("Char p[0]: %c\n", ((char*) p)[0]);
    printf("Char p[1]: %c\n", ((char*) p)[1]);
    printf("Char p[2]: %c\n", ((char*) p)[2]);
    printf("Char p[3]: %c\n", ((char*) p)[3]);
}
