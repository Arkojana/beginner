#include<stdio.h>
int main()
{
    printf("\t\tCALCULATE YOUR AGE PROPERLY\n");
    int a,b,c,d,e,f,g,h,i,x;
    printf("ENTER CURENT YEAR:- ");
    scanf("%d",&a);
    x=1;
    while(a!=2024){
     printf("ERROR !! ERROR !! ERROR \n ENTER RIGHT YEAR (UNDER 2024):- ");
    scanf("%d",&a);
     x=x+2022;
     return a;
    }
    printf("ENTER CURENT MONTHS (1-12):- ");
    scanf("%d",&b);
      while(b>12 || b<0){
     printf("ERROR !! ERROR !! ERROR \n ENTER RIGHT MONTH (1-12):- ");
    scanf("%d",&b);
     x=x+4;
     return a;
    }
    printf("ENTER CURENT DAY (1-31):- ");
    scanf("%d",&c);
   while(c>31 || c<0){
     printf("ERROR !! ERROR !! ERROR \n ENTER RIGHT day (1-31):- ");
    scanf("%d",&c);
     x=x+9;
     
   }
    printf("SO CURENT DATE IS %d YEAR %d MONTH %d DAY\n",a,b,c);
    printf("ENTER YOUR YEAR OF BARTH:- ");
    scanf("%d",&d);
    while(d>2024 || d<0){
     printf("ERROR !! ERROR !! ERROR \n ENTER RIGHT YEAR OF BARTH (UNDER 2024):- ");
    scanf("%d",&d);
     x=x+673;
     
    }
    printf("ENTER YOUR MONTH OF BARTH:- ");
    scanf("%d",&e);
    while(e>12 || e<0){
     printf("ERROR !! ERROR !! ERROR \nENTER YOUR MONTH OF BARTH  (UNDER 2024):- ");
    scanf("%d",&e);
     x=x+4;
     
    }
    printf("ENTER YOUR DAY OF BARTH :- ");
    scanf("%d",&f);
    while(f>31 || f<0){
     printf("ERROR !! ERROR !! ERROR \n ENTER RIGHT day OF BORN (1-31):- ");
    scanf("%d",&f);
     x=x+9;
     
   }
    g=a-d; h=b-e; i=c-f;
    if(h<0){
        h+=12;
        g=g-1;
    }
    if(i<0){
        i+=31;
        h=h-1;
    }
    printf("YOU ARE A %d YEAR    %d MONTH   %d DAY OLD\n",g,h,i);
    if(g>17){
        printf("CONGRALULETION YOU ARE A JUVENILE ");
    }
    else{
        printf("SORRY YOU ARE A MINOR IN THIS TIME");
    }
    printf("\n\t\t THANK YOU FOR USEING THIS APPLICATION. HAVE A GOOD DAY TO YOU");

    return 0;
}