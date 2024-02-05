#include<iostream>
using namespace std;

int sort(int a[], int n){
	if(n == 1)
		return 0;

	int mid = n / 2, inversions = 0;
	int l[mid + 1], r[n - mid + 1];

	for(int i = 0; i < mid; i++)
		l[i] = a[i];
	for(int i = mid; i < n; i++)
		r[i - mid] = a[i];

	inversions += sort(l, mid);
	inversions += sort(r, n - mid);

	int p1 = 0, p2 = 0;
	for(int i = 0; i < n; i++){
		if(p1 == mid)
			l[mid] = r[p2] + 1;
		if(p2 == n - mid)
			r[n - mid] = l[p1] + 1;
		if(l[p1] > r[p2]){
			a[i] = r[p2];
			inversions += mid - p1;
			p2++;
		}
		else{
			a[i] = l[p1];
			p1++;
		}
	}
	return inversions;
}

int main(){
	int n;
	cin >> n;

	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];

	int res = sort(a, n);
	cout << res << endl;
}
