#ifndef RANDOM_GENERATOR_H
#define RANDOM_GENERATOR_H

#include <random>

using namespace std;

class RandomGenerator {
public:
	RandomGenerator();
	double generateStandardNormal();

private:
	mt19937 engine;
	normal_distribution<double> distribution;

};

#endif