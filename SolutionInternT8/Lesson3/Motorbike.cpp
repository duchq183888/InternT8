#include "Motorbike.h"

Motorbike::Motorbike() :DynamicObject()
{
	this->capacity = 0;
}
Motorbike::Motorbike(string id, string name, int speed, int capacity) : DynamicObject(id, name, speed) {
	this->capacity = capacity;
}

void Motorbike::move()
{
	Position p = this->getPosition();
	p.x += 1;
	p.y += 1;
	setPosition(p);


}
