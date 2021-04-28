#ifndef RYUKO_BOOLARRAY_H
#define RYUKO_BOOLARRAY_H

#include <limits>
#include "Array.h"

template<> class Array<bool> {
    typedef unsigned char BYTE;
    static const int CHAR_BITS = std::numeric_limits<unsigned char>::digits;
    int nelem;
    int velem;
    BYTE* vec;
    static int size_of(int sz) { return (sz + CHAR_BITS - 1) / CHAR_BITS; }

public:
    class BitOfByteRef {
        BYTE & vec;
        int idx;
    public:
        BitOfByteRef(BYTE& r, int i) : vec(r), idx(i) { }
        operator bool() const { return (vec >> idx) & 1U; }

    };
};

#endif //RYUKO_BOOLARRAY_H
