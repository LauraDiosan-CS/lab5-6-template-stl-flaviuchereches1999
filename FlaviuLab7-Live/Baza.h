#pragma once
#include<iostream>
using namespace std;

class Base {
public:
	int public_data;
	Base() {
		this->public_data = 0;
	}
	Base(const Base& b) {
		this->public_data = b.public_data;
	}
	~Base(){}
	Base& operator=(const Base& b) {
		if (this != &b) {
			this->public_data = b.public_data;
		}
		return *this;
	}
};