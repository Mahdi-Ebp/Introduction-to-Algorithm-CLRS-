#include<iostream>
using namespace std;

int search(int a[], int target, int from, int to){
	if(from == to)
		return from;

	int mid = from - ((from - to) / 2);

	if(target <= a[mid]){
		return search(a, target, from, mid); 
	}
	else{
		return search(a, target, mid + 1, to);
	}
}

int main(){
	int n; 
	cin >> n;

	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	int target;
	cin >> target;

	int res = search(a, target, 0, n - 1);
	cout << res;
}
