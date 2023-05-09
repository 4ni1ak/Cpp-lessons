
#include <iostream>

int main(){
    std::cout<<"Eyyyyy yoooo wutsup\n";
    std::cout<<"new line\n";

    std::cout<<"Eyyyyy yoooo wutsup\n"<<std::endl;
    std::cout<<"new line\n";

    int number1=0;
    std::cout<<"Please enter a digit : ";
    std::cin >>number1;
    std::cout<<"The value read is : "<<number1<<std::endl;
   
}


/*
#include <iostream>

using namespace std;//or use "using std;","using std::cout;/endl;/cin;"is almost the same 
int main(){
    int number1=0;
    cout<<"Please enter a digit : ";
    cin>>number1;
    cout<<"The number you entered is : ";

}
*/

/*
#include <iostream>
using namespace std;
int main(){
    int number1=0, &numAlias = number1;
    cout<<"Please enter a digit : ";
    cin>>number1;
    cout<<"The value read is: "<<number1<<endl;
    cout<<"The value of the Alias is : "<<numAlias<<endl;
    numAlias = 32;
    cout<<"The value of the Alias is : "<<numAlias<<endl;
    cout<<"The value of original is: "<<number1<<endl;

}
*/

/*
#include <iostream>
using namespace std;
int PerTriangle(int edge1=10,int edge2=10,int edge3=10){
    return edge1+edge2+edge3;
}
int main(){
PerTriangle();
PerTriangle(12);
PerTriangle(14,12);
PerTriangle(1,2,3);
cout<<"No parameter"<<PerTriangle()<<endl;
cout<<"One parameter"<<PerTriangle(12)<<endl;
cout<<"Two parameter"<<PerTriangle(12,23)<<endl;
cout<<"Three parameter"<<PerTriangle(12,23,32)<<endl;
}
*/

/*
#include <iostream>
using namespace std;
int PerTriangle(int edge1=10,int edge2=10,int edge3=10){
    return edge1+edge2+edge3;
}
int main(){
int i=5;
    PerTriangle();
    PerTriangle(12);
    PerTriangle(14,12);
    PerTriangle(1);
    for(int i;i<3;i++){
        cout<<"No parameter"<<PerTriangle()<<endl;
        cout<<"One parameter"<<PerTriangle(12)<<endl;
        cout<<"Two parameter"<<PerTriangle(12,23)<<endl;
        cout<<"Three parameter"<<PerTriangle(12,23,32)<<endl;
    }
cout<<i;

}
*/

/*
#include <iostream>
using namespace std;
int number1=15;
void func(){
    cout<<"whith in function"<<number1<<endl;
}

int main(){
    int number1=0;
    cout<<"whith in main"<<number1<<endl;

    func();
    cout<<"whith in global"<<::number1<<endl;
}
*/
/*

#include <iostream>
using namespace std;

void area(int edge1,int edge2){
    cout<<"The area is:"<<edge1*edge2<<endl;
}
void area(double edge1,double edge2){
    cout<<"The area is:"<<edge1*edge2<<endl;
}
int main(){
    int number1=0,number2=8;
    double number3=4.4,number4=4.8;
    area(number1,number2);
    area(number3 ,number4);
}
*/