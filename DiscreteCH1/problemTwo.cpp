#include <iostream>
#include <string>

char* bitwiseAND(std::string p, std::string q, int sizen) {	
	char* result = (char*)malloc(sizen * sizeof(char));
	int i;

	for (i = 0; i < sizen; i++) {
		if (p[i] == '1' && q[i] == '1') {
			result[i] = '1';
		}
		else {
			result[i] = '0';
		}
	}

	result[i] = 0;
	return result;

}

char* bitwiseOR(std::string p, std::string q, int sizen) {
	char* result = (char*)malloc(sizen * sizeof(char));
	int i;

	for (i = 0; i < sizen; i++) {
		if (p[i] == '1' || q[i] == '1') {
			result[i] = '1';
		}
		else {
			result[i] = '0';
		}
	}

	result[i] = 0;
	return result;
}

char* bitwiseXOR(std::string p, std::string q, int sizen) {
	char* result = (char*)malloc(sizen * sizeof(char));
	int i;

	for (i = 0; i < sizen; i++) {
		if (p[i] == q[i]) {
			result[i] = '0';
		}
		else {
			result[i] = '1';
		}
	}

	result[i] = 0;
	return result;
}

void problemTwo() {
	std::string p, q;
	int sizen, i;

	std::cout << "Bit string p: ";
	std::cin >> p;

	std::cout << "Bit string q: ";
	std::cin >> q;

	//Checks if same size
	if (p.size() == q.size()) {
		sizen = p.size();
	}
	else {
		std::cout << "Error: Bits not same size." << std::endl;
		return;
	}

	//Checks if only contains 1's and 0's
	for (i = 0; p[i] != '\0'; i++) {
		if (p[i] == '0' || p[i] == '1' || q[i] == '0' || q[i] == '1') {}
		else {
			std::cout << "Error: Contains non-binary values." << std::endl;
			return;
		}
	}

	std::cout << "\nBitwise And:\t\t " << bitwiseAND(p, q, sizen) << std::endl;
	std::cout << "Bitwise Or:\t\t " << bitwiseOR(p, q, sizen) << std::endl;
	std::cout << "Bitwise Exclusive Or:\t " << bitwiseXOR(p, q, sizen) << std::endl;
}