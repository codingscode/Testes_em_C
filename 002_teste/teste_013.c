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
    int a = 12, b = 25, c = 17;
    
    /* 
    12 decimal para base 2 eh 1100
    25 decimal para base 2 eh 11001

    0 eh F
    1 eh V

    01100
  & 11001
  -----------
    01000  -> 8 (decimal)


    17 base 10 para base 2 -> 10001 , logo
    17>>0 = 10001(bin) ou 17(dec)
    17>>1 = 1000(bin) ou 8(dec)    , tira-se 1 digito da direita
    17>>2 = 100 (bin) ou 4(dec)    , tira-se 2 digito da direita
    17>>3 = 10  (bin) ou 2(dec     , tira-se 3 digito da direita
    17<<1 = 100010  (bin) ou  34(dec)  , acrescenta-se digito 1 digito 0 a direita
    17<<2 = 1000100 (bin) ou  68(dec)  , acrescenta-se digito 2 digitos 0 a direita
    17<<3 = 10001000(bin) ou  136(dec) , acrescenta-se digito 3 digitos 0 a direita

    */

    printf("Saida %d & %d = %d\n", a, b, a & b);
    printf("Saida %d | %d = %d\n", a, b, a | b);
    printf("Saida %d ^ %d = %d\n", a, b, a ^ b);
    printf("Saida ~%d = %d\n", a, ~a);
    printf("Saida ~%d = %d\n", b, ~b);
    printf("Saida ~(-12) = %d\n", ~(-12));
    printf("Saida ~(-13) = %d\n", ~(-13));
    printf("Saida ~(-25) = %d\n", ~(-25));
    printf("Saida ~(-26) = %d\n", ~(-26));
    printf("%d >> 0 = %d\n", c, c>>0);
    printf("%d >> 1 = %d\n", c, c>>1);
    printf("%d >> 2 = %d\n", c, c>>2);
    printf("%d >> 3 = %d\n", c, c>>3);
    printf("%d << 1 = %d\n", c, c<<1);
    printf("%d << 2 = %d\n", c, c<<2);
    printf("%d << 3 = %d\n", c, c<<3);
    
    return 0;
}

/*
Saida 12 & 25 = 8
Saida 12 | 25 = 29
Saida 12 ^ 25 = 21
Saida ~12 = -13
Saida ~25 = -26
Saida ~(-12) = 11
Saida ~(-13) = 12
Saida ~(-25) = 24
Saida ~(-26) = 25
17 >> 0 = 17
17 >> 1 = 8
17 >> 2 = 4
17 >> 3 = 2
17 << 1 = 34
17 << 2 = 68
17 << 3 = 136
*/
