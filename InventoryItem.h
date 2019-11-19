// This class has overload constructors, but will become an array of objects
#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include<string>
using namespace std;


class InventoryItem
{

  private:
    string description; 
    double cost;
    int units; 
public:
  InventoryItem() // default constructors
  {
  description = ""; 
  cost = 0.0; 
  units = 0; 
  }

InventoryItem(string desc) // constructors#2 parameter 
{
  description = desc;
  cost = 0.0;
  units=0;
}

InventoryItem(string desc, double c, int u)
{
  description = desc; 
  cost = c; 
  units = u; 
}
// set functions 
void setDescription(string desc) {description = desc;}
void setCost(double c) { cost = c;}
void setUnits(int u) {units = u;}

string getDescription() const {return description;}
double getCosts() const { return cost;}
int getunits() const {return units;}



};
#endif