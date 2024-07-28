#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class CVector {
private:
    int size_;
    double* arr_;
public:
    CVector() {
       size_ = 1;
       arr_ = new double [size_];
       arr_[0] = 0;
    }
    CVector(const int size)
    {
       size_ = size;
       arr_ = new double[size];
    }
    CVector(const CVector& other) 
    {
        size_ = other.size_;
        arr_ = new double[size_]; 
        for (int i = 0; i < size_; i++) {
            arr_[i] = other.arr_[i];
        }
    }
    CVector(const int size, const double* arr)
    {
        this->size_ = size;
        this->arr_ = new double[size];
        for (int i = 0; i < size_; i++) {
            this->arr_[i] = arr[i];
        }
    }
    const double* getarr() { return arr_; }

    CVector& operator=(const CVector& other)
    {
        if (this->size_ != other.size_) {
            throw std::runtime_error("Error! Sizes of vectors are not equal\n");
        }
        for (int i = 0; i < size_; i++) {
            this->arr_[i] = other.arr_[i];
        }
        return *this;
    }
    CVector operator+(const CVector& second);
    CVector operator-(const CVector& second);
    double operator*(const CVector& second);
    friend ostream& operator<<(ostream& cout, CVector& resV);
    ~CVector(); 
    
    //CVector(CVector&& tmp)
    //{
    //    size_ = tmp.size_;
    //    arr_ = tmp.arr_;
    //    tmp.arr_ = nullptr;
    //}
    //CVector& operator=(CVector&& tmp);// operator prisv i peremesh
   
};