#include<iostream>
#include<climits>
using namespace std;

bool isValid(int arr[],int size,int students,int mid)
{
    int student=1, pages=0;
    for(int i=0;i<size;i++) 
    {
        if(arr[i]>mid) //if the pages in book is max than the possible solution 
        {
            return false;
        }
        if(pages+arr[i]<=mid)  //if the pages are distributed rightly
        {
            pages=pages+arr[i];
        }
        else
        {
            student++; //this will go to next student
            pages =arr[i]; //the pages value will be initializes to pages in next book from 0
        }
    }
    return student>students?false:true; //if the students number exceeds
}





int pages_allocation(int arr[],int size,int students)
{
    int max_val=INT_MIN;
   
    int ans=-1;
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum +=arr[i];
        max_val=max(arr[i],INT_MIN);
    }
    int end=sum;
     int start=max_val;
    int mid= start+ (end-start)/2;
    while(start<=end)
    {
        if(isValid(arr,size,students,mid))  //move to left
        {
        ans=mid;
        end=mid-1;
        }    
        else  //move to right
        {
            start=mid+1;
        }
        mid=start+ (end-start)/2;
    }
    return ans;
}



int main()
{
    int array[4]={10,27,17,20};
    int students=2;
    cout<<pages_allocation(array,3,students);
    return 0;
}