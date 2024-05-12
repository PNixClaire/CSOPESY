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
	std::cout << "Type '" << RED << "exit" << DEFAULT << "' to quit, '" << RED << "clear" << DEFAULT << "' to clear the screen\n";
}

//command function templates
void clear() {
	// clear screen
	system("cls");
    printHeader();
}

void marquee() {
	//doing something
    std::cout << "marquee command recognized. Doing something \n";
}

void screen() {
    //doing something
    std::cout << "screen command recognized. Doing something \n";
}

void processsmi() {
    //doing something
    std::cout << "process-smi command recognized. Doing something \n";
}

void nvidiasmi() {
    //doing something
    std::cout << "nvidia-smi command recognized. Doing something \n";
}

int main()
{
    std::string command;

    printHeader();

    //while loop until user exits
    while (true) {

        //input
        std::cout << "Enter Command: ";
        std::cin >> command;

        if (command == "exit") {
            break; // Exit the loop and end the program
        }
        else if (command == "clear") {
            clear();
        }
        else if (command == "marquee") {
            marquee();
        }
        else if (command == "screen") {
            screen();
        }
        else if (command == "process-smi") {
            processsmi();
        }
        else if (command == "nvidia-smi") {
            nvidiasmi();
        }
        else {
            std::cout << "Invalid command. Please try again.\n";
        }
    }

    return 0;
}
