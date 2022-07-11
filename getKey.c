#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
    /*
        Declared as an integer because getch() returns an integer.
        And initialization to zero is used to avoid potential issues.
    */
    int c = 0; 
    if (argc > 1)
    {
        c = atoi(argv[1]);
        if(c < 0)
        {
            c = abs(c); // Make sure we don't input negative values
        }
        if (!c && argv[1][0] != '0')
        {
            c = argv[1][0];
        }
    }
    else
    {
        c = getch();
        if (!c || c == 0xE0) // Special codes (0x0 and 0xE0 require 2 keypresses)
        {
            c += getch() + 255;
        }
    }

    putchar(c % 256); // Make sure to keep the character range from 0 to 255
    return c;
}
