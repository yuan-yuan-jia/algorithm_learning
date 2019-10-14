#include "sortPublic.h"


void merge(int a[],int lstart,int lend,int rstart,int rend)
{   int sum = rend-lstart+1;
    int * tmp = (int*) malloc(sizeof(int)*sum);
    int i = lstart;
    int j = rstart;
    int index = 0;
    while(i<=lend&&j<=rend&&index<sum)
    {
        if(a[i]<a[j]){
            tmp[index] = a[i];
            i++;
            index++;
        }else if(a[i]>a[j])
        {
            tmp[index] = a[j];
            j++;
            index++;
        }else
        {
            tmp[index++] = a[j];
            tmp[index++] = a[i];
            j++;
            i++;
        }
        
    }

    if(index<sum&&i<=lend&&j>rend)
    {
        for(;i<=lend&&index<sum;){
            tmp[index++] = a[i++];
        }
    }
    if(index<sum&&j<=rend&&i>lend)
    {
        for(;j<=rend&&index<sum;)
        {
            tmp[index++] = a[j++];
        }
    }

    index = 0;

    for(int k = lstart;k<=rend;k++)
    {
        if(index>=sum)
        {
            break;
        }
        a[k] = tmp[index++];
    }
    free(tmp);
}

void merge_sort(int a[],int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int mid = (start + end) / 2;
    merge_sort(a,start,mid);
    merge_sort(a,mid+1,end);
    merge(a,start,mid,mid+1,end);
}

void merge_sort_start(int a[],int n)
{   if(a==nullptr||n<=0)
    {
        return;
    }

    merge_sort(a,0,n-1);


}



int main(int argc, const char** argv) {
    printf("--------merge_sort before------------------------\n");
    res(a,size);
    merge_sort_start(a,size);
    printf("--------merge_sort after------------------------\n");
    res(a,size);
    
    return 0;
}

