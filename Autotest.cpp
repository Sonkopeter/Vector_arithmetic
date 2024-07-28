#include "Autotest.h"
#include "CVector.h"

int Autotest1() {
    double a[] = { 1,2 };
    double b[] = { 4,5 };
    CVector resV(2);
    CVector x(2, a);
    CVector y(2, b);
    //cout << x;
    resV = x + y;
    const double* F = resV.getarr();
    if ((abs(F[0] - 5) <= DBL_EPSILON) && (abs(F[1] - 7) <= DBL_EPSILON)) {
        cout << "Autotest1 is passed" << endl;
        return 0;
    }
    else {
        cout << "Autotest1 is failed" << endl;
        return 1;
    }
}

int Autotest2() {
    double a[] = { 6,7 };
    double b[] = { 5,4 };
    CVector resV(2);
    CVector x(2, a);
    CVector y(2, b);
    resV = x - y;
    const double* F = resV.getarr();
    if ((abs(F[0] - 1) <= DBL_EPSILON) && (abs(F[1] - 3) <= DBL_EPSILON)) {
        cout << "Autotest2 is passed" << endl;
        return 0;
    }
    else {
        cout << "Autotest2 is failed" << endl;
        return 1;
    }
}

int Autotest3() {
    double a[] = { 2,2 };
    double b[] = { 4,8 };
    CVector x(2, a); 
    CVector y(2, b);
    double F = x * y;
    if (abs(F - 24) <= DBL_EPSILON) {
        cout << "Autotest3 is passed" << endl;
        return 0;
    }
    else {
        cout << "Autotest3 is failed" << endl;
        return 1;
    }
}

int Autotest(void) {
    if (!Autotest1() && !Autotest2() && !Autotest3()) {
        return 0;
    }
    return 1;
}