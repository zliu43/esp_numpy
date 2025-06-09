/*
Efficient Vector Library targeting ESP32s3 chips,
Using xtensa extended vector instructionsfor SIMD operations.

Mike L.

THIS IS A WORK IN PROGRESS. DO NOT USE.
*/

#include <stdint.h>
#include <stdlib.h

static inline size_t dtype_size(datatype dt) {
    switch (dt) {
        case DT_INT8: return 1;
        case DT_INT16: return 2;
        case DT_FLOAT16: return 2;
        default: return 0;
    }
}

enum datatype{
    DT_INT8,
    DT_INT16,
    DT_FLOAT16
};

typedef struct{
    size_t size,
    void *data,
    datatype dtype
} vector;

