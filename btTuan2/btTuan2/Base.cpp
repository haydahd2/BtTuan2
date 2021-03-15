#include<iostream>
#include<string>
using namespace std;
class BaseObject
{
protected:
	int id, position;
	string name;
public:
	void setName() {
		cin>>name;
	}
	void setId() {
		cin >> id;
	}
	void setPosition() {
		cin >> position;
	}
};
class staticObject: public BaseObject
{
public:
	void getName() {
		cout <<"Object name: "<<name;
	}
	void getId() {
		cout << "Object id: " << id;
	}
	void getPosition() {
		cout << "Object position: " << position;
	}
};
class dynamicObject : public BaseObject
{
public:
	void getName() {
		cout << "Object name: " << name;
	}
	void getId() {
		cout << "Object id: " << id;
	}
	void getPosition() {
		cout << "Object position: " << position;
	}
};
int main() {
	staticObject listObj[2];
	for (int i = 0; i < 2; i++) {
		cout << "Object id: "; listObj[i].setId();
		cout << "Object name: "; listObj[i].setName();
		fflush(stdin);
		cout << "Object position: "; listObj[i].setPosition();
	}
	for (int i = 0; i < sizeof(listObj); i++) {
		listObj->getId();
	}
	for (int i = 0; i < sizeof(listObj); i++) {
		listObj->getName();
	}
	for (int i = 0; i < sizeof(listObj); i++) {
		listObj->getPosition();
	}
	delete listObj;
}