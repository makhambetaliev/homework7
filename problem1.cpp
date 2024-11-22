#include <iostream>
using namespace std;
void years2days(int &days, int &years) {
    if (days>=365) {
        years=days/365;
        days=days%365;
    }
    else {
        years = 0;
        days = days;
    }
}
int main() {
    int days, years;
    cin>>days;
    years2days(days, years);
    cout<<"Years:"<<years<<" Days:"<<days<<endl;
}
