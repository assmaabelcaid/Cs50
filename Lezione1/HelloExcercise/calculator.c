#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("scrivi la tua x \n");
    int y = get_int("scrivi la tua y \n");
    printf("Risultato: %i\n", x + y);
    int z = x * y;
    printf("Il loro prodotto: %i\n", z);
    if (x<y)
        {
            printf("x è più piccola di y\n");
        }
    else if (y<x)
    {
        printf("y è minore\n");
    }
    else printf("gemelli\n");
}