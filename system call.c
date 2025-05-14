//Program execution: Program to display a message
#include <stdio.h>

int main() {
    printf("This is Operating assignment at Bahir Dar University\n");
    return 0;
}


// passing an array of argument using execve()
#include <unistd.h>
#include <stdio.h>

int main() {
    char *program = "/bin/ls";
    char *args[] = { "ls", "-l", "/home", NULL };

    execve(program, args, NULL);

    // Only runs if execve fails
    perror("execve failed");
    return 1;
}
