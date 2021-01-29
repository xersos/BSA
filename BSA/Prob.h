#ifndef PROBLEM_H
#define PROBLEM_H

#include <iostream>

#include "Param.h"

class Prob
{
public:
	Prob(); 
	Prob(int, int); 
	Prob(const Prob&); 
	~Prob() {}; 

	friend ostream& operator << (ostream&, const Prob&); 
	friend istream& operator >> (istream&, Prob&); 

	int getDim();
	int getFuncId() const;

	double LowerLimit, UpperLimit;	 

private:
	unsigned int dim;
	int function_id;	
};

#endif