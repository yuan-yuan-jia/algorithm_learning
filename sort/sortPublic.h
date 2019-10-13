#ifndef __SortPublic_H
#define __SortPublic_H
#include<stdio.h>
#include<stdlib.h>
int a[]={3,5,4,1,2,6};
int size = 6;
void pr_()
{
    printf("---------------------------------------------------------\n");
}
void res(int a[],int n)
{
     if(a==NULL||n<=0)
    {
        return;
    }

    pr_();
    for(int i =0;i<n;i++)
    {   
        printf("%d,",a[i]);
        
    }
    printf("\n");
    pr_();
}
#endif // !__SortPublic_H#define 