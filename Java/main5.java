// public class main5 {
//      public static void main(String[] args){
//         StringBuilder str=new StringBuilder("hello");
//         //str.append ("byee");
//         str.insert(1,"");

//     }
//}

//  class main{
//     public static void main(String[] args){
//         String str="i love java";
//         String a[]=str.split(" ");
//         StringBuilder result=new StringBuilder();
//         for(String i : a){
//             StringBuilder data=new StringBuilder(i);
//             result.append(data.reverse()).append(" ");
//         }
//         System.out.println(result);
//     }

// }


// class main{
//     public static void main(String[] args){
//         String str="aabbc"; // a2b2c1 ye ana chahiye
//         StringBuilder result=new StringBuilder();
//         int count=1;
//         for(int i=1;i<str.length();i++){
//             if(str.CharAt(i)==str.CharAt(i-1)){
//                 count++;
//             }else{
//                 result.append(str.CharAt(i-1)).append(count);
//                 count=1;
//             }
//         }
//         result.append(str.CharAt(str.lenght()-1)).append(count);

//     }
// }