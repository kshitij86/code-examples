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

vector<vector<char>> p_table(int N, string I, string O)
{
	vector<vector<char>> arr(N, vector<char>(N));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == j)
			{
				arr[i][j] = 'Y';
			}
			else if (abs(i - j) == 1)
			{
				if (O[i] == 'Y' && I[j] == 'Y')
					arr[i][j] = 'Y';
				else
				{
					arr[i][j] = 'N';
				}
			}
			else
			{
				arr[i][j] = '0';
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i][j] == '0' && i != j && abs(i - j) != 1)
			{
				if (i < j)
				{
					int k = i;
					bool flag = true;
					for (; k < j; k++)
					{
						if (arr[k][k + 1] == 'N')
						{
							flag = false;
						}
					}
					flag ? arr[i][j] = 'Y' : arr[i][j] = 'N';
				}
				else if (i > j)
				{
					int k = i;
					bool flag = true;
					for (; k > j; k--)
					{
						if (arr[k][k - 1] == 'N')
						{
							flag = false;
						}
					}
					flag == true ? arr[i][j] = 'Y' : arr[i][j] = 'N';
				}
			}
		}
	}

	return arr;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int N, test, i = 1;
	string I, O;
	ofstream fout;
	ifstream fin;

	fin.open("travel_restrictions_input_full.txt");
	fout.open("trav_op.txt");

	fin >> test;

	while (test--)
	{
		fin >> N;
		fin >> I >> O;

		fout << "Case #" << i << ":" << endl;
		vector<vector<char>> arr = p_table(N, I, O);
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				fout << arr[i][j];
			}
			fout << endl;
		}
		i++;
	}

	fin.close();
	fout.close();
}