// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true
// Problem     For Loop
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-06, 01:05 a.m.
// ──────────────────────────────────────────────────

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string words[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    for (int i = a; i <= b; i++) {

        if (i >= 1 && i <= 9) {
            cout << words[i] << endl;
        }
        else if (i % 2 == 0) {
            cout << "even" << endl;
        }
        else {
            cout << "odd" << endl;
        }
    }

    return 0;
}
