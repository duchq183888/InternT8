#include<iostream>
using namespace std;

int Fact(int n) {
	if (n == 0||n==1) return 1;
	int a = 0;
	int rs = 1;        
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

	while (n <= 0) {
		printf("Invalid input! Please re-enter:\n ");
		cin >> n;
	}

	printf("\n%d! = %d ", n, Fact(n));
	
}
