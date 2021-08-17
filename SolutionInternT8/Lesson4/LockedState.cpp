#include "LockedState.h"
#include "StateContext.h"
#include "ClosedState.h"


void LockedState::unlock()
{
	cout << "STATE: CLOSE" << endl;
	this->m_context->setState(new ClosedState);

}
void LockedState::lock()
{
	cout << "Door is locked, can't lock" << endl;

}

void LockedState::open()
{
	cout << "Door is locked, can't open" << endl;
}

void LockedState::close()
{
	cout << "Door is locked, can't close" << endl;
}

