#include<iostream>
using namespace std;

unsigned long long Fact(int n) {
	if (n == 0||n==1) return 1;
	unsigned long long a = 0;
	unsigned long long rs = 1;        
	while (a < n) {
		a = a + 1;
		rs = a * rs;
	}
	return rs;
}

int main()
{
	int n;
	cin >> n;

	while (n <= 0||n>20) {
		printf("Invalid input! Please re-enter:\n ");
		cin >> n;
	}
	unsigned long long t = Fact(n);


	cout << t;
	
}
