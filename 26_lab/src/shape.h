class Shape
{
    
public:
    
    virtual void draw() const = 0; 

    static void DrawConsoleLine(unsigned int x, unsigned int len)
    {
        
        for(int i=0;i<x;++i)
            std::cout <<' ';

        for(int i=0;i<len;++i)
            std::cout << '*';
            
        std::cout << std::endl;
    }
};
