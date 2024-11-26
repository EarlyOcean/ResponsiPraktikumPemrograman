#include <iostream>
using namespace std;

int main(){
    // inisialisasi
    string s, new_s = "";
    // input string
    cin >> s;

    // balik string
    for(int i = s.length() - 1; i >= 0; i--){
        // tolower agar tidak case-sensitive
        s[i] = tolower(s[i]);
        new_s += tolower(s[i]);
    }

    // bandingkan string
    if(s == new_s) cout << "Palindrom" << endl;
    else cout << "Bukan palindrom" << endl;

    return 0;
}