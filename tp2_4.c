#include <stdio.h>

struct compu
{
    int velocidad;  //entre 1 y 3 GHz
    int anio;       //entre 2015 y 2023
    int cantidad;   //entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
};

void mostrasCompus(struct compu lista[5]);
void masVieja(struct compu lista[5]);
void masVeloz(struct compu lista[5]);

int main(void)
{
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    struct compu pc[5];
    return 0;
}