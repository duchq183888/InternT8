#include "Car.h"

Car::Car() :DynamicObject()
{
	this->model = "";

}
Car::Car(string id, string name, int speed, string model) : DynamicObject(id, name, speed) {
	this->model = model;
}


void Car::move()
{
	Position p = this->getPosition();
	p.x += 2;
	p.y += 2;
	setPosition(p);
	
}

