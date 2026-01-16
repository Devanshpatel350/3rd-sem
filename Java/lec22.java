// import java.util.*;

// import javax.sound.sampled.SourceDataLine;
// class lec22 {
//     public static void main(String[] args) {
//        ArrayList<Integer> list=new ArrayList<>();
//        list.add(5);
//        list.add(6);
//        list.add(7);
//        list.add(8);
//        List<Integer> res=   list.stream().filter(n-> n%2!= 0).toList();
//        List<Integer> mapData=   list.stream().map(n-> n*2).toList();
//             int Data=   list.stream().reduce(0,(a,b)->a+b);
            
//             System.out.println(res);
//             System.out.println(mapData);
//             System.out.println(Data);
//     }
// }





import java.util.*;

import javax.sound.sampled.SourceDataLine;
class lec22 {
    public static void main(String[] args) {
       ArrayList<Integer> list=new ArrayList<>();
       list.add(5);
       list.add(6);
       list.add(7);
       list.add(8);
       List<Integer> res=   list.stream().filter(n-> n%2!= 0).toList();
       List<Integer> mapData=   list.stream().map(n-> n*2).toList();
       int Data=   list.stream().reduce(0,(a,b)->a+b);
       List<Integer> skip=  list.stream().skip(2).toList();
       List<Integer> limit=    list.stream().limit(2).toList();
       List<Integer> sort=   list.stream().sorted((a,b)->a+b).toList();
        



            System.out.println(skip);
        //    System.out.println(mapData);
        //    System.out.println(Data);
    }
}
