class Point
{
protected:
    int x;
    int y;
};

class DerivedPoint : public Point
{
public:
    static void Main()
    {
        DerivedPoint dpoint;

        // Direct access to protected members.
        dpoint.x = 10;
        dpoint.y = 15;

        cout << "x = " << dpoint.x << ", y = " << dpoint.y << endl;
    }
};
