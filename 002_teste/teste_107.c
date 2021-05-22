#include <stdio.h>


int main() {
    int c, *pc;

    //pc eh endereco mas c nao eh
    pc = c; // Error

    // &c eh endereco mas *pc nao eh 
    *pc = &c; // Error

    // tanto &c e pc sao enderecos
    pc = &c;

    // tanto c e *pc sao valores
    *pc = c;
   
    return 0;
}

/* 
apenas demonstracao
*/
