//
// Created by User on 26.04.2019.
//

#ifndef LAB8_COMPLEX_H
#define LAB8_COMPLEX_H

class Complex {
private:
    double re;
    double im;
public:
    Complex() {
        this->re = 0;
        this->im = 0;
    }

    Complex(double re, double im) {
        this->re = re;
        this->im = im;
    }

    friend std::ostream &operator<<(std::ostream &outStream, Complex &c) {
        outStream << c.re << " " << c.im;
        return outStream;
    }

    bool operator==(Complex right)
    {
        return this->re == right.re && this->im == right.im;
    }
};
#endif //LAB8_COMPLEX_H
