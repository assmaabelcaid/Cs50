#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

bool only_digits(string c);
char rotate(char z, int k);

int main(int argc, string argv[])
{
    // passa al programma only digits che strasformerà l'input del programma da string a int
    if (argc == 2)                     // se il numero di string nel programm è 2 (1 ./caesar, 2 key)
    {
        string input = argv[1];
        int n = 0;
        n = atoi(input);             //l'input nel programma (argv1) sarà una chiave chiamata "input"
        bool output = only_digits(input);
        if (output == true)                    // se il programma output va a boun fine
        {
            string ciphertext = get_string("plaintext: "); //prende input
            printf("ciphertext: ");
            for (int i = 0, len = strlen(ciphertext); i < len; i++)
            {
                char codice = rotate(ciphertext[i], n);
            }
            printf("\n");
            return 0;
        }
        else
        {
            printf("Usage: ./caesar key\n");   //altrim
        }
        return 1;
    }
    else
    {
        printf("RIFAI SUBITO\n");
    }
    return 1;
}
/*
int only_digits(string c)
{    //trasforma il numero
    if(n > 0 && !(isalpha(n))) //impone che il numero non sia alfa e che sia maggiore di 0
    {
        printf("key: %i\n", n); //solo per correzione
        return 0; //return successo
    }
    return 1; //return errore
}
*/

bool only_digits(string c)
{
    bool n = false;
    for (int i = 0, len = strlen(c); i < len; i++)
    {
        if (isdigit(c[i]))
        {
            n = true;
        }
        else
        {
            return false;
        }
    }
    return n;
}


char rotate(char z, int k) //k = key, z = testo
{
    if (isupper(z))
    {
        printf("%c", (((int)z + k - 65) % 26) + 65);
    }
    else if (islower(z))
    {
        printf("%c", (((int)z + k - 97) % 26) + 97);
    }
    else
    {
        printf("%c", z);
    }
    return 0;

}