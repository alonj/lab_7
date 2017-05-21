//
// Created by shraga89@st.technion.ac.il on 5/11/17.
//

#ifndef LAB7_NORMALIZER_H
#define LAB7_NORMALIZER_H

#include <vector>
#include "Point.h"

class Normalizer{
public:
    virtual bool init(const std::vector<Point>& points) = 0;
    virtual void normalize(const Point &oldPoint, Point &newPoint) = 0;
};

#endif //LAB7_NORMALIZER_H
