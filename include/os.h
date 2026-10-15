#ifndef OS_H
#define OS_H

typedef enum {
    Unknown = 0,
    Windows,
    Linux,
    MacOS
} OS;

OS getOS(void);

#endif