#include <iostream>
#include <string>

class Metals:public Simple {
public:
	std::string name;
	std::string description;
	void Information() {
		name = "Metals ";
		description = "A group of chemical elements that, in the form of simple substances under normal conditions, have characteristic metallic properties.\n\n";
		std::cout << name;
		std::cout << description;
	}
};

class Nonmetals:public Simple {
public:
	std::string name;
	std::string description;
	void Information() {
		name = "Nonmetals ";
		description = "Simple substances that do not exhibit metallic properties, have high electron affinity, high values ​​of relative electronegativity, capable of exhibiting oxidizing properties.\n\n";
		std::cout << name;
		std::cout << description;
	}
};
