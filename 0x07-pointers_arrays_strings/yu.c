    #include<stdio.h>  
    #include <string.h>    
    int main(){    
      char str[100]="First, solve the problem. Then, write the code.";    
      char *sub;    
      sub=strstr(str,"");    
      printf("\nSubstring is: %s",sub);    
     return 0;    
    }    