#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned int* ptr1;
    // Queremos que ptr1 almacene el espacio de 3 enteros//
    ptr1 = (int *) malloc(3*sizeof(int));

    if(ptr1==NULL)
    {
        printf("Memoria no localizada.\n");
    }
    else
    {
        printf("Memoria localizada con exito.\n");
        //Este statement muestra la direccion de memoria//
        printf("La dirección de puntero es:%u\n",ptr1);

        //Aqui asignamos valores a la ptr1 creada//
        for(int i=0;i<3;i++)
        {
            ptr1[i] = i;
        }
        //Imprimimos los valores de ptr1 para mostrar// 
        //que la localizacion de memoria esta hecha//
        for(int i=0;i<3;i++)
        {
            printf("%d\n",ptr1[i]);
        }
 }

}
