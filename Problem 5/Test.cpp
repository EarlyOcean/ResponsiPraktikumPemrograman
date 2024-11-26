#include <iostream>
using namespace std;

string cases[3] = {"palindrom", "alola", "InfoRoFNi"};
string expected_output[3] = {
    "Bukan palindrom",
    "Palindrom",
    "Palindrom"
};

int main(){
    // inisialisasi
    string s, new_s = "";

    for(int ind = 0; ind < 3; ind++){
        cout << "Case " << ind + 1 << endl;
        new_s = "";

        // input string
        s = cases[ind];
        cout << "Input: " << s << endl;

        // balik string
        for(int i = s.length() - 1; i >= 0; i--){
            // tolower agar tidak case-sensitive
            s[i] = tolower(s[i]);
            new_s += tolower(s[i]);
        }

        // bandingkan string
        string result;
        if(s == new_s) result = "String palindrom";
        else result = "String bukan palindrom";

        // hasil test case
        cout << "Expected Output: " << expected_output[ind] << endl;
        cout << "Output: " << result << endl << endl;
    }

    return 0;
}