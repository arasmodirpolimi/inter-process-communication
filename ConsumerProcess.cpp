#include <iostream>
#include <fstream>
#include <string>

int main() {
    const char* pipeName = "mypipe";

    // Open the pipe for reading
    std::ifstream pipe(pipeName);
    if (!pipe) {
        std::cerr << "Error opening pipe for reading.\n";
        return 1;
    }

    // Read data from the pipe
    std::string data;
    std::getline(pipe, data);

    std::cout << "Consumer: Received data from pipe: " << data << std::endl;
    pipe.close();
    return 0;
}
