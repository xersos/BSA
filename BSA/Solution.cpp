#include "Solution.h"
#include <time.h>

Solution::Solution(const Prob& _pbm) :
	pbm(_pbm)
{}

Solution::Solution(const Solution& sol) :
	currentFitness(sol.currentFitness), pbm(sol.pbm)
{}

ostream& operator << (ostream& os, const Solution& sol)
{
	os << "Current Fitness : " << sol.currentFitness << endl;
	return os;
}

void Solution::random(double upper, double lower)
{
	Param set;
	dim = set.getDim();

	int j;
	for (j = 0; j < dim; j++)
	{
		tabLine.push_back(lower + (upper - lower) * (double)rand() / RAND_MAX);
	}
}

vector<double>& Solution::_tabLine() {
	return tabLine;
}

double Solution::fitness(vector<double>& tabL)
{
	double sum = 0.0;
	currentFitness = 0.0;

	int j; // limité à la dim

	switch (pbm.getFuncId())
	{
	case 1: // Rastrigin

		for (j = 0; j < dim; j++)
		{
			sum = pow(tabL[j], 2) - (10 * cos(2 * PI * tabL[j]));
		}

		currentFitness = (10 * dim) + sum;

		break;
	}
	return currentFitness;
}

double Solution::getFitness() {
	return currentFitness;
}