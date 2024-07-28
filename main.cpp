#include "CVector.h"
#include "Autotest.h"


int main() {
    if (Autotest()) {
        cout << "Some tests are failed\n" << endl;
        return 0;
    }
    else cout << "All tests are passed\n" << endl;
    int N = 4;
    double res = 0;
    double x[] = { 3, 1, 3, 5 }, y[] = { 3, 1, 1.25, 12 };
    CVector resV(N), V1(N, x), V2(N, y);
    resV = V1 + V2;
    cout << "Sum of vectors = " << resV << "\n" << endl;
    resV = V1 - V2;
    cout << "Vector difference = " << resV << "\n" << endl;
    res = V1 * V2;
    cout << "Scalar production = " << res << "\n" << endl;
    return 0;
}
