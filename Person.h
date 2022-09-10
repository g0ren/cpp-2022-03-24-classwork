#ifndef PERSON_H_
#define PERSON_H_
#include <string>


class Person {
	int age { };
	std::string name { };
public:
	int getAge();
	inline void setAge(int a);
	std::string getName();
	void setName(std::string n);
	Person();
	virtual ~Person();
};


#endif /* PERSON_H_ */
