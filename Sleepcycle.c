#include <stdio.h>

int main()
{
    int age,time_slept,d;
   printf("Enter the age of the person: ");
   scanf("%d",&age);
   printf("enter the value of time_slept: ");
   scanf("%d",&time_slept);
   if(0<age<=9){
       d=10-age;
       if(time_slept<=10){
           printf("your sleep is not sufficient for u, Atleast 10hrs of sleep is needed, you have to increase your sleep time by ");
           printf("%d",d);
           printf(" hrs");
       }
       else{
           printf("You have Correct sleep cycle!");
       }
   }
     else if(9<age<=18){
         d=8-age;
       if(time_slept<=8){
           printf("your sleep is not sufficient for u, Atleast 8hrs of sleep is needed, you have to increase your sleep time by %d hrs",d);
       }
       else{
          printf("You have Correct sleep cycle!");
       }
   }
       else if(age>18){
           d=7-d;
           if(time_slept<=7){
               printf("your sleep is not sufficient for u, Atleast 7hrs of sleep is needed, you have to increase your sleep time by %d time!",d);
           }
           
           else{
               printf("You have Correct sleep cycle!");
           }
       }
    return 0;
}