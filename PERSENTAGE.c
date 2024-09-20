#include <stdio.h>
#define FULL_MARKS 100
#define TOTAL_MARSK 500
int main() {
    printf("\t\tLESS CALCULATE HIGHIER SECONDARY MARKS AND PERSENTAGE\n\n");
    int a,b,c,d,e,f,x;
    float g,h,i,j,k,l;
    printf("ENTER THE MARKS OBTAINED IN BENGALI(0-100):- ");
    scanf("%d",&a);
    if(a>101 || a<0){
        printf("ERROR !! ENTER RIGHT MARKS(0-100)\U0001F622");
        return 1;
    }
    printf("ENTER TEH MARKS OBTATINED IN ENGLISH(0-100):-");
    scanf("%d",&b);
    if(b>101 || b<0){
        printf("ERROR !! ENTER RIGHT MARKS(0-100)\U0001F622");
        return 1;
    }
    printf("ENTER THE MARKS OBTATINED IN BIOLOGY(0-100):- ");
    scanf("%d",&c);
    if(c>101 || c<0){
        printf("ERROE !! ENTER RIGHT MARKS(0-100)\U0001F622");
        return 1;
    }
    printf("ENTER THE MARKS OBTATINED IN PHYSIC:-  ");
    scanf("%d",&d);
    if(d>101 || d<0){
        printf("ERROR !! ENTER RIGHT MARKS(0-100)\U0001F622");
        return 1;
    }
    printf("IF YOUR OPTIONAL SUBJECT CHEMISTORY SO PRESS 2 OR IF YOUR OPTIONAL SUBJECT IS COMPUTER APPLICATIN SO PRESS 1 \n");
    scanf("%d",&x);
    switch(x){
         case 1:
          printf("ENTER COMPUTER APPLICATIN MARKS:-  ");
           scanf("%d",&e);
           break ;
         case 2:
           printf("ENTER CHEMISTORY MARKS:-  ");
           scanf("%d",&e);
            break ;
           }
    if(e>101 || e<0){
        printf("ERROR !! ENTER RIGHT MARKS(0-100)\U0001F622");
    }

    f=a+b+c+d+e;
    printf("TOTAL MARKS OF FIVE SUBJECT :- %d\n",f);
     g=a/(float)FULL_MARKS*100;
     h=b/(float)FULL_MARKS*100;
     i=c/(float)FULL_MARKS*100;
     j=d/(float)FULL_MARKS*100;
     k=e/(float)FULL_MARKS*100;
    printf("THE PERSENTAGE OF BENGALI MARKS:- %0.2f\n",g);
    printf("THE PERSENTAGE OF ENGLISH MARKS:- %0.2f\n",h);
    printf("THE PERSENTAGE OF BIOLOGY MARKS:- %0.2f\n",i);
    printf("THE PERSENTAGE OF PHYSIC MARKS:- %0.2f\n",j);
   switch(x){
         case 1:
          printf("ENTER COMPUTER APPLICATIN MARKS:- %f",k);
           scanf("%d",&e);
         case 2:
           printf("ENTER CHEMISTORY MARKS:-%f",k);
           }
   l = (f / (float)TOTAL_MARSK) * 100;
    printf("OVERALL PERCENTAGE OF FIVE SUBJECTS: %.2f\n\n", l);

   if(i>30){
    printf("YOUR PERSENTAGE OF FIVE SUBJECT MARKS IS ABOVE 50, SO CONGRATULATIONS YOU HAVE PASSED\n\n");
   }
   else{
    printf("YOUR PERSENTAGE OF FIVE SUBJECT MARKS IS BELOW 50, SO SORRY YOU HAVE FAILED\n\n");
   }
   printf("THANK YOU FOR USEING THIS APPLICATION || HAVE A GOOD DAY FOR YOU\U0001F600\n\n");
   return 0;
}
    

