#ifndef __SEARCHPUBLIC_H
#define __SEARCHPUBLIC_H
#include<stdio.h>
#include<stdlib.h>

int a[]={1,2,3,4,5,6};
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
#endif // DEBUG