#include<iostream>
#include<climits>
using namespace std;

int largest(int array[],int size)
{
    int largest=INT_MIN;
    
    for(int i =0 ; i<size;i++)
    {
        largest= max(array[i],largest);
    }
    return largest;
}

int main()
{
    int x;    
    cout<<"Enter size of array ";
    cin>>x;
    int array[x];
    for(int i =0 ; i< x;i++)
    {
        cin>>array[i];
    }
    cout<<"The Second largest element is "<<largest(array,x);
    return 0;
}