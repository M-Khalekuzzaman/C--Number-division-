#include<stdio.h>
int main()
{
    int x,y;
    printf("Inter your x value :");
    scanf("%d",&x);
    printf("Inter your y value :");
    scanf("%d",&y);
    if(x%y ==0){
        int div1 = x/y;
        printf("Division is : %d\n",div1);
    }
     else if(x%y !=0){
       double  div2 = (float) x/y;
        printf("Division is : %.2lf\n",div2);
    }
    else
        printf("Division not possible");
    getch();

}
