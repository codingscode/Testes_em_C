/* 
bitwise operator

&   : Bitwise AND
|   : Bitwise OR
^   : Bitwise exclusive OR
~   : Bitwise complement
<<  : Shift left
>>  : Shift right
*/

#include <stdio.h>


int main() {
    int a = 12, b = 25;


    
    /* 
    12 decimal para base 2 eh 1100
    25 decimal para base 2 eh 11001

    0 eh F
    1 eh V

    01100
  & 11001
  -----------
    01000  -> 8 (decimal)



    */

    printf("Saida a & b = %d\n", a & b);
    printf("Saida a | b = %d\n", a | b);
    printf("Saida a ^ b = %d\n", a ^ b);
    printf("Saida ~a = %d\n", ~a);
    printf("Saida ~b = %d\n", ~b);

    return 0;
}

/*
Saida a & b = 8
Saida a | b = 29
Saida a ^ b = 21
Saida ~a = -13
Saida ~b = -26
*/






