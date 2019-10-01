#include <iostream>
#include "problemOne.h"
#include "problemTwo.h"
#include "problemThree.h"


int main() {
	int decision;

	std::cout << "Chose a problem\n\n" << std::endl;
	std::cout << "1) Given the truth values of the propositions p and q, find the truth values of the conjunction, disjuction, exlusive or , conditional statement, and biconditional of these propositions\n" << std::endl;
	std::cout << "2) Given two bit strings of length n, find the bitwise AND, bitwise OR, and bitwise XOR of these strings.\n" << std::endl;


	std::cin >> decision;

	if (decision == 1) {
		problemOne();
	}
	else if (decision == 2) {
		problemTwo();
	}
	else if (decision == 3) {
		problemThree();
	}
	return 0;
}