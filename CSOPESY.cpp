
#include "command_handler.h"

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
