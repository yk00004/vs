#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    friend void distans(point x1, point y1);
    void dislay()
    {
        cout << "the point is (" << x << " , " << y << ")" << endl;
    }
};
void distans(point x1, point y1)
{
    float di = sqrt(pow(x1.x - y1.x, 2) + pow(x1.y - y1.y, 2));
    cout << "distans bitween two point is " << di << endl;
}
int main()
{
    point p(1,0);
    p.dislay();

    point q(70, 0);
    q.dislay();
    distans(p, q);

    return 0;
}