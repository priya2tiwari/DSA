#include<iostream>
using namespace std;
// class Animal{
//      private:
//     int weight;


//     public:
//     //state
//     int age;
//     string name;


//     //default constructor
//     Animal(){
//         this->age=0;
//         this->name=" ";
//         this->weight=0;
//         cout<<"default constructor called "<<endl;


//     }

//     //parameterised constructor
//     Animal(int age){
//         this->age=age;
//         cout<<"parameterised const called"<<endl;
//     }

   


//     //functions 
//     void eat(){
//         cout<<"Eating"<<endl;

//     }
//     void sleep(){
//         cout<<"Sleeping"<<endl;

//     }
//     int getWeight(){
//         return weight;
//     }
//    void setWeight(int w){
//        weight = w;

//    }
//    ~ Animal(){
//        cout<<"i am inside destructor"<<endl;
//    }



// };
// int main(){
//     //object creation
//     //static

//     Animal Ramesh;
//     Ramesh.age=12;
//     cout<<"age: "<<Ramesh.age<<endl;
//     Ramesh.eat();
//     Ramesh.sleep();

//     //to access private 
//     Ramesh.setWeight(101);
//     cout<<"the weight is: "<<Ramesh.getWeight()<<endl;





//     //dynamic memory allocation
//     Animal* suresh=new Animal;
//     suresh->age=17;
//     suresh->name="kutta";
//     suresh->eat();


//     Animal();
//     Animal(3);
//     Animal a;
//     a.age=5;


//     Animal* b= new Animal();
//     b->age=12;
//     // manually delete using delte keywoerd
//     delete b;
  
// }




//encapsulation
// class Animal{
  
//    private://to achieve perfect encapsulation
    
//     int age;
//     int weight;

//     public:
    
//     void eat(){
//         cout<<"Eating"<<endl;

//     }
//     int getage(){
//         return this->age;
//     }
//     void setage(int age){
//         this->age=age;
//     }
// };
// int main(){

// }






//inheritance
// class Animal{
  
//    public:
//    int age = 12;
      
// };

// class Dog: public Animal{

// };

// class Dog: protected Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }

// };

// class Dog: private Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }

// };
// int main(){
//     Dog d1;
//     //cout<<d1.age;
//    d1.print();
//     return 0;
 
// }




//multilevel inheritance
// class Fruit{
//     public:
//     string name;

// };

// class Mango:public Fruit{
//     public:
//     int weight;
// };

// class Alphanso:public Mango{
//     public:
//     int sugarlevel;
// };

// int main(){
//     Alphanso a;
//     cout<< a.name;
//     cout<<a.weight;
//     cout<<a.sugarlevel;
// }




//multiple inheritance
// class A{
//     public:
//     int physics;
// };
// class B{
//     public:
//     int chemistry;
// };
// class C: public A,public B{
//     public:
//     int maths;
// };
// int main(){
//     C obj;
//     cout<<obj.physics<<endl;
//     cout<<obj.chemistry<<endl;
//     cout<<obj.maths<<endl;
// }




//polymorphism
// class Maths{
//     public:
//     int sum(int a,int b){
//         return a+b;
//     }
//     int sum(int a,int b, int c){
//         return a+b+c;
//     }
//     int sum(int a,double b){
//         return a+b;
//     }

// };
// int main(){
//   Maths obj;
//   cout<<obj.sum(2,3.1);
// }




//runtime polymorphism
// class Animal{
//     public:
//     virtual void speak(){
//         cout<<"speaking"<<endl;
//     }
// };
// class Dog:public Animal{
//     public:
//     //override
//      void speak(){
//         cout<<"Barking"<<endl;
//     }
// };
// int main(){
//     Animal a;
//     a.speak();
//     Dog d1;
//     d1.speak();
//     //upcasting
//     Animal* b=new Dog();
//     b -> speak();
//     //downcasting  
//     Dog* c=(Dog*) new Animal();
//     c ->speak();

// }



//2d array
int main(){
    int row=5;
    int col=4;
    int **arr= new int*[5];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
    //printing
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
