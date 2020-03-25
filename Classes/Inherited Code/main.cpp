/* Define the exception here */

class BadLengthException : public exception
{
    private:
        int string_length;
        
    public:
    BadLengthException(int length)
    {
        string_length = length;
    }
    int what()
    {
        return string_length;
    }
};



