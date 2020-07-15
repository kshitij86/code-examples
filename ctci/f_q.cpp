#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

void ins(map<int, int> ds, int x)
{
    if (ds.find(x) == ds.end())
    {
        ds[x] = 1;
    }
    else
    {
        ds[x]++;
    }
}

void del(map<int, int> ds, int y)
{
    if (!ds.empty() && ds.find(y) != ds.end())
    {
        ds[y]--;
    }
}

int check(map<int, int> ds, int z)
{
    int flag = 0;
    for (map<int, int>::iterator it = ds.begin(); it != ds.end(); it++)
    {
        if (it->second == z)
        {
            flag = 1;
            break;
        }
    }

    return flag;
}

void printMap(map<int, int> ds)
{
    for (map<int, int>::iterator it = ds.begin(); it != ds.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}

// Complete the freqQuery function below.
vector<int> freqQuery(vector<vector<int>> queries)
{
    map<int, int> ds;
    vector<int> u;

    for (vector<int> v : queries)
    {
        if (v[0] == 1)
        {
            ins(ds, v[1]);
        }
        if (v[0] == 2)
        {
            del(ds, v[1]);
        }
        if (v[0] == 3)
        {
            u.push_back(check(ds, v[1]));
        }
    }

    printMap(ds);
    return u;
}

int main()
{

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    vector<vector<int>> queries(q);

    for (int i = 0; i < q; i++)
    {
        queries[i].resize(2);

        string queries_row_temp_temp;
        getline(cin, queries_row_temp_temp);

        vector<string> queries_row_temp = split(rtrim(queries_row_temp_temp));

        for (int j = 0; j < 2; j++)
        {
            int queries_row_item = stoi(queries_row_temp[j]);

            queries[i][j] = queries_row_item;
        }
    }

    vector<int> ans = freqQuery(queries);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];

        if (i != ans.size() - 1)
        {
            cout << "\n";
        }
    }

    cout << "\n";

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
