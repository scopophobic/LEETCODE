//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long countSubarrWithEqualZeroAndOne(int arr[], int n) {
    
    int count = 0;
    int sum = 0;
    vector<int> countSum(n*2 + 1, 0); 

    countSum[n] = 1; 

    for (int i = 0; i < n; i++) {
        
        if (arr[i] == 0)
            arr[i] = -1;

        sum += arr[i];

        
        count += countSum[sum + n];

        
        countSum[sum + n]++;
    }

    return count;
}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}

// } Driver Code Ends