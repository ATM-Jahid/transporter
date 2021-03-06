#include <iostream>
#include <fstream>
#include <string>

#include "inner.h"

int transport_solver(int I, int J, double *dx, double *dy,
		int K, double *mu, double *eta, double *w,
		int M, double *SigmaT, double *SigmaS, double *BC,
		int *materialMatrix, double *sourceMatrix,
		double conCrit, int maxIter, std::string dot_out) {

	std::ofstream outputFile;
	outputFile.open(dot_out, std::ofstream::app);

	outputFile << "will solve D.O. here\n\n";
	outputFile.close();

	inner(I, J, dx, dy,
			K, mu, eta, w,
			M, SigmaT, SigmaS, BC,
			materialMatrix, sourceMatrix,
			conCrit, maxIter, dot_out);

	return 0;
}
