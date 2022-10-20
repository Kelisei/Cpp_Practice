t main()
{
    double side = 2.42;
    double height = 10.23;
    double base  = 1.34;

    std::cout << area(side) << "\n";
    std::cout << area(height, base) << "\n";
    
}
double area (double side){
    return side*side;
}
double area(double height, double base){
    double aux= height*base;
    return height*base;
}