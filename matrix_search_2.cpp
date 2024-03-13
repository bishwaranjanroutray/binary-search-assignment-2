#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &mat, int target)
{
    int m = mat.size();
    int n = mat[0].size();
    int lo = 0, hi = n * m - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (mat[mid / n][mid % n] == target)
            return true;
        else if (mat[mid / n][mid % n] > target)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return false;
}

int main(){
    
}