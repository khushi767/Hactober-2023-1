#include <stdio.h>
#include <string.h>

int main() {
    char greeting[] = "Hello, World!";
    printf("Greeting: %s\n", greeting);
    
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    
    return 0;
}
