public class lec24 {

    public class MergeSortTempArrayList{

        public static void MergeSort(int[] arr , int l,int r){
            if (l >= r)return;
            int mid =l+(r-1)/2;

            MergeSort(arr, l, mid);
            MergeSort(arr, mid+l, r);
        }
    }
    Public static void main(string[] args){
        int[] arr = {5,4,6,3 };
        MergeSort(arr, 0)
    }



    

}
