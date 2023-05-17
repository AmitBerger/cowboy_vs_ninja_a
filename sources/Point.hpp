

#include <cmath>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>


#pragma once
using namespace std;

namespace ariel {

class Point {

private:
  double x;
  double y;

public:
  Point();
  Point(double x, double y);
  double getX() const;
  double getY() const;
  double distance(const Point &other) const;
  void moveTowards(Point other);
  string print() const;
};

} // namespace ariel
