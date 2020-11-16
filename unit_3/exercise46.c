#include <stdio.h>
#include <string.h>

#define MSG_USE_1 "Ingrese el numero de filas: "
#define MSG_USE_2 "Ingrese el numero de columnas: "

#define MSG_USE_3 "Ingrese el numero de la posicion: "
#define MSG_USE_4 "La traza de la matriz es: "

#define MSG_ERROR "ERROR!!! ingreso de dato NO numerico"

#define MAX_ROW 10
#define MAX_COL 11

int main(void){
    int row, col;
    int matrix[MAX_ROW][MAX_COL];
    size_t i, j;
    int c, st;

    puts(MSG_USE_1);
    if (!(st=scanf("%i", &row)))
        {
            fprintf(stderr, "%s\n", MSG_ERROR);
            return 1;
        }
    if (st ==EOF)
        return 1;
    while ((c=getchar()) !='\n');
    puts(MSG_USE_2);
    if (!(st=scanf("%i", &col)))
        {
            fprintf(stderr, "%s\n", MSG_ERROR);
            return 1;
        }
    if (st ==EOF)
        return 1;
    while ((c=getchar()) !='\n');

    
    for (i = 0; i <=(row-1); i++)
        {
            for (j = 0; j <= (col-1); j++)
                {
                    fprintf(stdout, "%s(%lu)(%lu)\n ", MSG_USE_1, i+1, j+1);
                    if (!(st=scanf("%d", &matrix[i][j])))
                        {
                            fprintf(stderr, "%s\n", MSG_ERROR);
                            return 1;
                        }
                    if (st ==EOF)
                        return 1;
                    while ((c=getchar()) !='\n');
                }
            putchar('\n');
        }

    for (i = 0; i <=(row-1); i++)
        {
            for (j = 0; j <= (col-1); j++)
            {
                fprintf(stdout, "%.0d ", matrix[i][j]);
            }
            putchar('\n');
        }
    putchar('\n');
    for (i = 0; i <=(col-1); i++)
        {
            for (j = 0; j <= (row-1); j++)
            {
                fprintf(stdout, "%.0d ", matrix[j][i]);
            }
            putchar('\n');
        }

    return 0;
}