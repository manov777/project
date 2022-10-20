#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

double xmin, xmax, y;
int step, var;
unsigned int N = 1;
int main()
{
    printf("Enter X1: ");
    for(; scanf("%lf", &xmin) != 1;){
            printf("error, pls try again..");
            return 0;

    }

    printf("Enter X2: ");
    for(; scanf("%lf", &xmax) != 1;){
            printf("error, pls try again..");
            return 0;

    }

    printf("Enter step: ");
    for(; scanf("%d", &step) !=1;){
            printf("error, pls try again..");
            return 0;

    }

    printf("Enter var: ");
    for(; scanf("%d", &var) !=1;){
            printf("error, pls try again..");
            return 01;

    }
        printf("***************************\n");
        printf("*  N    *  X  *     F(X)  *\n");
        printf("***************************\n");
if(var == 1){
      for(float i=xmin; i<=xmax; i=i+step, N++) {

        y=pow((i+125),3)-45*i-18;

        printf("+-------+-------+---------+");
        printf("\n|%d",N);
        printf("\t|%.1f",i);
        printf("\t|%.1f|\n",y);
     if(N==5){
     printf("\nPress any key to continue: \n");
     getch();
     }
   }
        printf("+-------+-------+---------+");
}
 if(var == 2){

        printf("Enter N: ");
            for(; scanf("%d", &N) !=1;){
                printf("error N");
                return 0;
            }

    for(int i=1; i<=N; i++, xmin=xmin+step) {

        y=pow((xmin+125),3)-45*xmin-18;

        printf("+-------+-------+---------+");
        printf("\n|%d",i);
        printf("\t|%.1f",xmin);
        printf("\t|%.1f|\n",y);
     if(i==5){
     printf("\nPress any key to continue: \n");
     getch();
     }
   }
   printf("+-------+-------+---------+");
   }





    return 0;
}


