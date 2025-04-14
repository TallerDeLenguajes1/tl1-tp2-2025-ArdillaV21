#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CANT_PC 5

// Definición de la estructura para representar una computadora
struct compu {
    int velocidad;         // Velocidad de procesamiento en GHz (1–3)
    int anio;              // Año de fabricación (2015–2024)
    int cantidad_nucleos; // Cantidad de núcleos (1–8)
    char *tipo_cpu;        // Tipo de procesador (puntero a cadena de caracteres)
};

void generarDatos(struct compu pcs[], int cantidad) {
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    srand(time(NULL));

    for (int i = 0; i < cantidad; i++) {
        pcs[i].velocidad = 1 + rand() % 3;         
        pcs[i].anio = 2015 + rand() % 10;             
        pcs[i].cantidad_nucleos = 1 + rand() % 8;       
        pcs[i].tipo_cpu = tipos[rand() % 6];            
    }
}

int main(){
    struct compu pcs[CANT_PC];
    
    generarDatos(pcs, CANT_PC);
    

    return 0;
}