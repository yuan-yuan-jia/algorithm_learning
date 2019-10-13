#include "sortPublic.h"


void bubble_sort(int a[],int n)
{
    if(a==nullptr||n<=0)
    {
        return;
    }
    bool isChange = false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {   if(a[j]>a[j+1])
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                isChange = true;
            }

        }
        res(a,n);
        if(!isChange)
        {
            break;
        }
        else
        {
            isChange = false;
        }
        
    }

}


int main()
{
    
    bubble_sort(a,size);

    return 0;
}