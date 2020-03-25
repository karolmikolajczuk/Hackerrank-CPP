// class Person

class Person 
{
    protected:
        string name;
        short age;
        
    public:               
           virtual void getdata() = 0;
           virtual void putdata() = 0;
};

// class Professor

class Professor : public Person
{
    public:
        Professor()
        {
            cur_id++;
            current_id = cur_id;
        }        
        
    private:
        int publications;
        static int cur_id;
        int current_id;
        
    public:
        void getdata()
        {
            cin >> name;
            cin >> age;
            cin >> publications;
        }
        void putdata()
        {
            cout << name << " " << age << " " 
                 << publications << " " << current_id << endl;
        }
};

// class Student

class Student : public Person
{
    public:
        Student()
        {
            cur_id++;
            current_id = cur_id;
        }
        
    private:
        int marks[6];
        static int cur_id;
        int current_id;
                        
    private:
        
        int sume()
        {
            int sum = 0;
            for (int i=0; i<6; i++)
                sum += marks[i];
            
            return sum;
        }
    
    public:
        void getdata()
        {
            cin >> name;
            cin >> age;
            for (int i=0; i<6; i++)
                cin >> marks[i];    
        }
        void putdata()
        {
            cout << name << " " << age << " " << 
                    this->sume() << " " << current_id << endl; 
        }
};    

int Professor::cur_id = 0;
int Student::cur_id = 0;
