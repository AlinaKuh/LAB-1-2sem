#include <iostream>
#include <string>
#include "Typer.h"
#include "Simple.h"
#include "Complex.h"

int SelectSubstances();

int SimpleDescription();
int SimpleSelect();
int SimpleSubstances(int substances);

int ComplexDescription();
int ComplexSelect();
int ComplexSubstances(int substances);

int ReloadSubstances(int answer);
int ReloadOrEnd(int ClassNumber);

int SelectSubstances() {
	int answer;
    Substances substances;
	answer = substances.SelectType();

	if (answer > 0 && answer < 3)
		return RestartSubstances(answer);
	else {
		std::cout << "Not right, try again!\n\n";
		return SelectSubstances();
	}
    return 0;
}

int SimpleDescription() {
	int answer;
    Simple Simple;
	answer = simple.Description();

	if (answer == 1) {
		std::cout << simple.name;
		std::cout << simple.description;
        SimpleSelect();
	}
	else if (answer == 2)
        SimpleSelect();
	else if (answer == 3)
		SelectSubstances();
	else {
		std::cout << "Not right, try again!\n\n";
		return SimpleDescription();
	}
	return 0;
}
int SimpleSelect() {
	int answer;
    Simple Simple;
    simple.TypesOfSubstances();
	answer = simple.SelectTypeOfSubstances();

	if (answer > 0 && answer < 3)
		return SimpleSubstances(answer);
	else if (answer == 0) {
		std::cout << "Which step do you want to go back to?\n";
		std::cout << "1.Description.\n2.Substances.\n";
		std::cout << "Your answer: ";
		std::cin >> answer;
		std::cout << "\n";

		if (answer == 1)
            SimpleDescription();
		else if (answer == 2)
			SelectSubstances();
		else {
			std::cout << "Wrong answer, try again!\n\n";
			SelectSubstances();
		}
	}
	else {
		std::cout << "Wrong answer, try again!\n\n";
		return SimpleSelect();
	}
	return 0;
}
int SimpleSubstances(int Substances) {
	if (Substances == 1) {
        Metals metals;
		metalss.Information();
        ReloadOrEnd(1);
	}
	else if (Substances == 2) {
		Nonmetals nonmetals;
        nonmetals.Information();
        ReloadOrEnd(1);
	}
	
	return 0;
}

int ComplexDescription() {
	int answer;
    Complex complex;
	answer = complex.Description();

	if (answer == 1) {
		std::cout << complex.name;
		std::cout << complex.description;
        ComplexSelect();
	}
	else if (answer == 2)
        ComplexSelect();
	else if (answer == 0)
		SelectSubstances();
	else {
		std::cout << "Wrong answer, try again!\n\n";
		return ComplexDescription();
	}
	return 0;
}
int ComplexSelect() {
	int answer;
    Complex complex;
    complex.TypesOfSubstances();
	answer = complex.SelectTypeOfSubstances();

	if (answer > 0 && answer < 4)
		return ComplexSubstances(answer);
	else if (answer == 0) {
		std::cout << "Which step do you want to go back to?\n";
		std::cout << "1.Description.\n2.Transport.\n";
		std::cout << "Your answer: ";
		std::cin >> answer;
		std::cout << "\n";

		if (answer == 1)
            ComplexDescription();
		else if (answer == 2)
			SelectSubstances();
		else {
			std::cout << "Not right, try again!\n\n";
			SelectSubstances();
		}
	}
	else {
		std::cout << "Not right, try again!\n\n";
		return ComplexSelect();
	}
	return 0;
}
int ComplexSubstances(int substances) {
	if (substances == 1) {
		Oxides oxides;
        oxides.Information();
        ReloadOrEnd(2);
	}
	else if (substances == 2) {
		Hydroxides hydroxides;
        hydroxides.Information();
        ReloadOrEnd(2);
	}
	else if (substances == 3) {
		Salt salt;
		salt.Information();
        ReloadOrEnd(2);
	}
	return 0;
}

int ReloadSubstances(int answer) {
	if (answer == 1) {
		SimpleDescription();
	}
	else if (answer == 2) {
		ComplexDescription();
	}

	return 0;
}
int ReloadOrEnd(int ClassNumber) {
	int answer;
	std::cout << "Select one of the functions:\n";
	std::cout << "0.Exit.\n1.Stop.\n2.Reload.\n";
	std::cout << "Your answer: ";
	std::cin >> answer;
	std::cout << "\n";

	if (answer == 0) {
		if (ClassNumber == 1)
			SimpleSelect();
		else if (ClassNumber == 2)
			ComplexSelect();
	}
	else if (answer == 1)
		return 0;
	else if (answer == 2)
		SelectSubstances();
	else {
		std::cout << "Not right, try again!\n\n";
		return ReloadOrEnd(ClassNumber);
	}
	return 0;
}

int main() {
	SelectSubstances();
    return 0;
}
