#include<iostream>
using namespace std;
int root (long long int num)
{
    long long int start=0;
    long long int end=num;
    long long int ans=-1;
    long long int mid= start+(end-start)/2;
    
    while(start<=end)
    {
         long long int mid= start+(end-start)/2;
         long long int sq=mid*mid;
        if(sq==num)
    {
        return mid;
    }
    if(sq<=num)
    {
        ans=mid;
       start=mid+1;
    }
    else
    {
   
    end=mid-1;
    }
    
    }
    return ans;
}
double dec_ans(int num,int pre , int sol)
{
    double factor=1;
    double ans=sol;
    for(int i=0;i<=pre;i++)
    {
        factor=factor/10;
        for(double j=ans;j*j<num;j=j+factor)
        {
            ans=j;
        }
    } return ans;
}
int main()
{
    int num=149;
    int sol=root(num);
    cout<<dec_ans(num,4,sol);
    return 0;
}