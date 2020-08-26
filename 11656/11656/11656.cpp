//11656

#include <iostream>
#include <stdio.h>
//#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

char str[1001];
char newStr[1001][1001];

vector<string> v;

bool compare(string a, string b) {
    if (a.at(0) > b.at(0)) {
        return 0;
    }
    else {
        return 1;
    }
}

int main(void) {

    scanf("%s", str);
    char* pStr;

    for (int i = 0; i < strlen(str); i++) {
        pStr = str + i;
        v.push_back(pStr);
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << "\n";
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << "\n";
    }

    return 0;
}