
//http://www.geeksforgeeks.org/print-missing-elements-that-lie-in-range-0-99/
class SolutionPrintMissingIntegers{
public:
    void print(int s,int e){
        if(s==e){
            printf("%d\n",s);
        }else{
            printf("%d-%d\n",s,e);
        }
    }
    void printMissing(int arr[],int n){
        bool appeard[100];
        for(int i=0;i<100;i++)
            appeard[i] = false;
        for(int i=0;i<n;i++){
            if(arr[i]<100&&arr[i]>=0)
                appeard[arr[i]] = true;
        }
        int i=0;
        while(i<100){
            int begin = i;
            while(begin<100&&appeard[begin]){
                begin++;
            }
            int end = begin;
            while(end<100&&!appeard[end])
                end++;
            print(begin,end-1);
            i=end;
        }
    }
};
