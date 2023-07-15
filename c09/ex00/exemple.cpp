#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <map>

std::map<std::string, double> readExchangeRates(const std::string& filename) {
    std::map<std::string, double> exchangeRates;

    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error: could not open file." << std::endl;
        return exchangeRates;
    }

    std::string line;
    std::getline(file, line); // Skip header line
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string date;
        double rate;

        if (std::getline(iss, date, ',') && iss >> rate) {
            exchangeRates[date] = rate;
        } else {
            std::cerr << "Error: Invalid format in database => " << line << std::endl;
        }
    }

    return exchangeRates;
}

int main() {
    std::map<std::string, double> exchangeRates = readExchangeRates("database.csv");

    // Use the exchangeRates map for further processing

    return 0;
}
