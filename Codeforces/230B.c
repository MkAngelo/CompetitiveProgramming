#include <stdio.h>

#define TAM_MAX 255

int main(){
    char name[TAM_MAX];
    int n;
    scanf("%d", &n);
    scanf("%s", name);
    printf("Your number is: %d \n", n);
    printf("and your name is %s \n", name);
    return 0;
}
