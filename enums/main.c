#include <stdio.h>

enum Weather {
    SUNNY,
    RAINY,
    CLOUDY,
    SNOWY
};

int main() {
    enum Weather sunny = SUNNY;
    char name[100];
    printf("enter your name: ");
    scanf("%s", name);
    switch (sunny) {
        case SUNNY: printf("It's a sunny day %s!\n", name); break;
        case RAINY: printf("It's a rainy day %s\n", name); break;
        case CLOUDY: printf("It's a CLOUDY day %s\n", name); break;
        case SNOWY: printf("It's a SNOWY day %s\n", name); break;
        default: puts("Caution!\n");
    }
}
