#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    const char* filename = argv[1];
    // Checking if filename is NULL
    // And printing a usage:

    if (filename == NULL) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *file_pointer;
    file_pointer = fopen(filename, "r"); // "r" - read mode. If file is absent, it's returning NULL.

    if (file_pointer == NULL) {
        printf("File %s is not exists.\n", filename);
        return -1;
    }

    // If file is exist, then printing a message:
    printf("File %s is exists.\n", filename);
    return 0;
}
