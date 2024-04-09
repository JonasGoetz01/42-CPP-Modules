#include <iostream>
#include <fstream>
#include <string>

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream inputFile(filename.c_str());
    if (!inputFile) {
        std::cerr << "Error: Unable to open input file: " << filename << std::endl;
        return;
    }

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile) {
        std::cerr << "Error: Unable to create output file: " << filename + ".replace" << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = 0;
        size_t startPos = 0;
        while ((pos = line.find(s1, startPos)) != std::string::npos) {
            outputFile << line.substr(startPos, pos - startPos);
            outputFile << s2;
            startPos = pos + s1.length();
        }
        outputFile << line.substr(startPos) << std::endl;
    }

    inputFile.close();
    outputFile.close();

    std::cout << "Replacement completed successfully. Output written to " << filename + ".replace" << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    replaceInFile(filename, s1, s2);

    return 0;
}
