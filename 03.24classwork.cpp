#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

class myclass {
	int age { };
	string name { };
	string addr { };
	int *scores { };
	int scoreslen { };
public:
	int getAge() {
		return age;
	}
	void setAge(int a) {
		if (a >= 18)
			age = a;
		else
			age = -1;
	}
	string getName() {
		return name;
	}
	void setName(string n) {
		name = n;
	}
	string getAddr() {
		return addr;
	}
	void setAddr(string n) {
		addr = n;
	}

	void appendScore(int s) {
		if (scores == nullptr) {
			scores = new int[1];
			scores[0] = s;
			scoreslen = 1;
			return;
		}
		int *newscores = new int[scoreslen + 1];
		for (int i = 0; i < scoreslen; i++) {
			newscores[i] = scores[i];
		}
		newscores[scoreslen] = s;
		delete[] scores;
		scores = newscores;
		scoreslen++;
	}

	const int* getScores() {
		return scores;
	}

	int getScoresLen() {
		return scoreslen;
	}

	void editScore(int s, int idx) {
		if (idx >= scoreslen) {
			cout << "Out of bounds";
			return;
		} else {
			scores[idx] = s;
		}
	}

	void printScores() {
		for (int i = 0; i < scoreslen; i++) {
			cout << scores[i] << " ";
		}
		cout << endl;
	}

	myclass() {
		age = -1;
		name = "";
		addr = "";
		scores = nullptr;
		scoreslen = 0;
	}
	myclass(int a, string n) {
		setAddr("");
		setAge(a);
		setName(n);
		scores = nullptr;
		scoreslen = 0;
	}
	myclass(string n) {
		age = -1;
		setAddr("");
		setName(n);
		scores = nullptr;
		scoreslen = 0;
	}
	myclass(int a) {
		setAge(a);
		setAddr("");
		setName("");
		scores = nullptr;
		scoreslen = 0;
	}
	myclass(string n, string ad) {
		age = -1;
		setAddr(ad);
		setName(n);
		scores = nullptr;
		scoreslen = 0;
	}
	myclass(int a, string n, string ad) {
		setAge(a);
		setAddr(ad);
		setName(n);
		scores = nullptr;
		scoreslen = 0;
	}
	~myclass() {

	}
};

int main() {
	myclass c("Demiray Mercader");
	//Person c;
	c.setAge(18);
	//c.setAge(17);
	//c.setName("Bineta Ulich-Kowalski");
	c.appendScore(12);
	cout << c.getName() << ", age " << c.getAge() << endl;
	c.printScores();
	c.appendScore(11);
	c.printScores();
	c.editScore(10, 0);
	c.printScores();
	return 0;
}
