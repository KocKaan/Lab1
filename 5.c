//Write a C main program that accepts three (non-optional) command-line
//arguments (not counting the command name itself). Call the first argument
//str, call the second except and call the third dup. Each argument is a string,
// i.e., a pointer to a char. Your program does all the following.

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[argc]){
  char *str=argv[1];
  char *except=argv[2];
  char *dup=argv[3];

  for(; *str!='\0';str++){
    if(*str>='A'&&*str<='Z'){
      printf("The first argument is not all lower case \n" );
      exit(0);
    }


//null means substtring not found
    if(strstr(argv[2],str)==NULL){
      if(strstr(argv[3],str)==NULL){
    
        putchar(*str);
      }else{

        putchar(*str);
        putchar(*str);
      }
    }
    printf("aaaa\n" );
  }
}
