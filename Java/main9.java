 // // *single-level inheritance*
// //    - Class Employee has method work()
// //    - Class Manager inherits Employee and has method attendMeeting()
// //    - Create an object of manager and call both methods.
//     class Employee {
//         void work(){
//             System.out.println("Employee is working");
//         }
//     }
//     class Manager extends Employee {
//         void attendmeeting(){
//             System.out.println("Manager is attending Meeting");
//         }
//     }
//     public class main9 {
//         public static void main (String[] args) {
        
//            Manager m = new Manager(); 
//            m.work();
//            m.attendmeeting();
//         }
//     }



// // overloading function
// class main9 {
//     void add(int a){
//         System.out.println(a);
//     }
//     void add(int a,int b){
//       System.out.println(a+b);
//     }
//     void add (int a,int b,int c){
//         System.out.println(a+b+c);
//     }
// } 


// class Animal{
//     void eat(){
//         System.out.println("pizza");

//     }
// }
// class Dog extends Animal{
//     void eat(){
//         System.out.println("roti");
//     }
// }
// class hello {
//     public static void main (String[] args) {
//         Animal s1 = new Dog();
//         s1.eat();
//     }
// }