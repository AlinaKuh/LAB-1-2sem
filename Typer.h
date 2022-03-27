#include <iostream>
#include <string>

class Substances {
public:
	int answer;
	int SelectType() {
		std::cout << "Select type of Substances:\n";
		std::cout << "1.Simple.\n2.Complex.\n";
		std::cout << "Your answer: ";
		std::cin >> answer;
		std::cout << "\n";

		return answer;
	}
};

class Simple:public Substances {
public:
	std::string name;
	std::string description;
	int Description() {
		name = "\nSimple";
		description = "Substances consisting exclusively of atoms of one chemical element (from homonuclear molecules), in contrast to complex substances.\n\n";
		std::cout << "Open description?\n1.Yes.\n2.No.\n";
		std::cout << "0.Exit.\n";
		std::cout << "Your answer: ";
		std::cin >> answer;
		std::cout << "\n";

		return answer;
	}
	void TypesOfSubstances() {
		std::cout << "\nSelect a substances. Enter number of substances:\n";
		std::string types[2] = {"Metals", "Nonmetals",};
		for (int num = 1; num < 3; num++) {
			std::cout << num << "." << types[num - 1] << ".\n";
		}
	}
	int SelectTypeOfSubstances() {
        std::cout << "0.Exit.\n";
		std::cout << "Your answer: ";
		std::cin >> answer;
		std::cout << "\n";

		return answer;
	}
};

class Complex:public Substances {
public:
	std::string name;
	std::string description;
	int Description() {
		name = "\nComplex ";
		description = " Substances composed of atoms of different chemical elements are called complex. Most chemicals are complex. Many complex substances have a molecular structure.\n\n";
		std::cout << "Open description?\n1.Yes.\n2.No.\n";
		std::cout << "0.Exit.\n";
		std::cout << "Your answer: ";
		std::cin >> answer;
		std::cout << "\n";

		return answer;
	}
	void TypesOfSubstances() {
		std::cout << "\nSelect a substances. Enter number of substances:\n";
		std::string types[3] = {"Oxides", "Hydroxides", "Salt", };
		for (int num = 1; num < 4; num++) {
			std::cout << num << "." << types[num - 1] << ".\n";
		}
	}
	int SelectTypeOfSubstances() {
		std::cout << "0.Exit.\n";
		std::cout << "Your answer: ";
		std::cin >> answer;
		std::cout << "\n";

		return answer;
	}
};

