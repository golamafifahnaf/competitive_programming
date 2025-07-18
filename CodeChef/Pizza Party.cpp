#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int slices = ((a+1)*4) + b*3;
	int pizza = (slices+7)/8;
	cout << pizza << endl;
    return 0;
}
