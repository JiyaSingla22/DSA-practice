#include<iostream>
using namespace std;
int pivot(int arr[], int size)
{
    int s=0;
    int e = size-1;
    int mid= s+ (e-s)/2;
    while(s<e)
    {
        if(arr[mid]>arr[0])
        s=mid+1;
        else
        e=mid;
        mid= s+ (e-s)/2;
    }return s;
}
 int binary(int arr[],int s ,int e , int num)
{
    int start=s;
    int end=e;
    int mid= start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==num)
        {
            return  mid;
        }
        else if(arr[mid]<num)
        {
            start=mid+1;
         
        }
        else{
            end=mid-1;
        }
         mid= start+(end-start)/2;
    } return -1;
}
int find(int arr[],int size , int key)
{
    
    int pivot_element = pivot(arr,size);
    if(key>=arr[pivot_element] && key<=arr[size-1])
    {
        cout<<"The element is at "<<binary(arr,pivot_element,size-1,key)<<"th"<<" index";
    }
    else
    cout<<"The element is at "<<binary(arr,0,pivot_element-1,key)<<"th"<<" index";
}

int main()
{
    int array[10]={7,8,9,0,1,2,3,4,5,6};
    find(array ,10,6);
    
    return 0;
}