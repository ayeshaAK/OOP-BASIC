struct Car
{
    private:

    float fuelLevel ;
    float efficiency ;
    
    public:

    Car ( float setEfficiency = 10.0 , float setFuel = 0.0 )
    {
        efficiency = setEfficiency ;
        fuelLevel = setFuel ;
    }
    void tank ( float fuel )
    {
        fuelLevel += fuel ;
    }
    float getFuelLevel ()
    {
        return fuelLevel ;
    }
    void drive ( float distance )
    {
        fuelLevel -= distance / efficiency ;
    }
} ;