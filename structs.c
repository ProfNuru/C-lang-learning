#include <stdio.h>

typedef struct Dog{
    const char* name;
    const char* breed;

    int avgHeight;
    int avgWeight;
} Dog;

void printDog(Dog* dog){
    dog->avgHeight = 35;
    printf("Height: %d\n", dog->avgHeight);
    // printf("name: %s\n", dog.name);
    // printf("breed: %s\n", dog.breed);
    // printf("height: %d\n", dog.avgHeight);
    // printf("weight: %d\n", dog.avgWeight);
}

int main(void){
    struct Dog myDog = {"peace", "husky", 20, 30};
    printDog(&myDog);
    printf("Init Height: %d\n", myDog.avgHeight);
}