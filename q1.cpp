//Nandini
//2010990480
//set=04

// q1
#include <iostream>
#include <unordered_set>
using namespace std;
int findMinIndex(int arr[], int n)
{
    int minIndex = n;
    unordered_set<int> set;
 
    
    for (int i = n - 1; i >= 0; i--)
    {

        if (set.find(arr[i]) != set.end()) {
            minIndex = i;
        }
        else {
            set.insert(arr[i]);
        }
    }
 
    if (minIndex == n) {
        cout<<"Invalid Output";
        return 0;
    }
    return minIndex;
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 
    int minIndex = findMinIndex(arr, n);
 
    if(minIndex == 0){
        return 0;
    }
    else if (minIndex != n) {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
   
 
    return 0;
}







