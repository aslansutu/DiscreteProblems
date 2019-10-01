#include <iostream>
#include <string>

std::string propositions(std::string compound) {
	std::string propositions;
	int i, j, k, props;

	props = 0;
	j = 0;
	propositions.resize(0);

	for (i = 0; compound[i] != '\0'; i++) {
		if (compound[i] >= 'a' && compound[i] <= 'z') {
			for (k = 0; propositions[k] != '\0'; k++) {
				if (propositions[k] == compound[i]) {
					break;
				}
			}
			if (k == props) {
				propositions.resize(props+1);
				propositions[props] = compound[k];
				props++;
			}
		}
	}

	return propositions;
}

void problemThree() {
	std::string compound;

	std::cout << "enter compound" << std::endl;
	getline(std::cin, compound);

	std::cout << "Propositions are: " << propositions(compound);
}