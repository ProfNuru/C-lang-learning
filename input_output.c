#include <stdio.h>

int main(void){
    int c;
    // c = getchar();
    // printf("Enter value:\n");
    // while(c != EOF){
    //     putchar(c);
    //     c = getchar();
    // }
    // while (1){
    //     c = getchar();
    //     putchar(c);
    //     printf("\nChar: %c%c%d%d\n",c,EOF,c,EOF);
    // }
    int b = 0, t = 0, n = 0;
    for(int i = 0; (c = getchar())!=EOF; ++i){
        if(c == '\n'){
            putchar('\\');
            putchar('n');
            putchar('\n');
            ++n;
        }else if(c == '\t'){
            putchar('\\');
            putchar('t');
            ++t;
        }else if(c == '\b'){
            putchar('\\');
            putchar('b');
            ++b;
        }else{
            putchar(c);
        }
    }
    printf("%d newlines\n",n);
    printf("%d tabs\n",t);
    printf("%d blanks\n",b);
}