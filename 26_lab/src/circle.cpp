class Circle: public Shape
{
    int radius;
    
public:
    Circle(int rad)radius:(rad)
    {
    }

    void draw() const override
    {
        for(int i=0;i<radius*2;i++)
        {
            // x = sqrt(r*r-y*y)
            int len_x = std::sqrt(radius*radius-(radius-i)*(radius-i));
            Shape::DrawConsoleLine(radius-len_x/2, len_x);
        }
    }    
};
