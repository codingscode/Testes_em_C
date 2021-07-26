//Programa imprime o valor da variavel num
#include <stdio.h> 


int num;
num = 20;

int main () {
    int num;  // so este comentado -> O valor da variavel num: 10
    num = 10; // so este comentado -> O valor da variavel num: 0

    //sem comentar-> O valor da variavel num: 10
    
    printf("O valor da variavel num: %d", num); 
    return 0;
}

/* 
O valor da variavel num: 10
*/
