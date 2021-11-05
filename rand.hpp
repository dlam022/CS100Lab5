#ifndef _RAND_HPP_
#define _RAND_HPP_

#include "base.hpp"

using namespace std;

class Rand : public Base {
	private:
		double num = rand() % 100;
	public:
		Rand(){ }
		virtual double evaluate() { return num; }
		virtual string stringify() {to_string(num);}
}; 
		
#endif		

