#include "Point.hpp"
using namespace std;
namespace ariel {

Point::Point(double x, double y) : x(x), y(y) {}
Point::Point() {
  this->x = 0;
  this->y = 0;
}
double Point::getX() const { return x; }

double Point::getY() const { return y; }

double Point::distance(const Point &other) const {
  double dx = x - other.getX();
  double dy = y - other.getY();
  return sqrt(dx * dx + dy * dy);
}
void Point::moveTowards(Point other) {}
string Point::print() const {
  return "(" + to_string(this->x) + "," + to_string(this->y) + ")";
}

} // namespace ariel
