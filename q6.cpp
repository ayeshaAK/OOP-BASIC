struct Address
{
    private:

    int houseNumber ;
    int street ;
    int apartmentNumber ;
    char *city ;
    char *state ;
    int postalCode ;

    public:

    Address ( int HouseNumber , int Street , int ApartmentNumber = 0 , char *City = "abc", char *State = "state1", int PostalCode = 1 )
    {
        houseNumber = HouseNumber ;
        street = Street ;
        apartmentNumber = ApartmentNumber ;
        city = new char [20] ;
        city = City ;
        state = new char [20] ;
        state = State ;
        postalCode = PostalCode ;
    }
    void setPostalCode ( int PostalCode )
    {
        postalCode = PostalCode ;
    }
    bool compareTo ( Address & a1 )
    {
        if (this->postalCode < a1.postalCode )
        {
            return true ;
        }
        return false ;
    }

} ;