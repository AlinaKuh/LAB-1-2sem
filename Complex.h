#include <iostream>
#include <string>

class Oxides:public Complex {
public:
	std::string name;
	std::string description;
	void Information() {
		name = "Oxides ";
		description = "Oxides are complex substances consisting of two chemical elements, one of which is oxygen.\n\n";
		std::cout << name;
		std::cout << description;
	}
};

class Hydroxides:public Complex {
public:
	std::string name;
	std::string description;
	void Information() {
		name = "Hydroxides ";
		description = "Inorganic metal compounds of the general formula M(OH)n, where M is a metal, n is its oxidation state.\n\n";
		std::cout << name;
		std::cout << description;
	}
};

class Salt:public Complex {
public:
	std::string name;
	std::string description;
	void Information() {
		name = "Salt ";
		description = "Complex substances consisting of metal cations and anions of acidic residues..\n\n";
		std::cout << name;
		std::cout << description;
	}
};

