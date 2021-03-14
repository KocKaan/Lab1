//You may assume that str points to a legal C string. For this problem the only
//vowels are ’a’, ’A’, ’e’, ’E’, ’i’, ’I’, ’o’, ’O’, ’u’, and ’U’. The int
//returned by countVowels() is the total number of vowels found in the string
//(pointed to by) str. In addition, countVowels() modifies str, specifically it
// removes every vowel.Example: if originally str ="abc3U@", countVowels(str)
//returns 2 and, after the call, str="bc3@".

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
int countVowels(char *str);

int main(){
    char str[50];

    printf("Enter a String: ");
    gets(str);
    int result= countVowels(str);
    printf("The amout of vowels in the string was: %d \n",result );

    printf("The originial string without vowels: %s \n",str );


  }
  int countVowels(char *str){
    int i=0, j;
    int counter=0;

    while(str[i]!='\0'){

        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            counter++;
            j=i;
            while(str[j-1]!='\0'||j==0){
                str[j] = str[j+1];
                j++;
            }
        }else{
          i++;
        }
    }
    return counter;
  }
