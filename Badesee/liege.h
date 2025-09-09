#ifndef LIEGE_H
#define LIEGE_H

class Liege {
private:
    unsigned short nr;
    unsigned short typ;
    unsigned short zustand;

public:
    unsigned short getNr();
    unsigned short getTyp();
    unsigned short getZustand();
    void setZustand(unsigned short);
};

#endif
