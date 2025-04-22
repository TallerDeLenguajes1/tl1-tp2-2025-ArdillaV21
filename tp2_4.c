#include <stdio.h>
#include <time.h>

typedef struct compu{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
}compu;

void generarPCs(struct compu pcs[],int cantidad){
    
    char *tipos[] = {"Intel","AMD","Celereon","Athlon","Core","Pentium"};
    srand(time(NULL));
    for(int i=0;i<cantidad;i++){
        pcs[i].velocidad = 1 + rand() % 3;
        pcs[i].anio = 2015 + rand() % 10;
        pcs[i].cantidad_nucleos = 1 + rand() % 8;
        pcs[i].tipo_cpu = tipos[rand() % 6];
    }
}

void listarPcs(struct compu pcs[],int cantidad){
    for(int i=0;i<cantidad;i++){
        printf("\nVelocidad = %d \n", pcs[i].velocidad);
        printf("Año = %d \n", pcs[i].anio);
        printf("Cantidad Nucleos = %d \n", pcs[i].cantidad_nucleos);
        printf("Tipo de CPU = %s \n", pcs[i].tipo_cpu);
        printf("------------------------------------------------- \n");
    }
};

void mostrarMasVieja(struct compu pcs[], int cantidad){
    int aux = pcs[0].anio;
    int valor;
    for(int i=0; i<cantidad; i++){
        if(pcs[i].anio < aux){
            valor = i;
        };
    };
    printf("----------------PC MAS VIEJA------------------- \n");
    printf("\nVelocidad = %d \n", pcs[valor].velocidad);
    printf("Año = %d \n", pcs[valor].anio);
    printf("Cantidad Nucleos = %d \n", pcs[valor].cantidad_nucleos);
    printf("Tipo de CPU = %s \n", pcs[valor].tipo_cpu);
};

void mostrarMasVeloz(struct compu pcs[], int cantidad){
    int aux1 = pcs[0].velocidad;
    int valor1;
    for(int i=0; i<cantidad; i++){
        if(pcs[i].velocidad > aux1){
            valor1 = i;
        };
    };
    printf("----------------PC MAS RAPIDA------------------- \n");
    printf("\nVelocidad = %d \n", pcs[valor1].velocidad);
    printf("Año = %d \n", pcs[valor1].anio);
    printf("Cantidad Nucleos = %d \n", pcs[valor1].cantidad_nucleos);
    printf("Tipo de CPU = %s \n", pcs[valor1].tipo_cpu);
    printf("------------------------------------------------- \n");
};

int main(){
    struct compu pcs[5];

    generarPCs(pcs,5);
    listarPcs(pcs,5);
    mostrarMasVieja(pcs,5);
    mostrarMasVeloz(pcs,5);

    return 0;
}
