#include <stdio.h>

#define MAX 300
#define STEP 20
#define START 0
int main(){
    printf("Fahrenheit to Celcius Conversion\n");
    for(int i=300; i>=0; i-=20){
        float deg_f = (float) i;
        printf("%3d %6.1f\n", i, ((deg_f-32.0)*5.0)/9.0);
    }
    // printf("Celcius to Fahrenheit Conversion\n");
    // for(int i=START; i<=MAX; i+=STEP){
    //     float deg_c = (float) i;
    //     printf("%3d %6.1f\n", i, i*(9.0/5.0) + 32);
    // }
}