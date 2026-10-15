#include "types.h"
#include "string.h"

#include <assert.h>
#include <stdint.h>
#include <stdio.h>

int main(void) {
    u8 byte = 0xff;

    assert(sizeof(u8) == sizeof(uint8_t));
    assert(byte == 0xFF);

    String hello = newString("Hello, World!");
    printf("Length of hello is %d", hello.length);

    return 0;
}
