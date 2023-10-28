//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int i;
        long long int max=0;
        long long int cur=0;
        
        for(int i=0;i<n;i++)
        {
            cur+=arr[i];
            if(cur>max)
              max=cur;
            else if(cur<0)
              cur=0;
        }
        if(max<=0)
        {
            int max = arr[0];
       for(int i = 0 ; i <n;i++) {
        if(max < arr[i]) 
            max = arr[i];
        }
    
    return max;

        }
        return max;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends
