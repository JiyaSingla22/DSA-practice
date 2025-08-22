#include<iostream>
#include<utility>
#include<vector>
using namespace std;
vector<int> nums(int arr[][4], int row, int col)
{
    vector<int>ans;
    for(int i=0; i<col; i++)
    {
        if(i%2==0)
        {
            for(int j= 0; j<row; j++)
            {
                ans.push_back(arr[j][i]);
            }
            
        }
        else
          {
            for(int j= row-1; j>=0; j--)
            {
                ans.push_back(arr[j][i]);
            }
        }
    }
    return ans;
}

int main()
{
    int arr[3][4];
    cout<<"Enter Elelments ";
    for(int i =0; i<3; i++)
    {
        for(int j =0; j<4; j++)
        {
            cin>>arr[i][j];
        }
       
    }
    cout<<"The array is "<<endl;
     for(int i =0; i<3; i++)
    {
        for(int j =0; j<4; j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<int>result= nums(arr,3,4);
    cout<<"The wave format is ";
    for(int i=0; i<result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}