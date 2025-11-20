#include<iostream>
int PrintRange(int x,int y){
    for(int i=x;i<=y;i++)
        std::cout<<i<<" ";
    
}
    int main() {
        int x,y;
        std::cout<<"enter two numbers to print the range between them:";
        std::cin>>x>>y;
        std::cout<<"The range is:"<<PrintRange(x,y);
        return 0;
    }
