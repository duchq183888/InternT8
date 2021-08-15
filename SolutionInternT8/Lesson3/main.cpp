#include<iostream>
#include"ListObject.h"
using namespace std;


int main() {
    vector<BaseObject*> ls;
	
    BaseObject* tree = new Tree("jkcbjdc","Rose",true,"vines");
    BaseObject* house = new House("cdckd", "dccc", false, 30);
    BaseObject* motorbike = new Motorbike("uiee", "kawasakiz1000", 255, 125);
    BaseObject* car = new Car("asd", "posche", 500, "mustang");

    ls.push_back(tree);
    ls.push_back(house);
    ls.push_back(motorbike);
    ls.push_back(car);
    cout << "=============NAME====================" << endl;
    for (auto obj : ls) {
        cout << obj->getName()<<endl;
    }
    cout << endl;
    cout << "===============BEFORE MOVE=============" << endl;
    for (auto obj : ls) {
        obj->printPosition();
    }
    cout << "===============AFTER MOVE=============" << endl;

    for (auto obj : ls) {
        obj->move();
    }
    cout <<endl;
    for (auto obj : ls) {
        obj->printPosition();
    }

    ls.clear();
	
}
