#include<iostream>
#include<vector>
using namespace std;
int vec(vector<int>v)
{
    int ans=0;
    for(int vec: v)
    {
        ans^= vec;
    }return ans;
}
int main()
{
    vector<int>vecc;
    vecc.push_back(9);
     vecc.push_back(1);
      vecc.push_back(1);
       vecc.push_back(2);
        vecc.push_back(7);
        cout<<vec(vecc);
        return 0;
}
// int main()
// {
//     vector<int>v={1,2,3};
//     v.push_back(12);
//     cout<<v[3]<<endl;
//     pair<int,int>p={1,2};
//     cout<<p.first<<" "<<p.second;
//     return 0;
// }