#include <stdio.h>
#include "cs50.h"
#include <string.h>
typedef struct
{
    string name;
    string number;

} pf;

int main(void)
{
    pf people[2];
    string x = get_string("Are u want to add New Numbre ??\n");
    if (x == 'y' || 'Y')
    {
        people[0].name = y;
        people[0].number = z;
        string z = get_string("what number do u add it ?\n");
        string y = get_string("what name do u add it ?\n");
    }
     printf("hallo ahmed");
    string s = get_string("what are you sarching about it ???\n");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(name[i], s) == 0)
        {
            printf("Found it %s" people[i].number);
            return 0;
        }
    }
    printf("Not found %S"s);
    return 1;
}