#include <stdio.h>


enum semana {Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

int main() {
    // criando variavel hoje de tipo enum semana
    enum semana hoje;
    hoje = Quarta;
    printf("Dia %d", hoje + 1);
    return 0;
}

/* 
Dia 4
*/
