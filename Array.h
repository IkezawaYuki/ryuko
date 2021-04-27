
#ifndef RYUKO_ARRAY_H
#define RYUKO_ARRAY_H


template <class Type> class Array {
    int nelem;
    Type* vec;
    bool is_valid_index(int idx) { return idx >= 0 && idx < nelem; }

public:
    class IdxRngErr {
        const Array* ident;
        int idx;
    public:
        IdxRngErr(const Array* p, int i) : ident(p), idx(i) { }

    };
};


#endif //RYUKO_ARRAY_H
