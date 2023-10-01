#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string letter);
int count_words(string word);
int count_sentences(string phrase);

int main(void)
{
    string input = get_string("Write your extract here: \n");

    int output_lettera = count_letters(input);
    //printf ("%i \n", output_lettera);
    int output_parola = count_words(input);
    //printf ("%i \n", output_parola);
    int output_frase = count_sentences(input);
    //printf ("%i \n", output_frase);

    float L = (float)output_lettera / (float)output_parola * 100;
    float S = (float)output_frase / (float)output_parola * 100;

    float score = 0.0588 * L - 0.296 * S - 15.8;
    // printf ("%f \n", score);
    score = round(score);
    if (score < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (score >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int)score);
    }
}

int count_letters(string letter)
{
    int punteggio_l = 0;
    for (int i = 0, len = strlen(letter); i < len; i++)
    {
        if (isalpha(letter[i]))
        {
            punteggio_l++;
        }
    }
    return punteggio_l;
}

int count_words(string word)
{
    int parola = 0;
    for (int l = 0, len = strlen(word); l < len; l++)
    {
        if (word[l] == ' ')
        {
            parola++;
        }
    }
    parola = parola + 1;
    return parola;
}

int count_sentences(string phrase)
{
    int frase = 0;
    for (int i = 0, len = strlen(phrase); i < len; i++)
    {
        if (phrase[i] == '.' || phrase[i] == '!' || phrase[i] == '?')
        {
            frase++;
        }
    }
    return frase;
}

if(k > 0 && !(isalpha(k)))
    {
        printf("hello, %i\n", k);
        string input = get_string("plaintext: \n");
    }