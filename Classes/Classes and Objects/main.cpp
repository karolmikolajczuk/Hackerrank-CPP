// Write your Student class here
class Student{
    private:
        int scores_1,
            scores_2,
            scores_3,
            scores_4,
            scores_5;
    public:
    void input(){
        cin>>scores_1;
        cin>>scores_2;
        cin>>scores_3;
        cin>>scores_4;
        cin>>scores_5;
    }
    
    int calculateTotalScore(){
        int total=scores_1+scores_2+scores_3+scores_4+scores_5;
        
        return total;
    }
};