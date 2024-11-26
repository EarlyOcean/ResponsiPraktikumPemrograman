#include <iostream>
using namespace std;

double cases[3] = {7, 3.5, 100};
double expected_output[3] = {
    153.86,
    38.465,
    31400
};

int main(){
    // inisialisasi
    double radius, luas;

    for(int ind = 0; ind < 3; ind++){
        // input radius
        radius = cases[ind];

        // perhitungan luas
        luas = 3.14 * radius * radius;

        // output
        cout << "Case " << ind + 1 << endl;
        cout << "Input: " << cases[ind] << endl;
        cout << "Expected Output: " << expected_output[ind] << endl;
        cout << "Output: " << luas << endl << endl;
    }

    return 0;
}