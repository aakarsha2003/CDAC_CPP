#include<iostream>
using namespace std;
class SmartAppliance{
    private:
    int applianceId;
    string brand;
    float price;
    string connectivityType;
    int warrantyYears;

    public:
    void getInfo(){
        cout<<"enter application id:";
        cin>>applianceId;
        cout<<"enter brand:";
        cin>>brand;
        cout<<"enter price:";
        cin>>price;
        cout<<"enter connectivity Type(Wifi/Bluetooth/etc):";
        cin>>connectivityType;
        cout<<"enter warranty:";
        cin>>warrantyYears;
    }

    void displayInfo(){
        cout<<"\nAppliance Id:"<<applianceId;
        cout<<"\nbrand:"<<brand;
        cout<<"\nprice:"<<price;
        cout<<"\nconnectivity:"<<connectivityType;
        cout<<"\nwarranty:"<<warrantyYears;
    }
    int getWarranty(){
        return warrantyYears;
    }
};

int main(){
    SmartAppliance app[3];
    cout<<"-----enter details for 3 smart appliance---\n";
    for(int i=0;i<3;i++){
        cout<<"\n<<----Appliance-----"<<i+1<<"--------";
        app[i].getInfo();

    }
    cout<<"\n\n----Appliances with warranty >2 years---\n";
    for(int i=0;i<3;i++){
        if(app[i].getWarranty()>2){
            app[i].displayInfo();

        }
    }
    return 0;
}

