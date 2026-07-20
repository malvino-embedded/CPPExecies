/*

    Exercise 1: Rectangle Class With Methods and Properties

Practice Problem: Define a class Rectangle with private members int length and int width. Implement a constructor to set the dimensions. Implement two public methods: calculate_area() which returns the product of length and width, and calculate_perimeter() which returns 2 * (length + width).

    Expected Output:
    Dimensions: 10x5
    Area: 50
    Perimeter: 30
*/
#include<iostream>
class Rectangle{
  private:
    int length;
    int width;
  public:
    Rectangle(int l , int w):length(l),width(w){}

    double calculateArea() const{
      return  length *  width;
    }

    double calculatePerimeter()
    {
      return 2 * (length + width);
    }
};

int main(void)
{
  Rectangle rec(10,5);
  std::cout << "Dimensions: 10 * 5 " << std::endl;
  std::cout << "Area      : " << rec.calculateArea() << std::endl;
  std::cout << "Perimeter : " << rec.calculatePerimeter() << std::endl;
  return 0;
}
