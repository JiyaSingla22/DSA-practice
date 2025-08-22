#include<iostream>
using namespace std;
int first_occ(int arr[],int n,int key)
{
    int start=0 , ans =-1;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            end= mid-1;
            ans=mid;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
       { end=mid-1;}
        mid=(start+end)/2;
    }return ans;

}
int last_occ(int arr[],int n,int key)
{
    int start=0 , ans =-1;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            start= mid+1;
            ans=mid;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {end=mid-1;}
        mid=(start+end)/2;
    }return ans;

}
int main()
{
    int arr1[7]={1,2,3,3,3,3,4};
    cout<<"The first and last occurence of 3 is "<<first_occ(arr1,7,3)<< " and "<<last_occ(arr1,7,3)<<endl;
    return 0;
}





// int binary(int arr[],int size , int num)
// {
//     int start=0;
//     int end=size-1;
//     int mid= start+(end-start)/2;
//     while(start<=end)
//     {
//         if(arr[mid]==num)
//         {
//             return  mid;
//         }
//         else if(arr[mid]<num)
//         {
//             start=mid+1;
         
//         }
//         else{
//             end=mid-1;
//         }
//          mid= start+(end-start)/2;
//     } return -1;
// }
// int main()
// {
//     int odd[6]={1,2,3,4,5,9};
//     cout<<binary(odd,5,10);
//     return 0;
// }