#include <iostream>
#include "OptionPricer.h"

using namespace std;

int main() {

	/*
	S0 = 100 (stock price)
	K = 100 (strike price)
	r = 0.05 (5% risk-free rate)
	sigma = 0.2 (volatility)
	T = 1.0 (1 year)
	steps = 252 (daily steps)
	paths = 10000 (Monte Carlo simulations ran)
	*/ 
	OptionPricer pricer(100.0, 100.0, 0.05, 0.2, 1.0, 252, 10000);

	double callPrice = pricer.priceCallOption();
	cout << "European Call Option Price: " << callPrice << endl;

	return 0;
}