#pragma once
#include "StateBase.h"
class LockedState:public StateBase
{
public:

	void close();
	void unlock();
	void open();
	void lock();
};

