#include<iostream>
#include<vector>
using namespace std;

int LowerBound(vector<int>& ans, int x)
{
    int s=0;
    int end=ans.size()-1;
    int element=ans[ans.size()-1];
    while(s<=end)
    {
        int mid= s+(end-s)/2;
        if(ans[mid]>=x)
        {
            element=ans[mid];
            end=mid-1;
        }
        else
        s= mid+1;
    }
    return element;
}
int upperBound(vector<int>& ans, int x)
{
    int s=0;
    int end=ans.size()-1;
    int element=ans[ans.size()-1];
    while(s<end)
    {
        int mid= s+(end-s)/2;
        if(ans[mid]>x)
        {
            element=ans[mid];
            end=mid-1;
        }
        else
        s= mid+1;
    }
    return element;
}


int main()
{
    vector<int>ans={1,2,3,4,5,6};
    int x=5;
    cout<<"The lower bound of x is: "<<LowerBound(ans,x)<<endl;
    cout<<"The lower bound of x is:"<<upperBound(ans,x);
    return 0;
}