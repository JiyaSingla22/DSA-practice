#include<iostream>
using namespace std;
int sum(int array[],int size, int target)
{
   
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
             for(int k=i+1;j<size;k++)
             {
            if(array[i]+array[j]+array[k]==target)
            {
                cout<<array[i]<<" , "<<array[j]<<" and "<<array[k]<<endl;
           
            }
       
            }
        } return 0;
    } 
        
       
}
int main(){
   int arr[5]={1,2,3,4,5};
   int target=8;
   sum(arr,5,target);
   
    return 0;
}