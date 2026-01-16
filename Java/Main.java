// import java.util.ArrayList;

// class Main {
//     public static void main(String[] args) {
//         ArrayList<Integer> list=new ArrayList<>();
//         list.add(5);
//         list.add(10);
//         list.add(1,30);
//         System.out.println(list.get(1));
//     }
// }
// class Node{
//     int data;
//     Node next;

//     public Node(int data){
//         this.data=data;
//         this.next=null;
//     }
// }
// class MyLink{
//     Node head;
//     Node curr;
//     public void addTolast(int data){
//         Node newNode =new Node(data);
//         if(head==null){
//             head=curr=newNode;
//         }else{
//             curr.next=newNode;
//             curr=newNode;
//         }

//     }
// }
// class Main{
//     public static void main(String[] args) {
        
//     }
// }
// public class main{
// public static void Main(String[] args) {
//     ArrayList<Integer> list = new ArrayList<>();

// list.add(10);
// list.add(20);
// list.add(30);

// list.set(1, 99);  

// System.out.println(list);
// }
// }
// }
// import java.util.HashMap;
// class Main{
//     public static void main(String[]agrs){
//         HashMap<Integer,Integer> map=new HashMap<>();
//         map.put(1,10);
//         map.put(2,20);
//         System.out.println(map.get(3));
//         System.out.println(map.containsKey(3));
//     }
// }

// import java.util.HashMap;
// class Main{
//     public static void main(String[]agrs){
//         HashMap<Integer,Integer> map=new HashMap<>();
//         map.put(1,10);
//         map.put(2,20);
//         System.out.println(map.get(3));
//         System.out.println(map.getOrDefault(3,null));
//         System.out.println(map.containsKey(3));


// for (int x : map.keySet()) {
//     System.out.println(map.get(x));
// }
//     }
// }

// import java.util.HashMap;
// class Main{
//     public static void main(String[]agrs){
//         import java.util.HashMap;
//         int arr[]={1,2,3,4,5,6};
//         for(int  x: arr){
//             map.put(x, map.getOrDefault(x,0)+1 );
//         }
        
//         System.out.println(map);
//     }
// }

// import java.util.HashMap;

// class Main {
//     public static void main(String[] args) {
//         String str = "abcdababa";
//         HashMap<Character, Integer> map = new HashMap<>();

//         for (char c : str.toCharArray()) {
//             map.put(c, map.getOrDefault(c, 0) + 1);
//         }

//         System.out.println(map);
//     }
// }
    

// import java.util.HashMap;
//         import java.util.HashMap;
//         public static void main(String[]agrs){
//             String str="abcdbaba";
//         HashMap<Character,Integer> map=new HashMap<>();
//         for(char ch : str.toCharArray()) {
//                 map.put(ch, map.getOrDefault(ch, 0)+1);
//             }
//             System.out.println(map);
//             for(char ch :str.toCharArray()) {
//                 if(map.get(ch)==1) {
//                     System.out.println(ch);
//                     break;
//                 }
//             }
//         }    
//     }

// import java.util.HashMap;

// public class Main {
//     public static void main(String[] args) {

//         int arr[] = {2, 7, 11, 15};
//         int target = 9;

//         HashMap<Integer, Integer> map = new HashMap<>();

//         for (int i = 0; i < arr.length; i++) {
//             int diff = target - arr[i];

//             if (map.containsKey(diff)) {
//                 System.out.println("Indices: " + map.get(diff) + ", " + i);
//                 System.out.println("Numbers: " + diff + ", " + arr[i]);
//                 break;
//             }

//             map.put(arr[i], i);
//         }
//     }
// }

// 
// import java.util.ArrayList;
// import java.util.Collections;

// class Student implements Comparable<Student> {
//     int RollN;
//     String name;

//     Student(int RollN, String name) {
//         this.RollN = RollN;
//         this.name = name;
//     }

//     public int compareTo(Student s) {
//         return this.RollN - s.RollN;
//     }

//     public String toString() {
//         return this.RollN + " " + this.name;
//     }
// }

// class hello {
//     public static void main(String[] args) {

//         ArrayList<Student> list = new ArrayList<>();

//         list.add(new Student(1, "om"));
//         list.add(new Student(2, "ankit"));

//         Collections.sort(list);
//         System.out.println(list);
//     }
// }


// import java.util.ArrayList;
// import java.util.Collections;
// import java.util.Comparator;
// class NameSorted implements Comparator<Student> {
//     public int compare(Student s1, Student s2){
//         return s1.name.compareTo(s2.name);   // added as it is
//     }
// }
// class Student {
//     int RollN;
//     String name;
//     public Student(int RollN, String name){
//         this.RollN = RollN;
//         this.name = name;
//     }
// }
// class hello {
//     public static void main(String[] args){
//         ArrayList<Student> list = new ArrayList<>();
//         list.add(new Student(3, "aman"));
//         list.add(new Student(1, "devansh"));
//         list.add(new Student(2, " "));
//         Collections.sort(list, new NameSorted());   
//         for(Student s : list){
//             System.out.println(s.RollN + " - " + s.name);
//         }
//     }
// }
////////////////////27/11/25/////////////////////////////////////////////////
// import java.util.ArrayList;
// import java.util.Collections;
// import java.util.Comparator;
// class Student implements Comparable<Student>{
//     String name;
//     int RollN;
//     public Student(int RollN,String name){
//         this.name=name;
//         this.RollN=RollN;
//     }
//     public int compareTo(Student s1){
//         return this.RollN-s1.RollN;
//     }
//     public String toString(){
//         return RollN+" "+name;
//     }
// }
// class NameSorted implements Comparator<Student>{
//     public int compare(Student s1,Student s2){
//         return s1.name.compareTo(s2.name);
//     }
// }
// class hello{
//     public static void main(String[] args){
//         ArrayList<Student> list=new ArrayList<>();
//         int RollN;
//         list.add(new Student(RollN: 1, name: "Bachha"));
//         list.add(new Student(RollN: 2, name: "Ayush"));
//         Collections.sort(list,new NameSorted());
//         for(Student s: list){
//             System.out.println(s.RollN + " " +s.name);
//         }
//         System.out.println(list);
//     }
// } 




// import java.util.HashSet;

// class hello {
//     public static void main(String[] args) {
//         int arr[] = {1, 2, 3, 4, 3, 2};

//         HashSet<Integer> set = new HashSet<>();

//         for (int x : arr) {
//             set.add(x);
//         }

//         if (arr.length == set.size()) {
//             System.out.println(true);
//         } else {
//             System.out.println(false);
//         }
//     }
// }



// import java.util.HashSet;

// class hello {
//     public static void main(String[] args) {
//         int arr[] = {1, 2, 3, 4, 3, 2};

//         HashSet<Integer> set = new HashSet<>();

//         for (int x : arr) {
//             set.add(x);
//         }

//         if (arr.length == set.size()) {
//             System.out.println(true);
//         } else {
//             System.out.println(false);
//         }
//     }
// }

// package java;

// import java.util.HashSet;

// class hello {
//     public static void main(String[] args) {
//         int arr[] = {1, 2, 3, 4, 3, 2};

//         HashSet<Integer> set = new HashSet<>();

//         for (int x : arr) {
//             set.add(x);
//         }

//         if (arr.length == set.size()) {
//             System.out.println(true);
//         } else {
//             System.out.println(false);
//         }
//     }
// }
// import java.util.LinkedHashSet;

// class hello{
//     public static viod main(String[] args) {
//         TreeSet<Integer> set=new TreeSet<>();
//         set.add(5);
//         set.add(6);
//         set.add(8);
//         System.out.println(set);
//     }
// }




