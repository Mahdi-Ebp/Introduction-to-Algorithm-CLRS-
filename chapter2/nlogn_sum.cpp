#include<iostream>
using namespace std;
//this is exercise 2.3-7 of the book(3ed)

void sum_finder(int a[], int n, int x){
	int i = n - 1, j = 0;
	while(i >= 0 && j < n){
		if(a[i] + a[j] == x){
			cout << "Yes" << endl;
			return;
		}
		if(a[i] + a[j] > x)
			i--;
		else
			j++;
	}
	cout << "No" << endl;
}

void sort(int a[], int n){
	if(n == 1)
		return;

	int mid = n / 2;
	int l[mid + 1], r[n - mid + 1];

	for(int i = 0; i < mid; i++)
		l[i] = a[i];
	for(int i = mid; i < n; i++)
		r[i - mid] = a[i];

	sort(l, mid);
	sort(r, n - mid);

	int p1 = 0, p2 = 0;
	for(int i = 0; i < n; i++){
		if(p1 == mid)
			l[mid] = r[p2] + 1;
		if(p2 == n - mid)
			r[n - mid] = l[p1] + 1;
		if(l[p1] < r[p2]){
			a[i] = l[p1];
			p1++;
		}
		else{
			a[i] = r[p2];
			p2++;
		}
	}
}

int main(){
	int n;
	cin >> n;

	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];

	int x;
	cin >> x;

	sort(a, n);
	sum_finder(a, n, x);
}
