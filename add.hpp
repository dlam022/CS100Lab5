#ifndef __ADD_HPP_
#define __ADD_HPP_

#include "base.hpp"
#include "op.hpp"
#include <string>


using namespace std;

class Add : public Base {
	private:
		Op* l;
		Op* r;
	public:
		Add(Op* left, Op* right) {
			this-> l = left;
			this-> r = right;
		}
		virtual double evaluate() {
			return l->evaluate() + r->evaluate();
		}
		virtual string stringify() {
			return "(" + l->stringify() + "+" + r->stringify() + ")";

};

#endif



