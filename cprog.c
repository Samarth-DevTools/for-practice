#include <stdio.h>
void greet(char *name) {
    printf("Hello, %s!\n", name);
}

int main() {
    for (int i = 0; i < 5; i++) {
        greet("World");
    }
    return 0;
}
