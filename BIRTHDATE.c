#include<stdio.h>

int main ()
{
int i,n;
char name[100][i];
int y[100];
int m[100];
int d[100];
int a[100];
printf("number of student :");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("student numb %d: ",i+1);
    scanf("%s",&name[i]);
    printf("birthday :\n ");
    printf("year:");
    scanf("%d",&y[i]);
    printf("month:");
    scanf("%d",&m[i]);
    printf("day:");
    scanf("%d",&d[i]);
}
for(i=0;i<n;i++){
    a[i]=((100*y[i])+(100*m[i])+d[i]);
}
int old = a[0];
for(i=0;i<n;i++){
        if(a[i]<old){
            old=a[i];
            }
}
printf("%d%S",old,name[i]);

}
