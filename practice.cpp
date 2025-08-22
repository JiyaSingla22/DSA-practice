#include<iostream>
using namespace std;

// Print all elements of an array.
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"  ";
    } 
}

// Find the sum of all elements.
int sum(int arr[],int size)
{
    int sum=0;
      for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    } return sum;
}

// Find the average of array elements.
int average(int arr[],int size)
{   int sum=0;
    int avg=0;
      for(int i=0;i<size;i++)
    {
        sum+=arr[i];
       
    } 
    avg=sum/size;
    return avg;
}

// Count even and odd numbers in the array.

void eve_odd(int arr[],int size)
{   
      for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<"The element at " <<i<< " is even"<<endl;
        }
        if(arr[i]%2 !=0)
        {
           cout<<"The element at " <<i<< " is odd"<<endl;
        }
       
    } 
   
}
// Search for an element in the array (linear search).
void search(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            cout<<arr[i];
        }
    } 
}


int main()
{
    int array[5]={1,2,3,4,5};
    cout<<"the array is : ";
    print(array,5);
    cout<<"the sum is : "<<sum(array,5)<<endl;
    cout<<"the avg is : "<<average(array,5)<<endl;
    eve_odd(array,5);
    search(array,5,9);
    return 0;
}