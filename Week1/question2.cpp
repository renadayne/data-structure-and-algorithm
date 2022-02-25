#include <iostream>

using namespace std;

struct Point
{
    double x;
    double y;
};

struct Line
{
    double a;
    double b;
};

void line(Point A, Point B, Line *Y)
{
    Y->a = (B.y - A.y) / (B.x - A.x);

    Y->b = A.y - (B.y - A.y) / (B.x - A.x) * A.x;
}
int main()
{
    Point A, B, C, D;
    cin >> A.x >> A.y;
    cin >> B.x >> B.y;
    cin >> C.x >> C.y;
    cin >> D.x >> D.y;

    Line *Y1 = new (Line);
    Line *Y2 = new (Line);

    line(A, B, Y1);
    line(C, D, Y2);

    cout<<(Y2->b-Y1->b)/(Y1->a-Y2->a)<<" "<< Y1->a*(Y2->b-Y1->b)/(Y1->a-Y2->a)+Y1->b;
    return 0;
}
