#include "OptionPricer.h"
#include <cmath>

OptionPricer::OptionPricer(double S0, double K, double r, double sigma, double T, int steps, int paths)
	: S0(S0), K(K), r(r), sigma(sigma), T(T), steps(steps), paths(paths)
{
}

double OptionPricer::priceCallOption() {
	double sumPayoff = 0.0;
	double dt = T / steps;

	for (int i = 0; i < paths; ++i) {
		GBM stock(S0, r, sigma, dt);
		vector<double> path = stock.simulatePath(steps);
		double ST = path.back();
		double payoff = max(ST - K, 0.0);
		sumPayoff += payoff;
	}

	double discounted = (sumPayoff / paths) * exp(-r * T);
	return discounted;
}