#include<iostream>
#include<vector>
using namespace std;


    int first(const vector<int>& arr, int target)
    {
        int first_index=-1;
        int s=0;
        int end= arr.size()-1;
        while(s<=end)
        {
            int mid=s+(end-s)/2;
            if(arr[mid]==target)
          {  
            first_index=mid;
            end=mid-1;
          }
          else if(arr[mid]>target)
          {
            end=mid-1;

          }
          else
          s =mid+1;
     
        }
      
        return first_index;
    }
    int last(const vector<int>& arr, int target)
    {
        int last_index=-1;
        int s=0;
        int end= arr.size()-1;
        while(s<=end)
        {
            int mid=s+(end-s)/2;
            if(arr[mid]==target)
          {  
           last_index=mid;
           s=mid+1;
          }
          else if(arr[mid]<target)
          {
            s=mid+1;

          }
          else
          end=mid-1;
     
        }
        return last_index;
    }
    int occ(const vector<int>& arr, int target) {
        
       int first_index=first(arr,target);
       if(first_index==-1) return 0;
       int last_index=last(arr,target);
       return (last_index-first_index+1);
    }

    int main()
    {
        vector<int>arr={1,2,3,4,5,5,5,5};
        int target=7;
        cout<<"The number of occ is: "<<occ(arr,target);
        return 0;
    }