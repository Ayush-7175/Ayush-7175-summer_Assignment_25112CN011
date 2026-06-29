#include <iostream>

using namespace std;

int main() {
    int score = 0;
    char answer;

    cout << "=== ANIME QUIZ APPLICATION ===" << endl;

    cout << "\n1. How many episodes does it take for Goku to charge a single Spirit Bomb?" << endl;
    cout << "A. Exactly 1 episode\nB. Legend says he is still charging it\nC. It happens instantly" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'B' || answer == 'b') {
        score++;
    }

    cout << "\n2. What is the ultimate source of Saitama's absolute power?" << endl;
    cout << "A. A strict diet of instant ramen\nB. 100 push-ups, 100 sit-ups, 100 squats, and a 10km run daily\nC. He was bitten by a radioactive spider" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'B' || answer == 'b') {
        score++;
    }

    cout << "\n3. Who is the most feared, unstoppable entity responsible for sending protagonists to another world?" << endl;
    cout << "A. The Demon King\nB. An ancient dark dragon\nC. Truck-kun (a runaway delivery truck)" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'C' || answer == 'c') {
        score++;
    }

    cout << "\n=== FINAL RESULT ===" << endl;
    cout << "Total Score: " << score << " out of 3" << endl;

    if (score == 3) {
        cout << "Status: Certified Otaku!" << endl;
    } else {
        cout << "Status: Casual Fan detected." << endl;
    }

    return 0;
}