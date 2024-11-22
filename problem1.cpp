#include <iostream>
using namespace std;

// Function to calculate years and remaining days from the total number of days
void days2years(int &days, int &years) {
    // If days are more than or equal to 365, calculate years and remaining days
    if (days >= 365) {
        years = days / 365;      // Calculate how many full years
        days = days % 365;       // Update days to the remainder
    }
    else {
        years = 0;               // If days are less than 365, set years to 0
        // No need to update 'days', as it's already the correct value
    }
}

int main() {
    int days, years;
    cin >> days;            // Take the number of days as input
    days2years(days, years); // Convert days to years and update days
    cout << "Years: " << years << " Days: " << days << endl; // Output the result
    return 0;
}
