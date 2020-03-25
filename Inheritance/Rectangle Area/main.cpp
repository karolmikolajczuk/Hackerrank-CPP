class Rectangle{
    
    protected:
    
        int width;
        int height;  
    
    public:
        
        void display(){
            cout << width << " " << height << endl;
        }
};

class RectangleArea : public Rectangle{
    
    int width_ra;
    int height_ra;
    
    public:
    
        void read_input(){
            cin >> width_ra;
            cin >> height_ra;
            
            width = width_ra;
            height = height_ra;
        }
    
        void display(){
            cout << width_ra * height_ra << endl;
        }
};
/*
 * Create classes Rectangle and RectangleArea
 */