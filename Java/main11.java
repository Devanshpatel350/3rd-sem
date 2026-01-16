         //INTERFACE
public class main11 {
    interface A{
        abstract void login() ;
    }
    class B implements A{
        public void login(){
            System.out.println("hello");
        }
    }
    class hello{
        public void main(String[] args){
            B s1=new B();
            s1.login();
        }
    }
}
