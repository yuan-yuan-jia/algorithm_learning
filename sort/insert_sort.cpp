#include "sortPublic.h"


void insert_sort(int a[],int n)
{
      if(a==nullptr||n<=0)
        {   
            return;
        } 

        for(int i=1;i<n;i++)
        {
            int tmp = a[i];
            int j = i -1;
            for(;j>=0;j--)
            {
                if(a[j]>tmp)
                {
                    a[j+1] = a[j];
                }
                else{
                    break;
                }
            }

            a[j+1] = tmp;
            res(a,n);
        }
}


int main()
{

    insert_sort(a,size);
}
