#include<iostream>
#include <climits>
using namespace std;
int minimum(int arr[], int n)
{
    int largest=INT_MAX;
    int a;
    for(int i=0;i<n;i++)
    {
    //   largest =min(largest,arr[i]);
     
        if(arr[i]<largest)
        {
            largest=arr[i];
            a=arr[i];
        } 
    }
    return a;
}
int maximum(int arr[], int n)
{
    int  smallest=INT_MIN;
     int c;
    for(int i=0;i<n;i++)
    {     
        smallest= max(smallest,arr[i]);
        // if(arr[i]>smallest)
        // {
        //     smallest=arr[i];
        //     c=arr[i];
        // }
    } return smallest;

}
int main()
{
    int size;
    cin>>size;
     int arr[100];
     for(int i=0;i<size;i++)
     {
        cin>>arr[i];
     }
     cout<<endl;
     cout<<"The min value is "<<minimum(arr,size)<<endl;
      cout<<"The max value is "<<maximum(arr,size)<<endl;
    return 0;
}