#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>


int main(int argc, char** argv) {

    printf("Tamanho armazenagem para float : %d \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX    :   %g\n", (double) -DBL_MAX);
    printf("Precisao de valor: %d\n", FLT_DIG );

    return 0;
}

/* 
Tamanho armazenagem para float : 4
FLT_MAX     :   3.40282e+038
FLT_MIN     :   1.17549e-038
-FLT_MAX    :   -3.40282e+038
-FLT_MIN    :   -1.17549e-038
DBL_MAX     :   1.79769e+308
DBL_MIN     :   2.22507e-308
-DBL_MAX    :   -1.79769e+308
Precisao de valor: 6
*/