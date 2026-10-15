#include "types.h"

typedef struct {
    char* chars;
    i32 length;
} String;

// Creation
String newString(char* chars);

// Printing
void printString(String string);
void printStringLn(String string);