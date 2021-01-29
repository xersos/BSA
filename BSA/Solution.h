#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <vector>
#include <math.h>

#include "Prob.h"
#include "Param.h"

using namespace std;

#define PI 3.14159265  

class Solution
{
public:
	Solution(const Prob& pbm); 
	Solution(const Solution& sol); 
	~Solution() {};

	friend ostream& operator << (ostream& os, const Solution& sol);	

	Prob& getPbm() const;
	double getFitness();
	vector<double>& _tabLine();

	double fitness(vector<double>&);	

	void random(double, double);	

	vector<double> tabLine;

private:
	double currentFitness; 
	const Prob& pbm; 
	int dim;
};

#endif