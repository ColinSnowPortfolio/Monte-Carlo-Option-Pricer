#ifndef GBM_H
#define GBM_H

#include "RandomGenerator.h"
#include <vector>

using namespace std;

class GBM {
public:
	GBM(double S0, double mu, double sigma, double dt);
	double nextPrice();
	vector<double> simulatePath(int steps);

private:
	double S;      // inital stock price
	double mu;     // average yearly growth
	double sigma;  // daily fluctuation +-sigma
	double dt;     // daily step
	RandomGenerator rng;
};

#endif