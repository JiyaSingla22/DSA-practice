#include<iostream>
#include<climits>
using namespace std;

bool isPossible(int arr[], int size, int painters , int max_poss)
{
    int painter =1 ; 
    int brick=0 ;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max_poss)
        {
            return false;
        }
        if(brick+arr[i]<max_poss)
        {
            brick +=arr[i];
        }
        else
        {
            painter++;
            brick= arr[i];
        }
    } return painter>painters?false:true;
}

int painter(int arr[],int size,int painters)
{
    int max_val=INT_MIN;
    int sum=0;

     for(int i = 0; i < size ; i++)
     {
        sum +=arr[i];
        max_val = max(arr[i],max_val);
     }
     int end= sum;
     int start= max_val;
     int ans=-1;
     int mid= start+(end-start)/2;
     while(start<=end)
     {
        if(isPossible(arr,size,painters,mid))
        {
            ans=mid;
            end= mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid= start+(end-start)/2;
     }
     return ans ;
}




int main()
{
    int array[4]={10,20,30,40};
    int painters =3;
    cout<<painter(array,4,painters);
    return 0;
}