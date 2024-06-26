#include <iostream>

using namespace std;

class ShopItemOrder
{
private:
	string itemName;
	double unitPrice;
	int numberOfItems;
public:
	ShopItemOrder(string name, double price, int orders):
		itemName(name), unitPrice(price), numberOfItems(orders){}
    void setItemName(string name) {
        itemName = name;
    }

    string getItemName() {
        return itemName;
    }

    void setUnitPrice(double price) {
        unitPrice = price;
    }

    double getUnitPrice() {
        return unitPrice;
    }

    void setNumberOfItems(int quantity) {
        numberOfItems = quantity;
    }

    int getNumberOfItems() {
        return numberOfItems;
    }

    double getTotalPrice() {
        return unitPrice * numberOfItems;
    }
    void printOrder() {
        cout << "Item Name: " << itemName << endl;
        cout << "Unit Price: $" << unitPrice << endl;
        cout << "Quantity: " << numberOfItems << endl;
        cout << "Total Price: $" << getTotalPrice() << endl;
    }
};

int main() {
    ShopItemOrder order("Laptop", 999.99, 2);
    order.printOrder();

    return 0;
}
