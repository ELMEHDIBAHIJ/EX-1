#include <stdio.h>
#include <stdlib.h>
#include<time.h>

typedef struct OBJECT{
 char name[50];
 long int code;
 double prix;
 int qaunt;
 double total;
 int day , month , year;
}product;

product pd[5000];
int i,x=0;
int j;
int n;
int ref;
int ab;
int temp;
long int R;
int Rq;
int abd;

int aca;
long int co;
int q;
int nq;
double total_sell = 0 ;
int soldprod = 0;

int main ()
{

    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("Current Date: %d-%d-%d \n\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);



int a;
start:
     printf("\n_______________________________________________________________________________________\n");
      printf("\n_______________________________________________________________________________________\n");
printf("                  -type 1 to: add new products\n");
printf("                  -type 2 to: view products list\n");
printf("                  -type 3 to: buy products\n");
printf("                  -type 4 to: search for products\n");
printf("                  -type 5 to: view low quantity products \n");
printf("                  -type 6 to: add more units to an existing product \n");
printf("                  -type 7 to: delete products \n");
printf("                  -type 8 to: view sales statistics \n\n");
scanf("%d",&a);
do{
switch(a){
  case 1:
      system("cls");
      printf("========================================================================================\n");
      printf("type '1' to add one product, \n type '2' to add multiple products\n");
 scanf("%d",&ab);
switch(ab){


 case 1:


    printf("type product code : ");
    scanf("%ld",&pd[x].code);
     printf("type product name : ");
    scanf("%s",&pd[x].name);
    printf("type product quantity : ");
    scanf("%d",&pd[x].qaunt);
    printf("type product price : ");
    scanf("%lf",&pd[x].prix);
    printf("___________________________________________________________________________________________________\n");
    x++;


   system("cls");

   goto start;



case 2:


printf("number of products added: ");
scanf("%d",&n);
for(i=0;i<n;i++){

    printf("type product %d code : ",i+1);
    scanf("%ld",&pd[x].code);
     printf("type product %d name : ",i+1);
    scanf("%s",&pd[x].name);
    printf("type product %d quantity : ",i+1);
    scanf("%d",&pd[x].qaunt);
    printf("type product %d price : ",i+1);
    scanf("%lf",&pd[x].prix);
    printf("___________________________________________________________________________________________________\n");
    x++;

}
system("cls");
goto start;
}

  case 2:
      system("cls");
      printf("-type '1' for price sort: \n -type '2' for sort by letters:\n");
int ac;
scanf("%d",&ac);
switch (ac){
    case 1:
for(i=0;i<x;i++)
    {
        for(int j=i+1;j<x;j++){
        if(pd[i].prix<pd[j].prix){
            product ref=pd[i];
            pd[i]=pd[j];
            pd[j]=ref;

    }

}
}
for(i=0;i<x;i++){
    printf("name:%s |price:%.2lf  |ttc price:%.2lf\n",pd[i].name,pd[i].prix,pd[i].prix*1.15);
}

goto start;
case 2:
    system("cls");

        for (i = 0; i < x; i++) {
                    for ( j = 0; j <x -1; j++){
                        if (strcmp(pd[j].name, pd[j+1].name) == 1) {
                            product temp= pd[j];
                            pd[j] = pd[j+1];
                            pd[j+1] = temp;

                            }

                            }


}
for(i=0;i<x;i++){
    printf("name:%s |price:%.2lf  |ttc price:%.2lf\n",pd[i].name,pd[i].prix,pd[i].prix*1.15);
}
goto start;
}


case 3:

system("cls");
printf("type '1' to buy a products      type '0' to return to menu :");
scanf("%d",&aca);
switch (aca){
    case 0:
        system("cls");
    goto start;

case 1:

 printf("enter code:");
 scanf("%ld",&co);
    for(i=0;i<x;i++){

       if(co==pd[i].code){
            printf("%d units available\n",pd[i].qaunt);
            printf(" enter quantity:");
            scanf("%d",&q);

            if(q <= 0){
                printf("you typed a negative number try again\n");
                printf("_______________________________________________________________________________________\n");

            }else

            if( pd[i].qaunt < q )
            {
                printf("quantity is currently unafordable\n");
                printf("_______________________________________________________________________________________\n");

            }else
            if(pd[i].qaunt>=q){

                    pd[i].day = tm.tm_mday;
                    pd[i].month = tm.tm_mon+1;
                    pd[i].year = tm.tm_year+1900;


                pd[i].qaunt = pd[i].qaunt - q;
                pd[i].total = pd[i].total + (pd[i].prix*1.15*q);

                printf("\n purchased \n");
                 printf("%d",pd[i].day);
                printf("_______________________________________________________________________________________\n");

            }
            break;

        }
        else if(co!=pd[i].code)
        {
            printf("product is unavailable");
            printf("\n_______________________________________________________________________________________\n");

        }


    }
    system("cls");
    goto start;

}
      break;
  case 4:
      system("cls");
      printf("type '1'for code searching     type '2' for quantity searching  type'0'to return to main menu :");
scanf("%d",&abd);
 switch(abd)
    {
        system("cls");
     case 1:
    printf("type product code:");
    scanf("%ld",&R);

    for(i=0;i<x;i++){
       if(pd[i].code==R)
        {
            printf("name:%s |price:%.2lf  |ttc price:%.2lf\n",pd[i].name,pd[i].prix,pd[i].prix*1.15);
            printf("\n_______________________________________________________________________________________\n");

        }else
        if(pd[i].code!=R)
        {
            printf("\n____________Product not found______\n");
        }

    }
    goto start;
     case 2:
         system("cls");
     printf("type product quantity:");
    scanf("%d",&Rq);

    for(i=0;i<x;i++){
        if(pd[i].qaunt==Rq)
        {
            printf("quantity = %d ",Rq);
            printf("name:%s |price:%.2lf  |ttc price:%.2lf\n",pd[i].name,pd[i].prix,pd[i].prix*1.15);
            printf("\n_______________________________________________________________________________________\n");
        }
        else{
            printf("\n____________Product not found______\n");
        }

    }
     case 0:
         system("cls");
        goto start;
}

      break;
  case 5:
      system("cls");
      printf(" low quantity products\n");
    for(i=0;i<x;i++){
       if( pd[i].qaunt< 3 )
        {
            printf("name:%s |quantity: %d\n",pd[i].name,pd[i].qaunt);

        }
        }
    goto start;
      break;
  case 6:
      system("cls");
    printf("type product code:");
    scanf("%ld",&R);

    for(i=0;i<x;i++){
       if(pd[i].code==R)
        {
            printf("name:%s |quantity:%d\n",pd[i].name,pd[i].qaunt);
            printf("\n_______________________________________________________________________________________\n");
            printf("quantity to add : \n");
            scanf("%d",&nq);
            pd[i].qaunt=pd[i].qaunt+nq;

        }else{
            printf("\n____________Product not found______\n");
        }

    }
    system("cls");
    goto start;
      break;
  case 7:
      system("cls");
       printf("type product code to delete:");
    scanf("%ld",&R);

    for(i=0;i<x;i++){
       if(pd[i].code==R){
        printf("product %s deleted\n",pd[i].name);
        printf("\n_______________________________________________________________________________________\n");

          for(int G = i;G<x;G++){

            pd[G]=pd[G+1];
          }
          x--;

        }
        else{
            printf("\n____________Product not found______\n");
        }

    }
    system("cls");
    goto start;

      break;
  case 8:
      system("cls");
      printf("current day statistics \n");
      for(i=0;i<x;i++){
        if(pd[i].day == tm.tm_mday && pd[i].month == tm.tm_mon+1 && pd[i].year == tm.tm_year+1900){
            total_sell = total_sell + pd[i].total;
            soldprod++;
            for(int j=i+1;j<x;j++){

                if(pd[i].total<pd[j].total){
                    product ref=pd[i];
                    pd[i]=pd[j];
                    pd[j]=ref;
                }

            }
        }
      }





      printf("\n total sales : %lf DH",total_sell);
      printf(" \n average sales : %lf",total_sell/soldprod);
      printf(" \n max price sold today:%lf ",pd[0].total);
      printf(" \n min price sold today:%lf ",pd[soldprod-1].total);

      goto start;

      break;
  }
}while(a==1||a==2||a==3||a==4||a==5||a==6||a==7||a==8);
}

