// You have a sorted array of infinite numbers, how would you search an element in the array?

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,5,7,10,18,27,30,39,41};
    int n=9;

    int lo=0;
    int hi=1;
    int x=27; //target

    while(x>arr[hi]){
        lo=hi;
        hi*=2;
    }
    cout<<lo<<" "<<hi<<endl;

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            cout<<mid;
            break;
        }
        else if(arr[mid]>x) hi=mid-1;
        else lo=mid+1;
    }
}