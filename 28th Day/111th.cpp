#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Ticket {
    int ticketId;
    string passengerName;
    string movieOrRoute;
};

int main() {
    vector<Ticket> system;
    int choice;

    while (true) {
        cout << "\n--- Ticket Booking System ---\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display All Bookings\n";
        cout << "3. Search Booking by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Ticket t;
            cout << "Enter Ticket ID: ";
            cin >> t.ticketId;
            cin.ignore();
            cout << "Enter Passenger Name: ";
            getline(cin, t.passengerName);
            cout << "Enter Movie Title / Destination Route: ";
            getline(cin, t.movieOrRoute);
            system.push_back(t);
            cout << "Ticket booked successfully!\n";
        } 
        else if (choice == 2) {
            if (system.empty()) {
                cout << "No bookings found in the system.\n";
            } else {
                cout << "\n--- Booking List ---\n";
                for (const auto& t : system) {
                    cout << "Ticket ID: " << t.ticketId << " | Passenger: " << t.passengerName << " | Details: " << t.movieOrRoute << "\n";
                }
            }
        } 
        else if (choice == 3) {
            int searchId;
            bool found = false;
            cout << "Enter Ticket ID to search: ";
            cin >> searchId;
            for (const auto& t : system) {
                if (t.ticketId == searchId) {
                    cout << "Booking Found -> Ticket ID: " << t.ticketId << " | Passenger: " << t.passengerName << " | Details: " << t.movieOrRoute << "\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Booking with Ticket ID " << searchId << " not found.\n";
            }
        } 
        else if (choice == 4) {
            cout << "Exiting system. Goodbye!\n";
            break;
        } 
        else {
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}