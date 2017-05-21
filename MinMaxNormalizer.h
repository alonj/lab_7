//
// Created by shraga89@st.technion.ac.il on 5/11/17.
//

#ifndef LAB7_MINMAXNORMALIZER_H
#define LAB7_MINMAXNORMALIZER_H

#include "Normalizer.h"

class MinMaxNormalizer: public  Normalizer {
private:
    Point min;
    Point max;
public:
    MinMaxNormalizer(size_t
    dimension):

    min (dimension), max(dimension) {}

    void normalize(const Point &oldPoint, Point &newPoint);

    bool init(const std::vector<Point> &points);
};

#endif //LAB7_MINMAXNORMALIZER_H
