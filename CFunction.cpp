#include "CVector.h"

CVector CVector::operator+(const CVector& second) {
    CVector retVector(size_);
    for (int k = 0; k < size_; ++k) {
        retVector.arr_[k] = arr_[k] + second.arr_[k];
    }
    return retVector;
}

CVector CVector::operator-(const CVector& second) {
    CVector retVector(size_);
    for (int k = 0; k < size_; ++k) {
        retVector.arr_[k] = arr_[k] - second.arr_[k];
    }
    return retVector;
}

double CVector::operator*(const CVector& second) {
    if (size_ != second.size_) {
        throw std::runtime_error("Error! Sizes of vectors are not equal\n");
    }
    double skal = 0;
    for (int k = 0; k < size_; ++k) {
        skal += arr_[k] * second.arr_[k];
    }
    return skal;
}

ostream& operator<<(ostream& cout, CVector& resV) {
    cout << "(";
    for (int k = 0; k < resV.size_; ++k)
        cout << (k == 0 ? "" : ",") << resV.arr_[k];
    cout << ")";
    return cout;
}
CVector::~CVector() {
    delete[] arr_;
}
//CVector& CVector::operator=(const CVector& other) {
//    if (size_ != other.size_) {
//        throw std::runtime_error("Error! Sizes of vectors are not equal\n");
//    }
//    for (int i = 0; i < size_; i++) {
//        arr_[i] = other.arr_[i];
//    }
//}

//CVector& CVector::operator=(CVector&& tmp) {
//    if (size_ != tmp.size_) {
//        throw std::runtime_error("Error! Sizes of vectors are not equal\n");
//    }
//    delete[] arr_;
//    arr_ = tmp.arr_;
//    tmp.arr_ = nullptr;
//}

//CVector::CVector(const size_t size) {
//    size_ = size;
//    arr_ = new double[size];
//}

//CVector::CVector(const CVector& other) {
//    size_ = other.size_;
//    arr_ = new double[size_]; //proverka
//    for (int i = 0; i < size_; i++) {
//        arr_[i] = other.arr_[i];
//    }
//}

//CVector::CVector(CVector&& tmp) {
//    size_ = tmp.size_;
//    arr_ = tmp.arr_;
//    tmp.arr_ = nullptr;
//}

