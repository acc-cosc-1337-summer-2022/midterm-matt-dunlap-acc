bool test_config();

#ifndef QUESTION3_H
#define QUESTION3_H

// was unable to name the class "Rectangle" because of compile errors when executing the test (although it would work for the main program)
class Rectangle1{
    public:
        Rectangle1(int l, int w) : length(l), width(w){}
        double get_area();
        int get_length();
        int get_width();
    private:
        int length;
        int width;
};
#endif