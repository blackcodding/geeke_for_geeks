#include <bits/stdc++.h>

using namespace std;


//User function template for C++
class Solution
{
public:
    void printArray(int arr[], int n)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        ob.printArray(arr, n);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
