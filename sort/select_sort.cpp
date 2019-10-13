#include "sortPublic.h"


void select_sort(int a[],int n)
{
    for(int i =0;i<n-1;i++)
    {
        int j = i+1;
        int res1 = a[j];
        int index = j;
        for(;j<n;j++)
        {   
            if(a[j]<res1)
            {
                    index = j;
                    res1 = a[j];               
            }
        }
        if(a[index]<a[i]){
        int tmp = a[i];
        a[i]=a[index];
        a[index]=tmp;
        }
        res(a,n);
    }

    res(a,n);

}

int main()
{
    select_sort(a,size);
    return 0;
}