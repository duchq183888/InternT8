#include<iostream>
#include"StateContext.h"
#include"OpennedState.h"
using namespace std;

int main()
{
	StateContext* ct = new StateContext(new OpennedState);
	cout << "STATE: OPEN" << endl;
	ct->RequestClose();
	ct->RequestLock();
	ct->RequestOpen();
	ct->RequestUnLock();
	delete ct;

}