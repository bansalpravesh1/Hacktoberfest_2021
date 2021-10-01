#include<bits/stdc++.h>
using namespace std;
  
int TriangleSum(long * array, int n){
        if(n == 1)
            return (array[0]%1000000007);
        long *temp = new long[n-1];
        
        for(int i=0;i<n-1;i++){
            temp[i] = array[i] +array[i+1];
            temp[i] = temp[i]%1000000007;
        }
        return TriangleSum(temp,n-1);
           
}

int main() {

	// Write your code here
    int n;
    cin >> n;
    long *arr = new long[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    
   cout<<  TriangleSum(arr,n)<< endl;
}
