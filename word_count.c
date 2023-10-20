#include <stdio.h>

#define IN 1
#define OUT 0

int main(void){
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    for(int i=0; (c=getchar())!=EOF; ++i){
        // Count new character
        ++nc;
        // Count new line
        if(c == '\n'){
            ++nl;
        }
        // space, newline or tab implies new word complete
        if(c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
        // If state is OUT, count completed word and start new word
        }else if(state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("Words: %d\nNewlines: %d\nCharacters: %d\n", nw, nl, nc);
}