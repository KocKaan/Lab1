//Write a C main() program
//int main(int argc, char *argv[]) This program has two optional command
//line argument, “-d” (indicating duplicate) and “-u” (indicating uppercase).
//As we did in class these may be combined in several ways (search for “pink and
//yellow” in the lecture notes). Your program reads characters with getchar()
//and, for each character read (call it C), the program prints corresponding
//character(s) using putchar().
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main (int argc, char *argv[argc]) {
  int C;
  if(argc==1){
    while((C=getchar()) !=EOF){
      putchar(C);
    }
  }
  if(argc==2&&strcmp(argv[1], "-d") != 0){
    while((C=getchar()) !=EOF){
      putchar(C);
      putchar(C);
    }
  }

  if(argc==2&& strcmp(argv[1], "-u") != 0){
    while((C=getchar()) !=EOF){
      if(!isdigit(C)){
        C=toupper(C);
        putchar(C);
      }
    }
  }
  if(argc==3 &&((strcmp(argv[1], "-u") != 0&&strcmp(argv[2], "-d") != 0))||(strcmp(argv[1], "-d") != 0&&strcmp(argv[2], "-u") != 0) ){
    while((C=getchar()) !=EOF){
      if(!isdigit(C)){
        C=toupper(C);
        putchar(C);
        putchar(C);
      }
    }
  }
  return 0;
}



/*
int main (int argc, char *argv[argc]) {
  printf("safjojaojfe\n" );
    int c, makeUpper=0;
    if (argc > 2)
      return -argc;   // error return
    if (argc == 2)
      if (strcmp(argv[1], "-toupper")) {
        printf("Arg %s illegal.\n", argv[1]);
        return -1;
      }
      else   // -toupper was arg
        makeUpper=1;
    while ((c = getchar()) != EOF)
      if (!isdigit(c)) {
        if (isalpha(c) && makeUpper)
          c = toupper(c);
        putchar(c);
      }
     return 0;
  }
*/
