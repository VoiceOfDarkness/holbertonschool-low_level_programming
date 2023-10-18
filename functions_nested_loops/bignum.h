#include <unistd.h>

typedef unsigned char byte;
#define N 300

typedef struct
{
    byte digits[N];
} Bignum;

void printbig(Bignum a);
Bignum initbig(int x);
Bignum addbig(Bignum a, Bignum b);

