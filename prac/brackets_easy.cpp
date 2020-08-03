#include <bits/stdc++.h>
using namespace std;

#define pb push_back
typedef long long ll;
typedef vector<int> veci;
typedef vector<vector<int>> vecv;

void print_vector(veci v)
{
	for (int i : v)
	{
		cout << i << " ";
	}
	cout << endl;
}

void print_vectorv(vecv v)
{
	for (veci i : v)
	{
		print_vector(i);
	}
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string bracString;
	cin >> bracString;

	stack<char> st;

	for (char i : bracString)
	{
		if (i == '(')
		{
			st.push(i);
		}
		else
		{
			st.pop();
		}
	}

	st.size() == 0 ? cout << "BALANCED\n" : cout << "UNBALANCED\n";
}