#include<bits/stdc++.h>
using namespace std;
 
int main() {
	ifstream file;
	file.open("DATA.in");
	int m;
	int a[1001] = { 0 };
	int j = 0;
	while (file >> m) {
		a[m]++;
	}
	for (int i = 0; i <= 1000; i++) {
		if (a[i] != 0) {
			cout << i << " " << a[i] << endl;
		}
	}
	file.close();
}
