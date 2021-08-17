#pragma once
#include "StateBase.h"
class ClosedState:public StateBase
{
public:
	void close();
	void unlock();
	void open();
	void lock();
};

