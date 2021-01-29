#ifndef ALGO_H
#define ALGO_H

#include <iostream>
#include <fstream>
#include <cmath>
#include <random>
#include <vector>
#include <algorithm>
#include <limits>

#include "Solution.h"

class Algo
{
private:
	Solution sol; 
	const Param& _setup;
	double _upper_cost, _lower_cost; 

	int randomMutants; 
	int tempMut; 
	double globalMin; 

	int* mutT; 
	double* globalMinimizer; 
	double* runTab;

public:
	Algo(const Prob&, const Param&); 
	~Algo() {};

private:
	bool Exists(int); 
	double best_cost() const; 
	double worst_cost() const; 
};

#endif