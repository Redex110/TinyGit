#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h>


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

//Function prototype for tinygitInit()
void tinygitInit();

//Main Function 
int main(int argc, char *argv[])
{
  //Use of Command Line Argument 
  for(int i = 0; i < argc; i++)
  {

    if(strcmp(argv[i], "intro") == 0)
    {
      printIntroduction();
      break;
    }
    if(strcmp(argv[i], "init") == 0)
    {
      tinygitInit();
      break;
    }
    
  }

  return 0;
}


//Function tinygitInit
void tinygitInit()
{
  FILE *ptr;

  printf("Intializing TinyGit ..........\n");

  mkdir(".tinygit", 0777);
  mkdir(".tinygit/objects", 0777);
  mkdir(".tinygit/refs", 0777);

  ptr = fopen(".tinygit/HEAD", "w");
  fprintf(ptr, "ref: refs/heads/master\n");

  fclose(ptr);

  printf("TinyGit Initialization Complete\n");
}

//Function printIntroduction()
void printIntroduction()
{
    printLine(WIDTH);

    printf("TinyGit\n");

    printLine(WIDTH);

   // printf("User Manual :\n\n");what is the core dump error
    printf("TinyGit Initialization    : tinygit init\n");
    printf("Add Files for Commit      : tinygit add <path>\n");
    printf("Create new Commits        : tinygit commit -m <message>\n");
    printf("See logs for changes      : tinygit log\n");
    printf("Show staged/modified file : tinygit status\n");


    printLine(WIDTH);
}
