// //Ambiguity in Multiple Inheritance
#include <iostream>
using namespace std;
// class A {
//     public:
//     int a;
// };
// class D :virtual public A{
//     public:
//     int d;
// };
// class C : virtual public A{
//     public:
//     int c;
// };
// class B : public D, public C {
//     public:
//     int b;
// };

// int main()
// {
//     B obj;
//     obj.D::a=20;
//     obj.C::a=30;
//     cout<<obj.D::a;
//     cout<<obj.C::a;
//     // USING SCOPE RESOLUTION OPERATOR TO RESOLVE JUST BEFORE THE VARIABLE NAME IS ONE OF THE TWO METHOD TO RESOLVE ABMIGUITY CAUSED BY THIS HYBRID INHERITANCE.
//     // THIS METHOD IS NOT RCOMMENDED BECAUSE IT IS RECOMENDED TO HAVE TWO COPIES OF EACH DATA MEMBER FROM TWO CLASS.
// }



// class Animal {
//     public:
//     virtual void makeSound() {
//         cout<< "animal sound" ;
//     }
// };
// class Dog : public Animal {
//     public:
//     void makeSound() override {
//         cout<< "bark" ;
//     }
// };
// int main() {
//     Animal a;// static Dog 
//     Dog *pd = new Dog;
//     pd->makeSound(); 
//     //Animal *pd= new Animal;
//     //pd->makeSound();
//     Animal pd = new Dog;
//     pd->makeSound();
// }



// class Animal{
//     public:
//     Animal(){
//         cout<<"Animal created";
//     }
//     void make sound() {
//         cout<<"Animal makes sound";
//     }
// };
// class Dog public Animal{
//     public:
//     Dog(){
//         cout<<"Dog created";
//     }
//     void makeSound()  {
//         cout<<"Dog barks";
//     }
// };
// class Cat public Animal{
//     public:
//     Cat(){
//         cout<<"Cat created";
//     }
//     void makeSound()  {
//         cout<<"Cat meows";
//     }
//     ~Cat(){cout<<"Cat destroyed"; }
// };


// int main(){
//     Animal *a = new Dog();
//     delete a;
//     return 0;   
// }
// //the life cycle of base and the derived object is as follows:
// //1.parent object is created
// //2.child object is created
// //3.child object is destroyed
// //4.parent object is destroyed



