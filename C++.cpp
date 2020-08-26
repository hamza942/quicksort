#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

int quicksort(vector<int>&ar, int l, int r) {
	if (l >= r) {
		return 0;
	}
	int pivot = l;
	for (int x = l + 1; x <= r; x++) {
		if (ar[x] <= ar[pivot]) {
			int temp = ar[x];
			ar.erase(ar.begin() + x);
			ar.insert(ar.begin() + l, temp);
			pivot++;
		}
	}
	quicksort(ar, l, pivot - 1);
	quicksort(ar, pivot + 1, r);
}

int main() {
	vector<int>ar = { 10,34,8,100,9,46,15,13 };
	quicksort(ar, 0, 7);
	for (int t = 0; t < ar.size(); t++) {
		cout << ar[t] << " ";
	}

}