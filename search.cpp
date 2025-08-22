#include<iostream>
using namespace std;

int search(int arr[],int size,int key)
{
    if(size==0)
    {
        return 0;
    }
    if(arr[0]==key)
    {return 1;}
    return arr[0]==search(arr+1,size-1,key);

} 

int main()
{
    int array[4]={1,2,3,4};
   
    if (search(array,4,1))
    cout<<"found";
    else
        cout<<"not found";
    
    return 0;
}
// for(int i=0;i<size;i++)
//     {
//         if(arr[i]==key)
//         {
//        return 1;
//         }
       
// }return 0;
    
