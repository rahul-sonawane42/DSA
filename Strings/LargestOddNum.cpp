#include <bits/stdc++.h>

using namespace std;

string largeOddNum(string num){
    int end = -1;

    for (int i = num.size()-1; i>=0; i--){
        if ((num[i] - '0') % 2 == 1){
            end = i;
            break;
        }
    }

    int i = 0;
    while (i <= end && num[i] == '0') i++;
    return num.substr(i, end - i+1);
}

int main() {
    string num = "0214638";
    string result = largeOddNum(num);
    cout << "Largest odd number: " << result << endl;
    return 0;
}