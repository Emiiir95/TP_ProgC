#include <stdio.h>

int main(void) {
    /* Types entiers */

    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 200;

    short s = -12345;
    unsigned short us = 54321;

    int i = -100000;
    unsigned int ui = 100000U;

    long int li = -1000000L;
    unsigned long int uli = 1000000UL;

    long long int lli = -10000000000LL;
    unsigned long long int ulli = 10000000000ULL;

    /* Types à virgule flottante (pas de signed/unsigned) */

    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.618033988749894L;

    printf("===== Types entiers =====\n\n");

    printf("char c = %c\n", c);
    printf("signed char sc = %hhd\n", sc);
    printf("unsigned char uc = %hhu\n\n", uc);

    printf("short s = %hd\n", s);
    printf("unsigned short us = %hu\n\n", us);

    printf("int i = %d\n", i);
    printf("unsigned int ui = %u\n\n", ui);

    printf("long int li = %ld\n", li);
    printf("unsigned long int uli = %lu\n\n", uli);

    printf("long long int lli = %lld\n", lli);
    printf("unsigned long long int ulli = %llu\n\n", ulli);

    printf("===== Types flottants =====\n\n");

    printf("float f = %f\n", f);
    printf("double d = %lf\n", d);
    printf("long double ld = %Lf\n", ld);

    return 0;
}
