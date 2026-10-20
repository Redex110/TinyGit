#include <stdio.h>

#define WIDTH 60

//printLine Function to print boader using "-"
void printLine(int width)
{
    for(int i = 0; i < width; i++)
        printf("-");
    printf("\n");
}

//Function prototype for printIntroduction()
void printIntroduction();

int main()
{
    printIntroduction();

    return 0;
}


//Function printIntroduction()
void printIntroduction()
{
    printLine(WIDTH);

    printf("TinyGit\n");

    printLine(WIDTH);

   // printf("User Manual :\n\n");
    printf("TinyGit Initialization    : tinygit init\n");
    printf("Add Files for Commit      : tinygit add <path>\n");
    printf("Create new Commits        : tinygit commit -m <message>\n");
    printf("See logs for changes      : tinygit log\n");
    printf("Show staged/modified file : tinygit status\n");


    printLine(WIDTH);
}
