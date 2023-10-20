#include <stdio.h>
#include <string.h>

int main(void){
    int bitNum;
    printf("How many bits?: ");
    scanf(" %d", &bitNum);
    if(bitNum <= 1){
        printf("%d",bitNum);
    }else{
        int sum = 1;
        for(int i=0; i< bitNum; i++){
            sum *= 2;
        }
        sum--;
        printf("Max number is %d", sum);
    }
}
