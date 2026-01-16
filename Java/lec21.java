
class les21{
    class MyThread extends Thread{
        public void run(){
        System.out.println(Thread.currentThread().getName());
        for (int i=0;i<5;i++){
        System.out.println("downloading file..."   +  (i+20));
        try{
            Thread.sleep(2000);
        }catch(Exception e){
        }
        }
    }
}
class Main{
    public static void main(String[] args) {
   //     MyThread t1=new MyThread();
 //       t1.start();
        for (int i=0;i<5;i++){
            System.out.println("Main");
    }
}
}
}