/*
      Exercise 2: Car Class With Attributes and Simple Behavior

      Practice Problem: Create a Car class with public attributes std::string make, std::string model, and int year. Implement a public method start_engine() that simply prints the message: “[Year] [Make] [Model] engine started!”.

      Expected Output:
      2020 Toyota Corolla engine started!
*/

#include<iostream>

class Car{
  public:
    std::string make;
    std::string model;
    int year;
  
    Car(std::string mk, std::string md,int y):make(mk),model(md),year(y){}

    void startEngin()
    {
      std::cout << "myCar is a " << year << " " << make << " " << model << " engine start" ; 
    }

};
int main(void)
{
  Car myCar("Toyota","Corolla",2020);
  myCar.startEngin();
  return 0;
}
