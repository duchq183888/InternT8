#include "OpennedState.h"
#include "StateContext.h"
#include "ClosedState.h"



void OpennedState::close()
{
	cout << "STATE: CLOSE" << endl;
	this->m_context->setState(new ClosedState);

}
void OpennedState::open()
{
	cout << "Door is open, can't open !" << endl;

}

void OpennedState::unlock()
{
	cout << "Door is open, can't unlock !" << endl;

}

void OpennedState::lock()
{
	cout << "Door is open, can't lock !" << endl;

}

