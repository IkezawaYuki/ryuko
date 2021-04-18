
//
// Created by 池澤勇輝 on 2021/04/18.
//

#ifndef RYUKO_BOOLEAN_H
#define RYUKO_BOOLEAN_H

class Boolean {
public:
    enum boolean {False, True};
private:
    boolean v;
public:
    Boolean() : v(False) {}
    Boolean(int val) : v(val == 0 ? False : True) { }
    operator int() const { return v; }
    operator const char*() const { return v == False ? "False" : "True"; }
};

inline std::ostream& operator<<(std::ostream& s, const Boolean& x)
{
    return s << static_cast<const char*>(x);
}


#endif //RYUKO_BOOLEAN_H
