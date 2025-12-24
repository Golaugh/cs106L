class Shape
{
    public:
    virtual double area() const = 0;
};

class Circle : public Shape
{
    private:
    double _radius;

    public:
    Circle(double radius)
        : _radius{radius} {};
    
    double area() const {return 3.14 * _radius * _radius;}
};

class Rectange : public Shape
{
    private:
    double _width, _height;

    public:
    Rectange(double width, double height)
        : _width{width}, _height{height} {};

    double area() const {return _width * _height;}
};