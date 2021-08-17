#pragma once
#include "StateBase.h"
class OpennedState:public StateBase
{
public:
	void close();
	void unlock();
	void open();
	void lock();
};

