#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Hello!\n");
    string answer = get_string("WHAT IS YOUR NAME? \n");
    printf("Cool bruv you are %s\n", answer);
}
unzi