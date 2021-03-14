// Ordering Strings by Length


#include<stdio.h>
#include <string.h>


int reorder(char **s1, char **s2, char **s3);
void swap(char **s1,char **s2);

int main() {
  char **slot1;
  char **slot2;
  char **slot3;

  char *str1 = "aksodda";
  char *str2 = "wwdakapowfjoakef";
  char *str3 = "kaan";

  slot1 = &str1;
  slot2 = &str2;
  slot3 = &str3;
  reorder(slot1,slot2,slot3);

  printf("\nAFTER:\n");
  printf("\t*slot1 = \"%s\"\n", *slot1);
  printf("\t*slot2 = \"%s\"\n", *slot2);
  printf("\t*slot3 = \"%s\"\n", *slot3);


}
int reorder(char **s1, char **s2, char **s3){
  int leng1= strlen(*s1);
  int leng2= strlen(*s2);
  int leng3= strlen(*s3);

  if(leng1==leng2&&leng2==leng3){
    printf("They are same length\n" );
    return 3;
  } else if (leng1 == leng2 || leng1 == leng3 || leng2 == leng3){
      printf("Two are equal in length.\n");
      return 2;
  } else {
      //short 1
      if(leng1 <= leng2 && leng1 <= leng3){
          swap(s1,s3);
          if(leng3 <= leng2){
              swap(s1, s2);
          }
      }
      //short 2
      else if(leng2 <= leng1 && leng2 <= leng3){
          swap(s2, s3);
          // if 3 is shorter than 1
          if(leng1 <= leng3){
              swap(s1, s2);
          }
      }
      //short 3
      else if(leng3 <= leng2 && leng3 <= leng1){
          if(leng1 <= leng2){
              swap(s1, s2);
          }
      } else {
          return 0;
      }
      printf("All three are unequal in length.\n");
      return 1;
  }
}

void swap(char **s1,char **s2){

  char *temp= *s1;
  *s1=*s2;
  *s2= temp;
}
