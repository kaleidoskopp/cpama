/* Checks planet names */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

void string_to_lower(char str[], int n);

int main(int argc, char *argv[])
{
    char *planets[] = {"mercury", "venus", "earth",
                       "mars", "jupiter", "saturn",
                       "uranus", "neptune", "pluto"};
    int i, j;
    for (i = 1; i < argc; i++)
    {
        char current_planet[strlen(argv[i])];
        strcpy(current_planet, argv[i]);
        string_to_lower(current_planet, strlen(argv[i]));
        for (j = 0; j < NUM_PLANETS; j++){
            if (strcmp(current_planet, planets[j]) == 0)
            {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }
    return 0;
}

void string_to_lower(char str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        str[i] = tolower(str[i]);
    }
}