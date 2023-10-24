//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int zeroPtr=-1;
	    for(int i=0;i<n;i++){
	        if(arr[i]==0){
	            zeroPtr=i;
	            break;
	        }
	    }
	    if(zeroPtr==-1){
	        return;
	    }
	    
	    for(int i=zeroPtr+1;i<n;i++){
	        if(arr[i]!=0){
	            swap(arr[i],arr[zeroPtr]);
	            zeroPtr++;
	        }
	    }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends