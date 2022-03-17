#include "Line.h"
#include <math.h>
#include <iostream>
using namespace std;


Line::Line(Point s, Point e) {
  start = s;
  end = e;

}
double Line::lineLength(){
  return start.calcDistance(end);
}
void Line::print() {
  cout << " Start";
  start.print();
  cout << " End";
  end.print();
  cout << endl;

}