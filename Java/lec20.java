// import java.io.File;

// public class hello{
//     //crud
//     public static viod main(String[] args){
// File file = new File("New.txt");
//     }
// }



// import java.io.File;

// public class hello {
//     //crud
//     public static void main(String[] args) {
//         File file = new File("Data.java");
//         try{
//             if(file.createNewFile()) {
//                 System.out.println("File createdddd"+file.getName());
//                 System.out.println("file createdddd"+file.getAbsolutepath)
//             } else {
//                     System.out.println("File already existsssss.");
//             }
//         }   catch(Exception e) {
//             System.out.println(e);
//         }
    
//     }
// }



// import java.io.FileWriter;;

// public class hello {
//     //crud
//     static viod writeData(String data){
//         try{
//             FileWriter write= 
//         }
//     }



// import java.io.File;

// public class hello {

//     static void FileRead() {
//         try{
//             FileRead reader=new FileReader("New.txt");
//             int ch;
//             while ((ch=reader.read())!=-1){
//                 System.out.println((char)ch);
//             }
//         }catch (Exception e){
//             System.out.println()
//         }
//         File file = new File("Data.java");
//         try{}
//     }
// }
            



import java.io.File;

public class lec20{
    static void FileRead(){
        try{
            File file=new File("new.txt");
            if(file.delete()){
                System.out.println("file delettt");
            }else{
                System.out.println("noooo");
            }

        }catch (Exception e){
            System.out.println(e);
        }
    }  
    static void FileDelet(){
        try{
            File file=new File("new")
        }

    }    
}