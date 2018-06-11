#include <iostream>
#include <cstdlib>
#include <cmath>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "No argument was provided." << std::endl;
        return 1;
    }

    double i = std::atof(argv[1]);
    double r = std::sqrt(i);

    std::cout << r << std::endl;

    return 0;
}
