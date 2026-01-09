#ifndef OPTION_PRICER_H
#define OPTION_PRICER_H

#include "GBM.h"
#include <vector>

using namespace std;

class OptionPricer {
public:
	OptionPricer(double S0, double K, double r, double sigma, double T, int steps, int paths);
	double priceCallOption();

private:
	double S0;     // initial stock price
	double K;      // strike price
	double r;      // risk-free rate
	double sigma;  // volatility
	double T;      // time to maturity
	int steps;     // time steps
	int paths;     // number of Monte Carlo paths
};

#endif