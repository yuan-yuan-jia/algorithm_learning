#include "sortPublic.h"




int partion(int a[],int left,int right)
{
    int de = -1;
    while(de<left||de>right)
    { 
      de = rand()%right + left;
    }

    int tmp = a[de];
    a[de] = a[right];
    a[right] = tmp;
     int i = left;
     int j = left;
     for(;j<right&&i<right;j++)
     {
         if(a[j]<a[right])
         {
             int tmp = a[j];
             a[j] = a[i];
             a[i] = tmp;
             i++;
         }
     }
      tmp = a[i];
    a[i] = a[right];
    a[right] = tmp;
    return i;
}


void quick_sort(int a[],int left,int right)
{
    if(a==nullptr)
    {
        return;
    }

    if(left>=right)
    {
        return;
    }

    int index=partion(a,left,right);
    quick_sort(a,left,index);
    quick_sort(a,index+1,right);
}



int main()
{

    printf("--------quick_sort before------------------------\n");
    res(a,size);
    quick_sort(a,0,size-1);
    printf("--------quick_sort after------------------------\n");
    res(a,size);

}

