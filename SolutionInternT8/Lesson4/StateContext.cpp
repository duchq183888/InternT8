#include "StateContext.h"
#include "OpennedState.h"

StateContext::StateContext(StateBase* st) :m_statecontext(nullptr) {
	this->setState(st);
}
StateContext::~StateContext() {
	delete m_statecontext;
}

void StateContext::setState(StateBase* st) {
	this->m_statecontext = st;
	this->m_statecontext->setContext(this);
}
void StateContext::RequestClose() {
	this->m_statecontext->close();
}

void StateContext::RequestOpen() {
	this->m_statecontext->open();
}

void StateContext::RequestLock() {
	this->m_statecontext->lock();
}

void StateContext::RequestUnLock() {
	this->m_statecontext->unlock();
}

