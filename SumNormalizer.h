//
// Created by shraga89@st.technion.ac.il on 5/11/17.
//

#ifndef LAB7_SUMNORMALIZER_H
#define LAB7_SUMNORMALIZER_H

#include "Normalizer.h"

class SumNormalizer: public  Normalizer {
private:
    Point sum;
public:
    SumNormalizer(size_t dimension):
    sum(dimension){}

    void normalize(const Point &oldPoint, Point &newPoint);

    bool init(const std::vector<Point> &points);
};

#endif //LAB7_SUMNORMALIZER_H
