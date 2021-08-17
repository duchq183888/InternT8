#pragma once
class StateBase;
class StateContext 
{
protected:
	StateBase* m_statecontext;
public:
	StateContext(StateBase*st);
	~StateContext();
	void setState(StateBase* st);
	void RequestLock();
	void RequestUnLock();
	void RequestClose();
	void RequestOpen();
};

