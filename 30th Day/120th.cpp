#include <iostream>
#include <string>

using namespace std;

int main() {
    const int SQUAD_SIZE = 4;
    string playerNames[SQUAD_SIZE] = {"", "", "", ""};
    int totalKills[SQUAD_SIZE] = {0, 0, 0, 0};
    int maxSurvivalTime[SQUAD_SIZE] = {0, 0, 0, 0};
    
    int choice;

    while (true) {
        cout << "\n--- PUBG Mobile Squad Dashboard ---\n";
        cout << "1. Initialize/Reset Squad\n";
        cout << "2. Update Player Match Stats\n";
        cout << "3. Display Squad Standings\n";
        cout << "4. Find MVP (Most Kills)\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\n--- Register Your Squad ---\n";
            for (int i = 0; i < SQUAD_SIZE; i++) {
                cout << "Enter In-Game Name (IGN) for Player " << (i + 1) << ": ";
                cin >> playerNames[i];
                totalKills[i] = 0;
                maxSurvivalTime[i] = 0;
            }
            cout << "\nSquad successfully dropped into the lobby!\n";
        } 
        else if (choice == 2) {
            if (playerNames[0].empty()) {
                cout << "Please register your squad first (Option 1).\n";
            } else {
                string targetName;
                bool found = false;
                cout << "\nEnter Player IGN to update after match: ";
                cin >> targetName;

                for (int i = 0; i < SQUAD_SIZE; i++) {
                    if (playerNames[i] == targetName) {
                        int newKills, newSurvival;
                        cout << "Enter Kills from this match: ";
                        cin >> newKills;
                        cout << "Enter Survival Time (in minutes): ";
                        cin >> newSurvival;

                        totalKills[i] += newKills;
                        if (newSurvival > maxSurvivalTime[i]) {
                            maxSurvivalTime[i] = newSurvival;
                        }
                        found = true;
                        cout << "Stats updated successfully for " << playerNames[i] << "!\n";
                        break;
                    }
                }
                if (!found) {
                    cout << "Player not found in this squad.\n";
                }
            }
        } 
        else if (choice == 3) {
            cout << "\n--- Current Squad Leaderboard ---\n";
            for (int i = 0; i < SQUAD_SIZE; i++) {
                if (playerNames[i].empty()) {
                    cout << "Slot " << (i + 1) << ": [Empty]\n";
                } else {
                    cout << "IGN: " << playerNames[i] 
                         << " | Total Kills: " << totalKills[i] 
                         << " | Best Survival Time: " << maxSurvivalTime[i] << " mins\n";
                }
            }
        } 
        else if (choice == 4) {
            int maxKills = -1;
            int mvpIndex = -1;

            for (int i = 0; i < SQUAD_SIZE; i++) {
                if (!playerNames[i].empty() && totalKills[i] > maxKills) {
                    maxKills = totalKills[i];
                    mvpIndex = i;
                }
            }

            if (mvpIndex != -1 && maxKills > 0) {
                cout << "\n SQUAD MVP: " << playerNames[mvpIndex] << " with " << maxKills << " total kills! Winner Winner Chicken Dinner! \n";
            } else {
                cout << "\nNo clear MVP yet. Complete matches and secure kills first!\n";
            }
        } 
        else if (choice == 5) {
            cout << "Exiting dashboard. Good luck on the battlegrounds!\n";
            break;
        } 
        else {
            cout << "Invalid selection! Please enter a number between 1 and 5.\n";
        }
    }

    return 0;
}