#include<iostream>
using namespace std;
// int main()
// {
//     int arr[10]={1,2,3,4,4,4};
//     arr[6]=6;
//     for (int i=0;i<6;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

int duplicate(int arr[],int size)
{
    int ans=0;
    for(int i =0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    for(int i =1;i<size;i++)
    {
        ans=ans^i;
    }
    return ans;
}
int main()
{
    int array[6]={1,2,3,4,5,3};
    cout<<"The repeating element is "<<duplicate(array,6);
    return 0;
}