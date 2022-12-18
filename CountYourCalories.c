#include<stdio.h>
#include<string.h>
int main()
{
    char t[20];
    int k;
    printf("\n COUNT YOUR STEPS AND CALORIES \n");
    printf("\n Enter the activity \n");
    printf("\n 1-Walking \n");
    printf("\n 2-Running \n");
    printf("\n 3-Swimming \n");
    printf("\n 4-Cricket \n");
    printf("\n 5-Badminton \n");
    printf("\n 6-Football \n");
    printf("\n 7-Skipping \n");
    printf("\n Activity : ");
    scanf("%s",t);
    printf("\n Enter the time you did the work in minutes \n");
    printf("\n Time : ");
    scanf("%d",&k);
    if(strcmp(t,"Walking"))
    {
        printf("\n Calories burnt = %d \n",(4*k));
    }
    else if(strcmp(t,"Running"))
    {
        printf("\n Calories burnt = %d \n",11.4*k);
    }
    else if(strcmp(t,"Swimming"))
    {
        printf("\n Calories burnt = %d \n",6.6*k);
    }
    else if(strcmp(t,"Football"))
    {
        printf("\n Calories burnt = %d \n",9*k);
    }
    else if(strcmp(t,"Badminton"))
    {
        printf("\n Calories burnt = %d \n",8*k);
    }
    else if(strcmp(t,"Cricket"))
    {
        printf("\n Calories burnt = %d \n",3.8*k);
    }
    else if(strcmp(t,"Skipping"))
    {
        printf("\n Calories burnt = %d \n",15*k);
    }
    else
    {
        printf("\n Entered activity is error \n");
    }
}