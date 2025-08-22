#include<iostream>
using namespace std;
int pivot(int arr[],int size)
{
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    while(s<e)
    {
        if(arr[mid]>arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=(s+e)/2;
    }
  return s ;
}
int main()
{
    int array[6]={2, 3, 4 , 0 , 1, 2};
    cout<<pivot(array,6);
    return 0;
}






// int mount_peak(int arr[],int size)
// {
//     int s=0 ;
//     int e=size-1;
//     int mid= (s+e)/2;
//     while(s<e)
//     {
//         if(arr[mid]<arr[mid+1])
//         {
//             s = mid+1;
//         }
//         else 
//         {
//             e=mid;
//         }
//         mid= (s+e)/2;
//     } return arr[s];

// }
// int main()
// {
//     int peak[9]={82,74,68,22,13,9,6,3,1};
//     cout<<"The peak element is  "<<mount_peak(peak,9);

//     return 0;
// }