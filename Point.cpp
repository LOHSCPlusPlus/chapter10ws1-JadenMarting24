#include "Point.h"
#include <math.h>
#include <iostream>
using namespace std;
// Notice how when we use field names in the functions that
// belong to Point, we can just use the name without a dot operator.
Point::Point(double xVal, double yVal) {

    x = xVal;
    y = yVal;
}
Point::Point() {
  x = 0.0;
  y = 0.0;
}
void Point::print(){
  cout << "x:" << x;
  cout << "y:" << y;
  cout << endl;
}
double Point::calcDistance(double xVal, double yVal){
  double xVal = pow(y - other.x, 2);
  double yVal = pow(x - other.y, 2);
  double dist = sqrt(xVal + yVal);  
  return dist; 
}
/* 
double Point::getX() { 
  return x;
}
double Point::getY() {
  return y;
}
void Point::setX(double xVal) {
  x = xVal;
}
void Point::setY(double yVal) {
  y = yVal;
}
*/