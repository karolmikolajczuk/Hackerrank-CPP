class D : public A, public B, public C
{

	int val;
        
	public:
		//Initially val is 1
		 D()
		 {
		 	val = 1;
		 }


		 //Implement this function
		 void update_val(int new_val)
		 {
             do{
                if(new_val % 2 == 0)
                {
                    new_val/=2;
                    A::func(val);
                }
                
                if(new_val % 3 == 0)
                {
                    new_val/=3;
                    B::func(val);
                }
                
                if(new_val % 5 == 0)
                {
                    new_val/=5;
                    C::func(val);
                }
             }while(new_val!=1);        
            
         }
		 //For Checking Purpose
		 void check(int); //Do not delete this line.
};