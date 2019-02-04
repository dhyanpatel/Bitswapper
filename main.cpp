#include <stdio.h>

long int hwk1a(long int x, int n, int m) {
    long int n_byte = (x >> (n << 3)) & 0xff;
    long int m_byte = (x >> (m << 3)) & 0xff;
    long int temporary;
    temporary = n_byte;
    n_byte = m_byte;
    m_byte = temporary;
    n_byte = n_byte << (n << 3);
    m_byte = m_byte << (m << 3);
    long int combined = n_byte | m_byte;
    long int mask = ~(0xFFl << (n << 3)) & ~(0xFFl << (m << 3));
    return ((x & mask) | combined);
}

int main()
{
    return 0;
}