#include <stdio.h>

int main(void){
    int c;
    int whitespace, other;
    whitespace = other = 0;
    int ndigit[10];
    for(int i=0; i<10; ++i){
        ndigit[i] = 0;
    }
    while ((c = getchar()) != EOF){
        if(c >= '0' && c <= '9'){
            ++ndigit[c - '0'];
            printf("%d %c",c,c);
        }
        if(c == ' ' || c == '\n' || c == '\t'){
            ++whitespace;
        }else{
            ++other;
        }
    }
    for(int i=0; i<10; ++i){
        printf("%d ",ndigit[i]);
    }
    printf("Whitespace:%d\nOther:%d\n", whitespace, other);
}