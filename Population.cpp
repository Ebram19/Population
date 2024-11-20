// File Name: PoPULtion
// Programmer Name: Ebram Azer
// Date:NOv 2024
// Requirments: Write Program calculate population

#include <iostream>  // For input-output operations
using namespace std; // Use the standard namespace

int main() {
    // Variables to hold user input
    int startingPopulation;
    double dailyIncrease;
    int days;

    // Input validation for starting population
    do {
        cout << "Enter the starting number of organisms (must be at least 2): ";
        cin >> startingPopulation;
        if (startingPopulation < 2) {
            cout << "Invalid input. The starting population must be at least 2.\n";
        }
    } while (startingPopulation < 2);

    // Input validation for daily population increase
    do {
        cout << "Enter the average daily population increase (as a percentage, must be non-negative): ";
        cin >> dailyIncrease;
        if (dailyIncrease < 0) {
            cout << "Invalid input. The daily population increase cannot be negative.\n";
        }
    } while (dailyIncrease < 0);

    // Input validation for number of days
    do {
        cout << "Enter the number of days they will multiply (must be at least 1): ";
        cin >> days;
        if (days < 1) {
            cout << "Invalid input. The number of days must be at least 1.\n";
        }
    } while (days < 1);

    // Display the size of the population for each day
    cout << "\nDay\tPopulation\n";
    cout << "----------------\n";

    double population = startingPopulation;
    for (int day = 1; day <= days; day++) {
        cout << day << "\t" << population << endl;
        population += (population * (dailyIncrease / 100.0)); // Increase population by the daily percentage
    }

    return 0;
}
