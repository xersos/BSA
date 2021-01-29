#include "Prob.h"

Prob::Prob() :
	dim(30), function_id(1), LowerLimit(-5.12), UpperLimit(5.12)
{}

Prob::Prob(int _dim, int _funId) :
	dim(_dim), function_id(_funId)
{
	switch (_funId)
	{
	case 1: // Rastrigin
		LowerLimit = -5.12;
		UpperLimit = 5.12;
		break;
	}
}

Prob::Prob(const Prob& pbm) :
	dim(pbm.dim), function_id(pbm.function_id), LowerLimit(pbm.LowerLimit), UpperLimit(pbm.UpperLimit)
{}

ostream& operator << (ostream& os, const Prob& pbm) {
	os << "Function Id : " << pbm.function_id << " LowerLimit : " << pbm.LowerLimit << " UpperLimit : " << pbm.UpperLimit << endl;
	return os;
}

istream& operator >> (istream& is, Prob& pbm) {
	cout << "Function Id : ";
	is >> pbm.function_id;
	switch (pbm.function_id)
	{
	case 1: // Rastrigin
		pbm.LowerLimit = -5.12;
		pbm.UpperLimit = 5.12;
		break;
	}
	return is;
}

int Prob::getDim()
{
	Param sp;
	dim = sp.getDim();
	return dim;
}

int Prob::getFuncId() const
{
	return function_id;
}