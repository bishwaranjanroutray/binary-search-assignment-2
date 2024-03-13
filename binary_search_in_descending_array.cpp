#include<iostream>
using namespace std;

int main(){
    int arr[]={7,6,5,4,3,2,1};
    int n=7;
    int x=2;
    int hi=n-1;
    int lo=0;
    while(hi>=lo){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            cout<<mid;
            break;
        }
        else if(arr[mid]<x) hi=mid-1;
        else lo=mid+1;
    }
}