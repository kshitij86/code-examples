#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> veci;
typedef vector<string> vecs;
typedef vector<long> vecl;
typedef vector<vector<int>> vecvi;
typedef vector<vector<string>> vecvs;
#define REP(i, a, b) for (i = a; i < b; i++)
#define rep(i, n) REP(i, 0, n)
#define pb push_back

void print_arr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void print_vector(veci arr)
{
	for (int i : arr)
	{
		cout << i << " ";
	}
	cout << endl;
}

void print_vectorv(vecvi arr)
{
	for (veci i : arr)
	{
		print_vector(i);
	}
	cout << endl;
}
// __________________________________________________________________________________________________________________________________________

vector<vector<char>> space(3, vector<char>(100000));
int i, j;

int findGalaxyLimit(int prev)
{
	// Scan first row for #
	REP(i, prev, space[0].size())
	{
		if (space[0][i] == '#')
			return i;
	}
	return space[0].size() - 1;
}

int countGalaxies()
{
	int ctr = 0;
	// Scan first row for #
	rep(i, space[0].size())
	{
		if (space[0][i] == '#')
			ctr++;
	}

	return ctr + 1;
}

veci countStars(int s, int l)
{
	veci stars;
	if (s < 0 || l >= space[0].size())
		return stars;

	for (i = s; i < l; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (space[j][i] == '*')
			{
				stars.pb(i);
				i += 3;
			}
		}
	}

	return stars;
}

// For every galaxy, scan the rows one by one, to find if there is a star
map<int, char> mp = {{9, 'E'}, {6, 'A'}, {8, 'O'}};
char detectShape(int start)
{
	int strctr = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = start; j < start + 3; j++)
		{
			// cout << i << "<->" << j << endl;
			if (space[i][j] == '*')
				strctr++;
		}
	}

	if (strctr == 7)
	{
		if (space[1][start + 1] == '*')
		{
			return 'I';
		}
		else
			return 'U';
	}
	return mp[strctr];
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> space[i][j];
		}
	}

	cout << endl;

	// for (int i = 0; i < 3; i++) {
	// 	for (int j = 0; j < n; j++) {
	// 		cout << space[i][j];
	// 	}
	// 	cout << endl;
	// }

	// cout << findGalaxyLimit(0, space) << endl;
	// cout << countGalaxies(space) << endl;
	// print_vector(countStars(9, 12, space));
	// cout << detectShape(9, space) << endl;

	string h = "";
	int prev = 0, noGalaxies = countGalaxies();

	for (int i = 0; i < noGalaxies; i++)
	{
		int limit = findGalaxyLimit(prev);
		// cout << "previous :" << prev << endl;
		// cout << "limit :" << limit << endl;
		// Count the stars in this galaxy
		veci st = countStars(prev, limit);
		// print_vector(st);
		for (int i : st)
		{
			h += detectShape(i);
		}
		prev = limit + 1;
		if (i != noGalaxies - 1)
			h += '#';
	}

	cout << h << endl;
}
