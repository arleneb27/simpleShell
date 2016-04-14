#include <stdio.h>

void _quit();
{
    exit(0);
}

int main(int argc, char *argv[])
{
    while(1)
    {
        _displayOptions();
        //get input
        //run command
    }
    return 0;
}

void _quit()
{
    exit(0);
}

void _displayOptions()
{
    printf("prompt> ");
}
