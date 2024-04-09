#include <stdio.h>
#include <stdlib.h>
#define N 20

int main()
{
    int i;
    double vt[N];
    double* p_vt = vt;
    for (i = 0; i < N; p_vt++)
    {
        *p_vt = 1 + rand() % 100;
        printf("%.2f ", *p_vt);
    }
    return 0;
}