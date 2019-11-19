// 2019-11-19
// Dr._T
// Array of class objects

#include <iostream>
#include <array>
#include <iomanip>
#include "InventoryItem.h"




int main() {
  InventoryItem item1; 
  InventoryItem item2("Hammer");
item1.setDescription("saw");
item1.setCost(24.99);
item1.setUnits(8);

InventoryItem item3("Flathead Screwdriver", 5.33, 63);
// Array of objects 
// store and display the items in the list

const int NUM_ITEMS = 3;
InventoryItem InventoryArray[NUM_ITEMS];
InventoryArray[0] = item1;
InventoryArray[1] = item2;
InventoryArray[2] = item3;


  return 0;
}