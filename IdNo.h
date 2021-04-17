
#ifndef RYUKO_IDNO_H
#define RYUKO_IDNO_H

class IdNo {
    static int counter;
    int id_no;
public:
    IdNo();
    int id() const;
    static int get_max_id();
};


#endif //RYUKO_IDNO_H
