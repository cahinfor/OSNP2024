//
// Created by cahInfor on 24/05/25.
//

#include <iostream>
#include <string>
#include <set>

using namespace std;

int count_length(const string &start, const string &s) {
    int pointer = 0;
    int length = 0;
    for (int i=0; i<s.length(); i++) {
        if (start[pointer] == s[i]) {
            pointer = (pointer + 1) % 3;
            length++;
        }
    }

    if (length < 3) return -1;

    return length;
}

int solve(const string& s) {
    const set<string> valid_start = {"OSN", "ONS", "SON", "SNO", "NOS", "NSO"};

    int result = -1;
    for (const auto& start: valid_start) {
        const int valid_length = count_length(start, s);
        if (valid_length > result) {
            result = valid_length;
        }
    }

    return result;
}
