
struct FlightInfo
{
    private:

    int flightNumber ;
    char *destination ;
    float distance ;
    float fuel ;

    public:

    void calFuel ()
    {
        if ( distance <= 1000 )
        {
            fuel = 500 ;
        }
        if ( distance > 1000 && distance <=2000 )
        {
            fuel = 1100 ;
        }
        if ( distance > 2000 )
        {
            fuel = 2200 ;
        }
    }
    FlightInfo ( int setFlightNumber = 0 , char *setDestination = "abc" , float setDistance = 0 )
    {
        flightNumber = setFlightNumber ;
        destination = new char [20] ;
        destination = setDestination ;
        distance = setDistance ;
        calFuel () ;
    }
    void feedInfo ()
    {
        int setFlightNumber ;
        cout << "Enter Flight Number : " ; cin >> setFlightNumber ; 
        flightNumber = setFlightNumber ;
        char setDestination [20] ; 
        cout << "Enter Destination : " ; cin >> setDestination ;
        destination = new char [20] ;
        destination = setDestination ;
        float setDistance ;
        cout << "Enter Distance : " ; cin >> setDistance ;
        distance =  setDistance ;
        calFuel () ;
    }
    void showInfo ()
    {
        int i = 0 ;
        cout << "Flight Number : " << flightNumber << endl ;
        cout << "Destination : "; while ( destination [i] != '\0') { cout << destination [i] ; i++ ; } ;cout << endl ;
        cout << "Distance : " << distance << endl ;
        cout << "Fuel : " << fuel << endl ;
    }
    float getFuel ()
    {
        return fuel ;
    }

};
/*
int main()
{
    FlightInfo f1 ;
    f1.feedInfo() ;
    f1.showInfo() ;
}
*/