#include<iostream>
using namespace std;
class Vehicle{
    protected:
    int vehicleId;
    string brand;
    float price;

    public:
    void inputVehicle(){
        cout<<"enter vehicle id:";
        cin>>vehicleId;
        cout<<"enter brand";
        cin>>brand;
        cout<<"enter price:";
        cin>>price;

    }
    void displayVehicle(){
        cout<<"Vehicle ID:"<<vehicleId;
        cout<<"brand:"<<brand;
        cout<<"price:"<<price;
    }

};
class ElectricVehicle:public Vehicle{
    private:
    float batteryCapacity;
    float chargingTime;
    public:
    void inputEv(){
        inputVehicle();
        cout<<"enter batter capacity:";
        cin>>batteryCapacity;
        cout<<"enter charging time:";
        cin>>chargingTime;
    }

    void displayEv(){
        displayVehicle();
        cout<<"battery capacity:"<<batteryCapacity;
        cout<<"charging time:"<<chargingTime;
        cout<<"-------------------------";
    }

    float getBatteryCapacity(){
        return batteryCapacity;

    }
};

int main(){
    ElectricVehicle ev[3];
    cout<<"\n===enter details of 3 electric vehicle=\n";
    for(int i=0;i<3;i++){
        cout<<"\nvehicle-"<<i+1;
        ev[i].inputEv();

    }
    cout<<"\n===display all electric vehicles===\n";
    for(int i=0;i<3;i++){
        ev[i].displayEv();

    }
    cout<<"\n===vehicles with battery capacity=====\n";
    for(int i=0;i<3;i++){
        if(ev[i].getBatteryCapacity()>50){
            ev[i].displayEv();
        }

    }
   return 0;
}