

#include <iostream>
#include <vector>

using namespace std;

class Item{
    
    private:
    string Name;
    float Price;
    float Discount;
    float Quantity;
    float Tax;
    
    public:
    
    Item(string name, float price, float discount, int quantity, int tax){
        
        Name = name ;
        Price = price;
        Discount = discount;
        Quantity = quantity;
        Tax = tax;
        
    }
    
    void printItems(){
        
        cout<< Name<< " " << Price << " " << Quantity << " " << Discount << " ";
    }
    
    
    void TotalCostI(){
        
        int sum = (Price * Quantity)*(1-Discount); // 1-0.1
        int t = sum*Tax;
        int netprice = sum- t;
        cout <<"Total price -" << sum << endl;
        cout<<"Tax included" << netprice << endl;
    }
    
};



int main()
{
    //cout<<"Hello World";
    
    

    return 0;
}
