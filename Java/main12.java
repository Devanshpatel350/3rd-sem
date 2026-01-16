
//     class Atm{
//         private int TotalBalance=10000;
//         public void getB(){
//             System.out.println(TotalBalance);
//         }
//         public void setBalance(int amount){
//             if(amount>=0){
//                 TotalBalance+=amount;
//             }
//         }
//     }
    

// public class main12{
//     public static void main(String[] args) {
//      Atm a1 = new Atm();
//      a1.getB();
//      a1.setBalance(5000);
//      a1.getB();
//     }
// } 

        //Youtube subscriber count
class YoutubeChannel{
    private String ChannelName;
    private int subscriberCount;

    public YoutubeChannel(String ChannelName){
        this.ChannelName=ChannelName;
        this.subscriberCount=0;
    }
    public void getName(){
        System.out.println(ChannelName);   

    }
    public void getsubscriberCount(){
        System.out.println(subscriberCount);
    }
    public void setsubscribeCount(){
        subscriberCount++;
    }
    public void setunsubscriberCount(){
        if(subscriberCount>0){
            subscriberCount--;
        }else{
            System.out.println("No subscribers to remove");
        }
    }

}
public class main12{
    public static void main(String[] args){
        YoutubeChannel s1 = new YoutubeChannel("VG ARMY"); 
        s1.getName();
        s1.getsubscriberCount();
        s1.setsubscribeCount();
        s1.getsubscriberCount();
    }
}