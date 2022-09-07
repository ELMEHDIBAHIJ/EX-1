#include <stdio.h>
#include <math.h>


int main()
{ 
	int a ,b ,c ,e ,d;
	printf("write first numb") ;
	scanf("%d",&a) ;
	printf("write second numb");
	scanf("%d",&b);
	printf("write third numb");
	scanf("%d",&c);
    printf("write fourth numb");
	scanf("%d",&d);
    e = pow(2*a,3) + pow(2*b,2) + pow(2*c,1) + pow(2*d,0) ;
	if(a < 2 && b < 2 && c < 2 && d < 2 && a > -1 && b > -1 && c > -1 && d > -1){
		printf("%d",e);
    }else{
    printf("use second base numbers only");
	 }



	return 0 ;
}

