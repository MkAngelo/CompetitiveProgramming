#include <stdio.h>

/*
Print Celsius-Fahreinheit table
 
*/

int main(){
    int celsius, fahr, lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;

    printf("Celsius\tFahrenheit\n");

    while(upper >= celsius){
        fahr = (celsius * 1.8) + 32;
        printf("%d\t%d\n", celsius, fahr);
        celsius += step;
    }
    return 0;
}
