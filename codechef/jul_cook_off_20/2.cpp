// C++ program to find OR of all the sub-arrays 
#include <bits/stdc++.h> 
using namespace std; 
  
// function to return OR of sub-arrays 
bool OR(int a[], int n) 
{
	set<int> s;
    int i, sum = 0, sum1 = 0, j;
    for(int i = 0; i < n; i++){
    	s.insert(a[i]);
    }
  
    for (i = 0; i < n; i++) { 
        sum1 = 0; 
        for (j = i; j < n; j++)  { 
            sum1 = (sum1 | a[j]);
            if(s.find(sum1) != s.end())
            	return false;
            s.insert(sum1);
            cout << sum1;
        } 
    } 
  
    return true; 
} 
  
// Driver program 
int main() 
{ 
	int test;
	cin >> test;

	while(test--){
		int n, x;
		cin >> n;
		
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		OR(a, n) ? cout << "YES" : cout << "NO";
		cout << endl;
	} 
    return 0; 
} 