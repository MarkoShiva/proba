// vim: set undofile:
// Program: razlomak

// include guard - da se obezbedimo da ako neko dva puta
// ukljuci isto zaglavlje, da se drugi put ne ucita
#ifndef RAZLOMAK_H
#define RAZLOMAK_H

#include <iostream>

class Razlomak {
public:
    Razlomak(int brojilac = 0, unsigned int imenilac = 1);

    int brojilac() const;
    void postaviBrojilac(int brojilac);

    unsigned int imenilac() const;
    void postaviImenilac(unsigned int imenilac);

    Razlomak operator + (const Razlomak & other) const;

    // razlomak++ operator
    Razlomak operator ++ (int);

    // ++razlomak operator
    Razlomak & operator ++ ();

    // Unirani operator -
    Razlomak operator - () const;

    // Binarni operator -
    Razlomak operator - (const Razlomak & other) const;

    // Operator konverzije u double
    operator double () const;

    // Operatori jednakosti i nejednakosti
    bool operator == (const Razlomak & other) const;
    bool operator != (const Razlomak & other) const;

    // Za vezbu: implementirati mnozenje, deljenje razlomaka
    // operatore poredjenja - <, >, <=, >=,
    // mnozenje i deljenje skalarom...

private:
    int m_brojilac;
    unsigned int m_imenilac;

    friend std::ostream & operator << (std::ostream & out, const Razlomak & value);
    friend std::istream & operator >> (std::istream & in, Razlomak & value);
};

std::ostream & operator << (std::ostream & out, const Razlomak & value);
std::istream & operator >> (std::istream & in, Razlomak & value);

#endif // RAZLOMAK_H
