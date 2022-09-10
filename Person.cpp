#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

Person::Person() {
	age=-1;
	name="";
	cout<<"Constructing"<<endl;
}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

int Person::getAge() {
	return age;
}

void Person::setAge(int a) {
	if (a >= 18)
		age = a;
	else
		age = -1;
}

string Person::getName() {
	return name;
}

void Person::setName(string n) {
	name = n;
}
