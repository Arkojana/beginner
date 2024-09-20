#include <stdio.h>

int main() {
   printf("\t\t\t\t\t______________\n \t\t\t\t\t| CALCULATER |\n\t\t\t\t\t_______________\n\n");
   int a,b,c;
   char choice;
   printf("CHOICE operator(+,-,*,/,%):- ");
   scanf("%c",&choice);
   switch(choice){
       case '*':
       printf("ENTER FIRST NUMBER:- ");
       scanf("%d",&a);
       printf("ENTER SECOND NUMBER:- ");
       scanf("%d",&b);
       c=a*b;
       printf("THE multiple OF TWO NUMBER:- %d",c);
       break;
        case '/':
       printf("ENTER FIRST NUMBER:- ");
       scanf("%d",&a);
       printf("ENTER SECOND NUMBER:- ");
       scanf("%d",&b);
       c=a/b;
       printf("THE division OF TWO NUMBER:- %d",c);
       break;
        case '+':
       printf("ENTER FIRST NUMBER:- ");
       scanf("%d",&a);
       printf("ENTER SECOND NUMBER:- ");
       scanf("%d",&b);
       c=a+b;
       printf("THE addition OF TWO NUMBER:- %d",c);
       break;
        case '-':
       printf("ENTER FIRST NUMBER:- ");
       scanf("%d",&a);
       printf("ENTER SECOND NUMBER:- ");
       scanf("%d",&b);
       c=a-b;
       printf("THE subtract OF TWO NUMBER:- %d",c);
       break;
        case '%':
       printf("ENTER FIRST NUMBER:- ");
       scanf("%d",&a);
       printf("ENTER SECOND NUMBER:- ");
       scanf("%d",&b);
       c=a%b;
       printf("THE MODULES OF TWO NUMBER:- %d",c);
       break;
       default:
       printf("ERROR !! ENTER RIGHT OPERATOR(*,/,-,+)");
       return 1;
     }

    return 0;
}