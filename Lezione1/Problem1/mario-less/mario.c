#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do  //STO PASSAGGIO TI CHIEDE LA DOMANDA E LA RIPETE SE E' INFERIORE DI 1 O MAGGIORE= A 9
    {
        n = get_int("quanti JUMP deve fare da 1 a 9 compresi?: ");
    }
    while (n < 1 || n >= 9);

    if (n == 1)// se è uguale a 1, allora printa il cosino
    {
        printf("#\n");
    }
    else        //se è uguale a più di uno allora ti fa la scaletta
    {
        for (int i = 0; i < n; i++)
        {
            for (int y = n - 1; y > i ; y--) //questo comincia da n-1 cosicchè nel momento in cui arriva a 0 la riga finale è solo #
            {
                printf(" ");
            }
            for (int j = 0; j < i ; j++) // questo printa il contenuto
            {
                printf("#");
            }
            printf("#\n");//questo l'ultimo e va a capo
        }
    }
}