#include "searchPublic.h"

int binary_search(int a[],int start,int end,int target)
{
        if(start>end)
        {
            return -1;
        }
        int mid = start + ((end -start)>>1);
        if(a[mid]==target)
        {
            return mid;
        }else if(a[mid]>target)
        {
            /* code */
            return binary_search(a,start,mid-1,target);
        }else
        {
            /* code */
            return binary_search(a,mid+1,end,target);
        }

        return -1;
        
        
}

int binary_search_withRecursive(int a[],int target,int size)
{ 
    if(a==nullptr||size<=0)
    {
        return -1;
    }

    return binary_search(a,0,size-1,target);

}



int binary_search_Norecursive(int a[],int target,int size)
{
    if(a==nullptr||size<=0)
    {
        return -1;
    }
    int start = 0,end = size-1;
    int mid = start + ((end -start)>>1);
    while(start<=end)
    {
        if(a[mid]==target){
            return mid;
        }else if (a[mid]>target)
        {
            end = mid - 1;
        }else
        {
            start = mid + 1;
        }
        mid = start + ((end -start)>>1);

    }

    return -1;
        

}


int main()
{

  //int index = binary_search_Norecursive(a,-1,size);
  int index = binary_search_withRecursive(a,-1,size);
  if(index == -1){
      printf("find failed!!!\n");
  }else
  {
      printf("find successfully,the index is %d\n",index);
  }
  

}

