#include<stdio.h>
int mystrcmp(char *s, char *t) {
    for (; *s == *t; s++,t++)
      if (*s == '\0')
        return 0;
    return *s - *t;
  }

 void sort(int n, char *C[]) {
   int i,j;
   char *temp;
   for (i=0; i<n-1; i++)
     for (j=i+1; j<n; j++)
       if (mystrcmp(C[i],C[j]) > 0) {
         temp = C[i];
         C[i] = C[j];
         C[j] = temp;
       }
 }

int main() {
  char kk[]= {'k','a'};
  char ka[]={'a','b','c','k'};

  printf("the first pointer %c and the second %c points \n", kk[0],ka[3]);
  printf("the first pointer memort %p and the second memory %p points \n", &kk[0],&ka[3]);


    char *STG[] = {"Hello","99","3","zz","best"};
    int i,j;
    for (i=0; i<5; i++)
      printf ("STG[%i] = \"%s\"\n", i, STG[i]);
    sort(5,STG);
    for (i=0; i<5; i++)
      printf ("STG[%i] = \"%s\"\n", i, STG[i]);
    return 0;
  }
