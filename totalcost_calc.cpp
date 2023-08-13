#include<iostream>
using namespace std;
int main(){
    int itemprice, itemquantity, totalcost;
    cout<<"enter the itemprice\n";
    cin>>itemprice;
    cout<<"enter the itemquantity\n";
    cin>>itemquantity;
   if (itemquantity < 0) {
        std::cout << "Quantity must be nonnegative.";
    } else {
         totalcost = itemprice * itemquantity;
        cout << "Total cost: " << totalcost;

       return 0;
}

}
