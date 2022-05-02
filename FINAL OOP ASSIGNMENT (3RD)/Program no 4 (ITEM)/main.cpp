#include "item.h"
#include "bill.h"

int Bill::uid = 0;

int main(){

    // Declaring Variables and arrays
	Item items1[2];
	Item items2[2];
    Bill singleBill;
    Bill arrayBills[2];


    // Setting Price Manually 
    items1[0].setPrice(10);
    items1[1].setPrice(20);

    items2[0].setPrice(100);
    items2[1].setPrice(200);

    // Appending Data Manually

    // All bills
    arrayBills[0].setItems(items1);
    arrayBills[0].setItemCount(2);
    arrayBills[1].setItems(items2);
    arrayBills[1].setItemCount(2);

    // Calling the Compute All Bills Function
    singleBill.computeAllBills(arrayBills,2); // 2 because we have 2 items array

    // Displaying Result
    for(int i = 0 ; i < 2 ; i++){
        cout << "\nBill " << (i+1) << " : " ;
        cout << arrayBills[i].getBillAmount() << endl;
    }
 
    // Single Bill
    singleBill.setItems(items1);
    singleBill.setItemCount(2);
    singleBill.computeOneBill(singleBill);
 
    // Displaying Result
    cout << "\nSingle Bill : " << singleBill.getBillAmount() << endl;

}