#ifndef _SUB_HPP_
#define _SUB_HPP_

#include "base.hpp"
#include "op.hpp"

using namespace std;


class Sub : public Base {
	private: 
		Op* l;
		Op* r;
	public:
		Sub(Op* left, Op* right) {
			this->l = left;
			this->r = right;
		}
		virtual double evaluate() {
			return l->evaluate() - r->evaluate();
		virtual string stringify() {
			return "(" + l->stringify() + "-" + r->stringify() + ")";
		}
};

#endif
