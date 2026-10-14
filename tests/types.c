#include "types.h"

#include <assert.h>
#include <stdint.h>

int main(void) {
    u8 byte = 0xff;

    assert(sizeof(u8) == sizeof(uint8_t));
    assert(byte == 255);

    return 0;
}