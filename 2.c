
//You may assume that str points to a legal C string. For this problem the only
//vowels are ’a’, ’A’, ’e’, ’E’, ’i’, ’I’, ’o’, ’O’, ’u’, and ’U’. The int
//returned by countVowels() is the total number of vowels found in the string
//(pointed to by) str. In addition, countVowels() modifies str, specifically it
// removes every vowel.Example: if originally str ="abc3U@", countVowels(str)
//returns 2 and, after the call, str="bc3@".

#include<stdio.h>
#include <string.h>


#include<stdio.h>
#include <string.h>
int countVowels(char *str);

int main() {
  char str[]= "kaan";
  int counter= countVowels(str);

  printf("The counter is: %d \n",counter);
}

int countVowels(char *str){
int counter=0;
int len= strlen(str);


for(int i=0; i<len; i++){
  if(str[i]!='a'||str[i]!='e'||str[i]!='i'||str[i]!='o'||str[i]!='u'||str[i]!='A'||str[i]!='E'||str[i]!='I'||str[i]!='O'||str[i]!='U'){
    counter++;
    for(int j=i; j<len;j++){
      str[j]=str[j+1];
    }
    len--;
  }
}
printf("The string is: %s\n", str);
return counter;
}
