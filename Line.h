#include "Point.h"
class Line{
    public:
        Line();
        Line(Point xVal, Point yVal);
        void print();
        double lineLength();
    private:
      Point start;
      Point end;
};