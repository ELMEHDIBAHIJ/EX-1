#include<stdio.h>  
int main(){    
int number;     
printf("enter a number:");    
scanf("%d",&number);    
switch(number){ 
 case 1:
 printf(" im ok ");
 break;
 case 2:
 printf(" im in trouble");
 break;
 case 3:
 printf(" i need help ");
 break;
}    
return 0;  
}    
