#pragma once
#include "StateContext.h"
#include<iostream>
using namespace std;
class StateBase
{
protected:
	StateContext* m_context;
public:
	void setContext(StateContext* context);
	virtual void unlock() = 0;
	virtual void lock() = 0;
	virtual void open() = 0;
	virtual void close() = 0;

};

