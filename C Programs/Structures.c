#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student s1;
    strcpy(s1.name, "Alice");
    s1.age = 20;
    
    printf("Student: %s, Age: %d\n", s1.name, s1.age);
    
    return 0;
}
