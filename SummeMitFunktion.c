#include <stdio.h>

int berechneSumme(int summand1, int summand2)
{
    int summe;
    summe= summand1 + summand2;
    return summe;
}


int main()
{
    int a = 1;
    int b = 2;
    int zusammen;
    zusammen = berechneSumme(a,b);

    printf("Die summe aus %i und %i ist %i",a,b,zusammen);
    return 0;
}
