#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char kk[]= {'k','a'};
  char ka[]={'a','b','c','k'};

//  printf("the first pointer %c and the second %c points \n", kk[0],ka[3]);
//  printf("the first pointer memort %p and the second memory %p points \n", &kk[0],&ka[3]);


    char *STG[] = {"Hello","99","3","zz","best"};
    char **k = &STG[0];
    printf("stg0 is %s\n", STG[0]);
    printf("points to %s\n", *k );

  }
