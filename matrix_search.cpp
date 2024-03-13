// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target , return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.

// Example 1:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true

// Example 2:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false

#include <iostream>
#include<vector>
using namespace std;

int m = 3;
int n = 4;

bool searchMatrix(vector<vector<int>>& arr, int target){
    int l = 0;
    int h = m - 1;
    while (l <= h)
    {
        int midl = (h + l) / 2;
        if (arr[midl][0] < target && arr[midl][4] > target)
        {
            // binary search
            int lo = 0;
            int hi = n - 1;
            while (lo <= hi)
            {
                int mid = (lo + hi) / 2;
                if (arr[midl][mid] == target)
                {
                    return true;
                    break;
                }
                else if (arr[midl][mid] > target)
                    hi = mid - 1;
                else
                    lo = mid + 1;
            }
        }
        else
        {

            if (arr[midl][0] > target)
                h = midl - 1;
            else if (arr[midl][4] < target)
                l = midl - 1;
        }
    }
    return -1;
}

int main()
{
    
    vector<vector<int>> arr = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 11;
    cout<<searchMatrix(arr,target);

    
}