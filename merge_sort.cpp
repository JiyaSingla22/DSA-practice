#include<iostream>
#include<vector>
using namespace std;

void merge(int array[] , int start , int mid, int end)
{
    vector<int>temp ;  //create temp array to store sorted values
    int left =start;  //start of arr1 
    int right =mid+1; // start of arr 2 
    while(left <=mid && right <= end) 
    {
        if(array[left] < array[right]) 
        {
           temp.push_back(array[left]);
            left++;
        }
        else{
            temp.push_back(array[right]);
            right++;
        }
    }
    while(left<=mid) //if any elements left in arr1
    {
        temp.push_back(array[left]);
        left++;
    }
    while(right<=end)   //if any elements left in arr2
    {
        temp.push_back(array[right]);
        right++;
    }
    for(int i = start ; i<= end;i++) //stored temp values returning to original array
    {
        array[i]=temp[i-start];
        
    }
    
}


void mergeSort(int array[],int start ,int end)
{
    if(start>=end)
    return;
    int mid = (start+end)/2;
    mergeSort(array,start, mid); // divide left side
    mergeSort(array,mid+1,end);//divide right side
    merge(array , start , mid, end);
   
}



int main()
{
    int array[]={4,6,5,8,3,1,2,7};
    int start =0;
    int end = sizeof(array)/sizeof(array[0])-1;
   mergeSort(array,start,end);
   for(int i =0; i <= end;i++)
   {
    cout<<array[i]<<" ";
   }
    return 0;
}