#include<iostream>
using namespace std;

void bubble_sort(int array[] , int n)
{   
     int count=0; //to count the number of rounds
    for(int i=1;i<n;i++) //number of rounds
   
    { 
       
        bool swapped = false;

        for(int j=0;j<n-i ;j++) //starts from index 0 to n-i
        {
            if(array[j]>array[j+1])
            {
                swap(array[j],array[j+1]); //swap if j+1 is smaller
                swapped=true; 
            }
        } 
        count +=1 ; //add the number of rounds
        
        if (swapped==false) //return false if no swapping occur in the round and breaks the loop
        break;
    }cout<<"count is "<<count <<endl; //print the number of rounds occur
}



int main()
{
    int array[5]={1,2,3,4,5};
    int n= sizeof(array)/sizeof(array[0]);
    bubble_sort(array,n);
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" "; //prints the sorted array
    }
    return 0;
}