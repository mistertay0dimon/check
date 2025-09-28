#include <stdio.h>

int main(int argc, char* argv[]) {
    const char* filename = argv[1];
    FILE *file_pointer;
    file_pointer = fopen(filename, "r"); // "r" - read mode. If file is absent, it's returning NULL.

    if (file_pointer == NULL) {
        printf("File %s is absent.", filename);
        return -1;
    }

    // If file is not absent, then printing a message:
    printf("File %s is not absent.", filename);
    return 0;
}

