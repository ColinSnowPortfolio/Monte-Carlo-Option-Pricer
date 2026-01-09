#include "RandomGenerator.h"

RandomGenerator::RandomGenerator() 
	: engine(random_device{}()),
	  distribution(0.0, 1.0)
{
}

double RandomGenerator::generateStandardNormal() {
	return distribution(engine);
}