

class Student 
{
    private:
    int scores[5];
    public:
    void input() 
    {
        for(int i=0;i<5;i++) 
        {
            cin >> scores[i];
        }
    }
    int calculateTotalScore() 
    {
        int extra=0;
        for (int i=0;i<5;i++) 
        {
            extra+=scores[i];
        }
        return extra;
    }
};
