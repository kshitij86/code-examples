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
	map<string, string> mp;
	mp.insert({"A", "ACE"});
	mp.insert({"2", "TWO"});
	mp.insert({"3", "THREE"});
	mp.insert({"4", "FOUR"});
	mp.insert({"5", "FIVE"});
	mp.insert({"6", "SIX"});
	mp.insert({"7", "SEVEN"});
	mp.insert({"8", "EIGHT"});
	mp.insert({"9", "NINE"});
	mp.insert({"10", "TEN"});
	mp.insert({"K", "KING"});
	mp.insert({"Q", "QUEEN"});
	mp.insert({"J", "JACK"});

	string cards;
	cin >> cards;

	int n = cards.length();

	vector<string> c;
	for (int i = 0; i < n; i++)
	{
		c.pb(to_string(cards[i]));
	}

	cout << n;
	for (int i = 0; i < n; i++)
	{
		cout << c[i] << " ";
	}
}