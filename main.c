#include <stdio.h>


//printLine Function to print boader using "-"
void printLine(int width)
{
    for(int i = 0; i < width; i++)
        printf("-");
    printf("\n");
}   


int main()
{
    printLine(40);
    printf("TinyGit\n");
    printLine(40);

    return 0;
}
