#include <iostream>
#include <fstream>
#include <string>

int main() {
    const char* pipeName = "mypipe";

    // Open the pipe for writing
    std::ofstream pipe(pipeName);
    if (!pipe) {
        std::cerr << "Error opening pipe for writing.\n";
        return 1;
    }

    // Write data to the pipe
    std::string data = "Hello from Producer!";
    pipe << data << std::endl;

    std::cout << "Producer: Sent data to pipe: " << data << std::endl;
    pipe.close();
    return 0;
}
// create a test commit 
