#include <iostream>
#include <vector>
using namespace std;
void helper(vector<vector<int>> &maze, int row, int col, vector<string> &ans, string path)
{
    int n = maze.size();
    if(row<0 || col<0 || row>=n || col>=n || maze[row][col]==0 || maze[row][col]==-1) return ; //base case
    if(row==n-1 && col==n-1)
    {
        ans.push_back(path);
        return;
    }
    maze[row][col]=-1;
    helper(maze, row+1, col, ans, path+"D"); //to go down
    helper(maze, row-1, col, ans, path+"U");// to go up
    helper(maze, row, col+1, ans, path+"R");// to go right
    helper(maze, row, col-1, ans, path+"L"); // to go left
    maze[row][col]=1;

}
vector<string> findPath(vector<vector<int>> &maze)
{
    vector<string> ans;
    string path = "";
    helper(maze, 0, 0, ans, path);
    return ans;
}
int main()
{
    vector<vector<int>> maze = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};

    vector<string> ans = findPath(maze);
    for (string path : ans)
    {
        cout << path << " ";
    }
    return 0;
}