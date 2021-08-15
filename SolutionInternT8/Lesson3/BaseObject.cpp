#include "BaseObject.h"

BaseObject::BaseObject()
{
	this->id = "";
	this->name = "";
	this->position.x = 0;
	this->position.y = 0;

}
BaseObject::~BaseObject()
{
}

BaseObject::BaseObject(string id,string name)
{
	this->id = id;
	this->name = name;
	this->position.x = 0;
	this->position.y = 0;

}
Position BaseObject::getPosition()
{
	return this->position;
}
void BaseObject::setPosition(Position p) {
	this->position.x = p.x;
	this->position.y = p.y;
}
string BaseObject::getName()
{
	return this->name;
}



void BaseObject::printPosition()
{
	cout << "POSITION : ( " << this->position.x<<", "<<this->position.y<<" )" << endl;

}



