#include<stdio.h>
int main (){

        int num[5],sum=0,i ,max,min;

        printf("Enter Five Number: ");
        for(i=0; i<5; i++)

        {
            scanf("%d",&num[i]);
        }


           for(i=0; i<5; i++)

           {
               sum = sum +num[i];
           }

           printf("\n The Sum is : %d",sum);
           printf(" \n The Average is %d", sum/5);


           max = num[0];
           min = num[0];

           for(i=0; i<5; i++)

           {
               if(max<num[i])
               {
                   max = num[i];
               }

               if(min>num[i])
               {
                   min = num[i];
               }
           }

              printf("\n The Maximum Number : %d",max);
              printf("\n The Minimum Number : %d",min);

     return 0;
}
