#include "ClosedState.h"
#include "StateContext.h"
#include "LockedState.h"
#include "OpennedState.h"


void ClosedState :: lock() {
	cout << "STATE: LOCK" << endl;
	this->m_context->setState(new LockedState);
	
}

void ClosedState::open() {
	cout << "STATE: OPEN" << endl;
	this->m_context->setState(new OpennedState);
}

void ClosedState::unlock() {
	cout << "Door is closed, cannot be unlocked ! " << endl;

}

void ClosedState::close() {
	cout << "Door is closed, cannot be closed ! " << endl;

}

