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
	int ctr = 0;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void print_vector(veci arr, int n)
{
	int i;
	rep(i, n)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

class MinHeap
{
public:
	veci A;
	int size; // Needed to maintain last element;

	MinHeap()
	{
		A.clear();
		size = 0;
	}

	int getMin();	  // Returns min
	int extractMin(); // Deletes and returns min
	void insert(int x);
	void heapify(int i);
	int parent(int i);
	void deleteInHeap(int i);
	void printHeap();
};

void MinHeap::printHeap()
{
	print_vector(A, size);
}

int MinHeap::parent(int i)
{
	return (i - 1) / 2;
}

int MinHeap::getMin()
{
	return A[0];
}

int MinHeap::extractMin()
{
	// Replace the first node with last, then delete last and re-heapify
	swap(A[0], A[size - 1]);
	size--;
	heapify(0);
}

void MinHeap::insert(int x)
{
	// Place at last, compare with parents to put at correct place
	A.pb(x);
	size++;

	// cout << "Size: " << size << endl;

	int i = size - 1;
	// Compare with every parent and stop when a smaller parent is encountered
	while (A[i] < A[parent(i)])
	{
		swap(A[i], A[parent(i)]);
		i = parent(i);
	}
}

void MinHeap::deleteInHeap(int i)
{
	if (i < 0 || i > size)
		return;

	swap(A[i], A[size - 1]);
	size--;
	heapify(i);
}

void MinHeap::heapify(int i)
{
	// printHeap();
	int left = (2 * i + 1), right = (2 * i + 2), smallest = i;
	// cout << left << " " << right << endl;
	// if ((A[left] > A[i] && A[right] > A[i]) || left > size || right > size)
	// 	return;

	if (A[i] > A[left] && left < size)
		smallest = left;

	if (A[i] > A[right] && right < size)
		smallest = right;

	if (smallest != i)
	{
		swap(A[i], A[smallest]);
		heapify(smallest);
	}
}

int main()
{
	MinHeap *heap = new MinHeap();

	int i;
	rep(i, 5)
	{
		heap->insert(i);
		// heap->printHeap();
	}

	cout << "Heap before\n";
	heap->printHeap();

	// heap->deleteInHeap(0);
	// // heap->extractMin();
	// cout << "Heap After\n";
	// heap->printHeap();

	heap->insert(-2);
	heap->insert(345);
	// heap->extractMin();
	// cout << "Heap After\n";
	heap->printHeap();

	// print_vector(heap->A, heap->size);
}
