#include<iostream>
#include<utility>
using namespace std;

void sum_row(int arr[][3], int row, int col)
  {
    for(int i=0; i<col; i++)
    {
       int sum =0;
        for(int j=0; j<row; j++)
        {
            sum += arr[j][i];
        }
        cout<<sum<<" ";
    }
  }

int main()
{
    int arr[3][3];
    cout<<"Enter Elelments ";
    for(int i =0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            cin>>arr[i][j];
        }
       
    }
    cout<<"The array is "<<endl;
     for(int i =0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The Sum is : ";
    sum_row(arr,3,3);
    
    return 0;
}