#include <iostream>
using namespace std;
int main() {
    // Discount Management System
    float price,discount,finalPrice;
    cout<<"Enter Actual Price:"<<endl;
    cin>>price;
    cout<<"Enter Discount Amount In Percentage(%):"<<endl;
    cin>>discount;
    finalPrice = price - ((price*discount)/100);
    cout<<"After Discount Price: "<<finalPrice<<endl;
    return 0;
}
