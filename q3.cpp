struct Circle
{
    private:

    double radius ;
    double area ;
    double circumference ;

    public:

    Circle ( double para_radius )
    {
        double pie = 3.14 ;
        radius = para_radius ;
        area = pie * radius * radius ;
        circumference = 2.0 * pie * radius ;
    }
    
    double getArea ()
    {
        return area ;
    }
    double getCircumference ()
    {
        return circumference ;
    }
};