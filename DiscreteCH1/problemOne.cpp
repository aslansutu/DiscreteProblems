#include <iostream>


bool conjuction(bool p, bool q) {
	if (p == true && q == true) {
		return true;
	}
	else {
		return false;
	}
}

bool disjuction(bool p, bool q) {
	if (p == true || q == true) {
		return true;
	}
	else {
		return false;
	}
}

bool exclusiveOR(bool p, bool q) {
	if (p == q) {
		return false;
	}
	else {
		return true;
	}
}

bool conditional(bool p, bool q) {
	if (p == true && q == false) {
		return false;
	}
	else {
		return true;
	}
}

bool biconditional(bool p, bool q) {
	if (p == q) {
		return true;
	}
	else {
		return false;
	}
}

void problemOne() {
	bool p, q;
	std::cout << std::endl << "Enter 1 for TRUE and 0 for FALSE\n" << std::endl;
	std::cout << "p: ";
	std::cin >> p;
	std::cout << "q: ";
	std::cin >> q;
	std::cout << std::endl;

	std::cout << "Conjuction: " << conjuction(p, q) << std::endl;
	std::cout << "Disjuction: " << disjuction(p, q) << std::endl;
	std::cout << "Exlusive Or: " << exclusiveOR(p, q) << std::endl;
	std::cout << "Conditional: " << conditional(p, q) << std::endl;
	std::cout << "Biconditional: " << biconditional(p, q) << std::endl;
}