#include "string.h"

#include <stdio.h>

String newString(char* chars) {
    String string;
    string.chars = chars;

    i32 count = 0;
    while (string.chars[count] != '\0') count++;
    string.length = count;

    return string;
}

void printString(String string) {
    for (int i = 0; i < string.length; i++) {
        printf("%c", string.chars[i]);
    }
}

void printStringLn(String string) {
    printString(string);
    printf("\n");
}
