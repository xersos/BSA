#ifndef PARAM_H
#define PARAM_H

#include <iostream>
#include <math.h>

using namespace std;

class Param
{
private:
	int  indRun;
	int  nbItRun; 
	int  popsize; 
	int  dim; 
	double mixrate;

public:
	Param();
	Param(int, int, int, int);
	Param(const Param&);
	~Param() {};

	friend ostream& operator << (ostream&, Param&);
	friend istream& operator >> (istream&, Param&);

	// accesseurs des paramétres
	int   getIndRun() const;
	int   getNbItRun() const;
	int   getPopSize() const;
	int   getDim() const;
	double   getMixRate() const;

	// mutateurs des paramétres
	void defineIndRun(int);
	void defineNbItRun(int);
	void definePopSize(int);
	void defineDim(int);
	void defineMixRate(double);
};

#endif