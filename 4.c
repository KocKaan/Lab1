//Write a C function
//int isPrime(int n): isPrime(n) returns 1 if n is prime and returns 0
//otherwise. You may assume n is an integer greater than 1.

//int main(int argc, char *argv[])
//This program first checks that argc==3. If it is not, the program prints an
//error message and terminates. You may assume that argv[1] and argv[2] are
//characters containing only digits. Have atoi() convert argv[1] and argv[2] to
// integers called arg1 and arg2. Confirm that arg1 <= arg2 (print an error
//message if this is not so). Finally, for all n, arg1<= n <= arg2, call
//isPrime(n) and print whether n is prime.

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int isPrime(int n);

int main(int argc, char *argv[argc]){
  if(argc!=3){
    fprintf(stderr, "Amount of argument should be 3: argc!=3\n");
      exit(0);
  }

  if(atoi(argv[1])>atoi(argv[2])){
    fprintf(stderr, "First argument shouldnt be higher than the second\n");
      exit(0);
  }
  int i=atoi(argv[1]);
  int k=atoi(argv[2]);
  for(;i<=k;i++){
    if(isPrime(i)==1){
      printf("the digit %d is prime\n",i );
    }else{
      printf("the digit %d is not prime\n",i );
    }
  }


}
int isPrime(int n){
  int prime=1;
  for(int loop = 2; loop <n; loop++) {
      if((n % loop) == 0) {
         prime = 0;
      }
   }
   return prime;
}
