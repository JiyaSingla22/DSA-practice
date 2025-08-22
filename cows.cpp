#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

bool isPossible(vector<int>&stalls,int size , int cows, int mid)
{
    int cow = 1;
    int last_pos = stalls[0];
    for(int i =1; i<size;i++)
    {
        if(stalls[i]-last_pos>=mid)
        {
            cow++;
            last_pos=stalls[i];
           
        }
         if(cow>=cows)
            {
                return true;
            }
    } return false;
}

int cows_pos(vector<int>&stalls,int size , int cows)
{
    sort(stalls.begin(),stalls.end());
    int start=1;
    int end= stalls[size-1]-stalls[0];
    int mid= start+(end-start)/2;
    int ans=0;
    while(start<=end)
    {
        if(isPossible(stalls,size,cows,mid))
        {
        ans=mid;
        start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid= start+(end-start)/2;
    }
    return ans;
}




int main()
{
    int cows=3;
    vector<int> stalls = {1, 2, 4, 8, 9, 10, 14, 17};
    cout<<"The maximum space between cows will be "<<cows_pos(stalls, stalls.size(),cows);
    return 0;
}