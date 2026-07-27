/*                      Circle Class With Constant Methods
                        Practice Problem: Implement a Circle class with a private member double radius. Add a constructor to initialize the radius. Include a public constant member function get_area() that calculates and returns the area of the circle (pir, use pi = 3.14159) 

Expected Output:

Circle with radius 5.0 has an area of: 78.5397
*/

#include<iostream>

class Circle{
  private:
    double radius;
    const int pi = 3.14159;
  public:
    double get_area() const
    {
      return pi * radius * radius;
    }
    double get_radius()
    {
      return radius;
    }
};

int main(void)
{
  Circle myCircule(5.0);

  std::cout << "Circle With radius " << myCircule.get_radius() << " has an area of : " << myCircule.get_area();

  return 0;
}



