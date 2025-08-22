#include<iostream>
using namespace std;
void swap_rec(int arr[],int size, int index=0)
{   
    if(index>size)
    return ;
   
    swap(arr[index],arr[index+1]);
    // int a = arr[index];
    // arr[index]=arr[index+1];
    // arr[index+1]=a;
    return swap_rec(arr,size,index+2);
}

int main()
{
    int array[6]={2,1,4,3,6,5};
    swap_rec(array,6);
    for(int i=0;i<6;i++)
    {
        cout<<array[i];
    }
    return 0;
}
// void swap_num(int arr[],int size)
// {
//     int start=0;
//     while(start<size-1)
//     {
//         swap(arr[start],arr[start+1]);
//         start+=3;
//     }
// }
// int main()
// {
//     int array[9]={1,2,3,4,5,6,7,8,9};
//     swap_num(array,9);
//     for(int i=0;i<9;i++)
//     {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
// void rev(int arr[],int size)
// {
//   int start=0;
//   int end=size-1;
//   while(start<=end)
//   {
//    swap(arr[start],arr[end]);
//    start++;
//    end--;
//   } 
// }
// int main()
// {
//    int array[5]={1,2,3,4,5};
//   rev(array,5);
//    for(int i=0;i<5;i++)
//    {
//       cout<<array[i]<<" ";
//    }
  
//    return 0;
// }