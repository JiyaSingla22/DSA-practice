#include<iostream>
#include<vector>
using namespace std;
int sel_sort(int array[],int size)
{
    
    for(int i = 0;i<size;i++)
{
    int minIndex= i;  //assume that the min value is at ith index
    for(int j =i+1; j<size;j++)
    {

    if(array[j]<array[minIndex]) //check if other value is less than the value at minIndex
    minIndex=j; //if yes then it will store that index

    }

    //swap(array[minIndex],array[i]); //swap min value with our assumed value  
    int key = array[minIndex];
    while(minIndex>i)
    {
        array[minIndex]=array[minIndex-1];
        minIndex--;
    }
    array[i]=key;
}
}
    

int main()
{
  int array[10]={1,3,10,4,2,8,7,5,6,9};
    int n= sizeof(array)/sizeof(array[0]);
    sel_sort(array,n);
  
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}