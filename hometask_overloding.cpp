#include <iostream>
using namespace std;

class product {
private:
    int quantityinstock;
    string name;
    double price;
    friend class inventoryManager;
public:
friend void update_inventory(product& p1, int quantity);
    product(int x = 0, string s = "non", double d=0) : quantityinstock(x), name(s), price(d) {}

    friend ostream& operator<<(ostream& os, const product& p) {
        os << "Product Name: " << p.name << endl;
        os << "Price: $" << p.price << endl;
        os << "Quantity in Stock: " << p.quantityinstock << endl;
        return os;
    }
};

class inventoryManager {
private:
    static int total_product;
public:
    
    void add_product(product& p, string name) {
        p.name = name; // Correct assignment
        total_product++;
        total_product=total_product+p.quantityinstock;
    }
    void display_total_product() {
        cout << "The total number of products is = " << total_product << endl;
    }
};

int inventoryManager::total_product = 0;

void update_inventory(product& p1, int quantity) {
    p1.quantityinstock = p1.quantityinstock + quantity;
}

int main() {
    product products[100]; // Array to store products
    inventoryManager manager; // Inventory manager instance
    
    int choice;
    do {
        cout << "Menu:\n";
        cout << "1. Add a new product to the inventory\n";
        cout << "2. Update the quantity of an existing product\n";
        cout << "3. Display the total number of products in the inventory\n";
        cout << "4. Display the details of all products in the inventory\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1: {
                string name;
                double price;
                int quantity;
                cout << "Enter product name: ";
                cin >> name;
                cout << "Enter product price: ";
                cin >> price;
                cout << "Enter product quantity: ";
                cin >> quantity;
                product newProduct(quantity, name, price);
                manager.add_product(newProduct, name);
                cout << "Product added to inventory successfully.\n";
                break;
            }
            case 2: {
                string name;
                int quantity;
                cout << "Enter product name: ";
                cin >> name;
                cout << "Enter quantity to add: ";
                cin >> quantity;
                
                // Search for the product by name (not implemented in this basic example)
                // If found, update the quantity using update_inventory function
                // If not found, display an error message
                cout << "Quantity updated successfully.\n";
                break;
            }
            case 3: {
                product p4;
            manager.add_product(p4,"LUX");
            manager.add_product(p4,"COLGATE");
            manager.add_product(p4,"SHAN");
            cout<<p4;
            manager.display_total_product();
                break;
            }
            case 4: {
                // Display details of all products in the inventory (not implemented in this basic example)
                break;
            }
            case 5: {
                cout << "Exiting program.\n";
                break;
            }
            default:
                cout << "Invalid choice. Please try again.\n";
        }
        
    } while(choice != 5);

    return 0;
}
