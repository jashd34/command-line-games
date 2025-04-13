#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);

    int age;
    printf("Enter your age: ");
    scanf("%d", &age); 

    printf("My name is %s and my age is %d\n", name, age);

    float pi = 3.14f;
    printf("The value of pi is approximately %.2f\n", pi);
    // pause for user input
    printf("Press Enter to continue...\n");
    getchar(); // Wait for user to press Enter
    return 0;
}

// gcc hello.c -o hello.exe && start hello.exe