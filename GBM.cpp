#include "GBM.h"
#include <cmath>

GBM::GBM(double S0, double mu, double sigma, double dt)
	: S(S0), mu(mu), sigma(sigma), dt(dt)
{
}

double GBM::nextPrice() {
	double Z = rng.generateStandardNormal();
	S = S * exp((mu - 0.5 * sigma * sigma) * dt + sigma * sqrt(dt) * Z);
	return S;
}

vector<double> GBM::simulatePath(int steps) {
	vector<double> path;
	path.push_back(S);
	for (int i = 0; i < steps; ++i) {
		path.push_back(nextPrice());
	}
	return path;
}