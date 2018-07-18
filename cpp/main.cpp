#include<iostream>

int main(int argc, char *argv[])
{
    std::cout << "This is just an example program." << std::endl;
    std::cout << "Arguments:" << std::endl;
    for (int i = 1; i < argc; i++) {
        std::cout << "\t" << argv[i] << std::endl;
    }
    return 0;
}
