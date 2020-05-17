
struct Employee2
{
    private:

    char *name ;
    float hourlyWage ;
    float workedHours ;
    float extraHours ;

    public:

    Employee2 ( char *setName = "abc" , float setHourlyWage = 0.0 , float setWorkedHours = 0 , float setExtraHours = 0 )
    {
        name = new char [20] ;
        name = setName ;
        hourlyWage = setHourlyWage ;
        workedHours = setWorkedHours ;
        extraHours = setExtraHours ;
    }
    void setName ( char*Name )
    {
        name = new char [20] ;
        name = Name ;
    }
    char* getName ()
    {
        return name ;
    }
    void setHourlyWage ( float HourlyWage )
    {
        hourlyWage = HourlyWage ;
    }
    float getHourlyWage ()
    {
        return hourlyWage ;
    }
    void setWorkedHours ( float WorkedHours )
    {
        workedHours = WorkedHours ;
    }
    float getWorkedHours ()
    {
        return workedHours ;
    }
    void setExtraHours ( float ExtraHours )
    {
        extraHours = ExtraHours ;
    }
    float getExtraHours ()
    {
        return extraHours ;
    }
    float wageCalculator ()
    {
        return hourlyWage * ( workedHours - extraHours ) + ( hourlyWage * 1.5 * extraHours ) ;
    }
    void printPayCheck ()
    {
        ;
    }

} ;