// vim: set undofile:
// Program: razlomak

#include "Razlomak.h"

#include <iostream>

Razlomak::Razlomak(int brojilac, unsigned int imenilac)
    : m_brojilac(brojilac), m_imenilac(imenilac)
{
}

int Razlomak::brojilac() const
{
    return m_brojilac;
}

void Razlomak::postaviBrojilac(int brojilac)
{
    m_brojilac = brojilac;
}

unsigned int Razlomak::imenilac() const
{
    return m_imenilac;
}

void Razlomak::postaviImenilac(unsigned int imenilac)
{
    m_imenilac = imenilac;
}

Razlomak Razlomak::operator + (const Razlomak & other) const
{
    // Mozemo da koristimo getere ili direktno da pristupamo clanovima klase
    return Razlomak(
            imenilac() * other.brojilac() + other.imenilac() * brojilac(),
            imenilac() * other.imenilac()
        );
}

Razlomak Razlomak::operator ++ (int)
{
    // Ovde direktno pristupamo clanovima klase
    return Razlomak(m_brojilac + m_imenilac, m_imenilac);
}

Razlomak & Razlomak::operator ++ ()
{
    // Uvecavamo razlomak za 1
    m_brojilac += m_imenilac;

    return (*this);
}

Razlomak Razlomak::operator - () const
{
    // Implementirati za vezbu
    return Razlomak();
}

Razlomak Razlomak::operator - (const Razlomak & other) const
{
    // Implementirati za vezbu
    return Razlomak();
}

Razlomak::operator double () const
{
    return m_brojilac / (double) m_imenilac;
}

bool Razlomak::operator == (const Razlomak & other) const
{
    return brojilac() * other.imenilac() == other.brojilac() * imenilac();
}

bool Razlomak::operator != (const Razlomak & other) const
{
    return !(*this == other);
}

std::istream & operator >> (std::istream & in, Razlomak & value)
{
    char c; // pri citanju zelimo da preskocimo razlomacku crtu
    return in >> value.m_brojilac >> c >> value.m_imenilac;
}

std::ostream & operator << (std::ostream & out, const Razlomak & value)
{
    return out << value.m_brojilac << '/' << value.m_imenilac;
}


