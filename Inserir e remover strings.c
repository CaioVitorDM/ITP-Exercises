#include <string.h>
#include <stdio.h>
#include<ctype.h>

void strremove(char str1[50], char str2[50],char str3[50]){
  int x = 0, pri=0, ult=0, str1size, str2size, str3size, sair = 0;
  for (str1size = 0; str1[str1size] != '\0' || str1size > 50; str1size++);
  for (str2size = 0; str2[str2size] != '\0' || str2size > 50; str2size++);
  for (;x <= (str2size - str1size) && sair == 0; x++) {
      if (str2[x] != str1[0]) {
          continue;
      }
    pri = x;
    for (int i = 1; i < str1size; i++) {
        if (str1[i] == str2[pri+i]){
            if (i == str1size-1){
                ult = pri+i;
                sair = 1;
            }
            continue;
        }
        break;
    }
  }
  if (sair == 0) {pri = 0; ult = 0; str3size = 0;}
  else {str3size = ult - pri + 1;}
  for (int i = 0, j = 0; i <= str2size; i++) {
    if (i == str2size) {
        str3[j] = '\0';
        continue;
    }
    if (sair == 1 && i >= pri && i <= ult){
        continue;
    }
    str3[j++] = str2[i];
  }
  printf("%s\n", str3); 
} 

void strinsert(char str1[50],char str2[50],int x,char str3 [50]){
  int c=0;
  int d=x;
  while(c!=x){
    str3[c]=str2[c];
    c++;  
  }
    c=0;
    while (str1[c]!='\0'){
        str3[d]=str1[c];
        c++; 
        d++;  
    }
  while (str2[x]!='\0'){
        str3[d]=str2[x];
        x++;
        d++;
      
    }
}  

int main(){
  char sel[50];  
  char ins[]="strinsert";
  char remov[]="strremove";
  int pos;
  int c=0;
  scanf(" %[^\n]\n", sel);
  int retorno = strcmp ( sel,remov);
  if (retorno == 0){
    char s1 [50];
    char s2 [50];
    char s3 [50]="\0";
    scanf(" %[^\n]\n", s1);
    scanf(" %[^\n]\n", s2);
    strremove(s1,s2,s3 );
    }
  else if (retorno!=0){
    char s1 [50];
    char s2 [50];
    char s3 [50]="\0";
    scanf(" %[^\n]\n", s1);
    scanf(" %[^\n]\n", s2);
    scanf("%d",&pos);
    strinsert(s1,s2,pos,s3);
    printf("%s",s3);     
     
  }
}