#include<iostream>
using namespace std;
class Payment
{
public:
    virtual void pay()
{
cout<< "Payment made by cash";
}
};

class CreditPayment :public Payment
{
public:
void pay() override
{
cout<<"Payment made by credit card\n";
}
};

class UpiPayment : public Payment
{
public:
 void pay() override
{
cout<<"Payment made through UPI\n";
}
};

int main()
{
Payment *p;
CreditPayment c;
UpiPayment u;
p=&c;
p->pay();
p=&u;
p->pay();
cout<< endl;
return 0;
}

