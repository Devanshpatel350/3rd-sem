// class Car{
   
//     public Car(){
//          this(5);
//         System.out.println("hello");
//     }
//     public Car(int a) {
//         System.out.println(a);
//     }
//     public Car(int a,int b){
//         System.out.println(a);
//     }
// }
// public class Main8 {
//     public static void main(String[] args) {
//         Car s1=new Car();
//         Car s2=new Car(5);
//         Car s3=new Car(5,6);
        
//     }
// }

// class Animal{
//     void eat(){
//         System.out.println("pizza");
//     }

// }
// class Dog extends Animal{
//  void bark(){
//     System.out.println("bhawbhaw");
//  }
// }
// class Puppy extends Dog{
//     void sleep(){
//         System.out.println("koi kaam nhi");
//     }
// }

class Parent {
    int x =10;
    Parent(){
        System.out.println("Parent Construct: x = " + x);

    }
}
class Child extends Parent {
  Child() {
    System.out.println("Child super.x = " + super.x);
    //super.x refer to Parent's x
  }
   void show(){
    int x = 30;
    System.out.println("local x = "+ x);
    System.out.println("local x = "+ this.x);
    System.out.println("local x = "+ super.x);

   }
   public static void main(String[] args){
    Child c = new Child();
    c.show();
   }
}