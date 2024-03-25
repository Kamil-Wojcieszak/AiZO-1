//
// Created by kamil on 25.03.2024.
//

#include "Test.h"
#include <fstream>

void Test::test() {
	std::ofstream myfile;
	myfile.open ("example.txt");
	myfile << "Writing this to a file.\n";
	myfile.close();
}
