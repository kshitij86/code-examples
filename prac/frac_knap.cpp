#include <bits/stdc++.h>
using namespace std;

#define pb push_back
typedef long long ll;
typedef vector<int> veci;
typedef vector<vector<int>> vecv;


void print_vector(veci v){
	for(int i: v){
		cout << i << " ";
	}
	cout << endl;
}

void print_vectorv(vecv v){
	for(veci i: v){
		print_vector(i);
	}
}

class Item{
	public:	
	int v;
	int w;
	float ratio = 0.0;

	Item(){};

	void set_data(int v_, int w_){
		v = v_;
		w = w_;
		ratio = v/w;
	}
};

bool cmp(Item a, Item b){
	return a.ratio > b.ratio;
}

float max_val(int n, Item items[], double W){
	
	float max_profit = 0.0;
	// Wrong approach
	// sort(vals, vals+n, greater<int>);
	// sort(weights, weights+n, greater<int>);

	sort(items, items+n, cmp);
	for(int i = 0; i < n; i++){
		if(items[i].w <= W){
			W -= items[i].w;
			max_profit += items[i].v;
		} else {
			// Fraction to take
			W -= items[i].w / W;
			max_profit += items[i].v * (items[i].w / W);
		}
	}
	return max_profit;
}

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	int n = 3;
	// cout << "Enter no of items: ";
	// cin >> n;

	double W = 20; //capacity
	Item items[n];
	int e[3][3] = {{1, 30}, {2, 40}, {5, 50}};

	for(int i = 0; i < n; i++){
		items[i].set_data(e[i][0], e[i][1]) ;
	}

	// cout << "Enter capacity: ";
	// cin >> W;

	// cout << "Enter values: ";
	// for(int i = 0; i < n; i++){
	// 	cin >> items[i].v;
	// }

	// cout << "Enter weights: ";
	// for(int i = 0; i < n; i++){
	// 	cin >> items[i].w;
	// }

	cout << max_val(n, items, W);
}