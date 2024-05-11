#include <iostream>
#include <string>

//text color
const std::string RED = "\033[1;31m";
const std::string GREEN = "\033[1;32m";
const std::string DEFAULT = "\033[0m";

//Header
void printHeader() {
	std::cout << " ___   ___   ___   ___   ___   ___   _ _\n";
	std::cout << "|  _> / __> | . | | . \\ | __> / __> | | |\n";
	std::cout << "| <__ \\__ \\ | | | |  _/ | _>  \\__ \\ \\   /\n";
	std::cout << "`___/ <___/ `___' |_|   |___> <___/  |_|\n";
	std::cout << GREEN << "Hello, Welcome to CSOPESY commandline!\n" << DEFAULT;
	std::cout << "Type '" << RED << "exit" << DEFAULT << "' to quit, '" << RED  << "clear" << DEFAULT << "' to clear the screen\n";
}

//command function templates
void clear(){
    //clear screen
	system(cls); 
}

void marquee() {
	//doing something
}


int main()
{
	std::string command; 

	//while loop until user exits
	printHeader();

	//input
	std::cout << "Enter Command: ";
	std::cin >> command;


	if (command == "clear") {
		clear();
		printHeader();
	}
	else {
		std::cout << "efjpwfofjpejf";
	}
	
}