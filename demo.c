#include <stdio.h>
int main()
{
    int i,sum=0;
    int marks[7]={50,60,70,90,80,85,40};
    for(int i=0;i<=6;i++)
    {
        printf("%d\n",marks[i]);
    }
    //calculate the sum
    for(i=0;i<=6;i++)
    {
        sum=sum+marks[i];
    }
    // display the sum
    printf("sum of all elements=%d",sum);
    return 0;
}