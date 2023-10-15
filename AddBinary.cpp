class Solution {
public:
    string addBinary(string a, string b) {
        
        if(a.length()==0) return b;
        if(b.length()==0) return a;
        int flag=0;
        string c;
        int aIndex=a.length()-1;
        int bIndex=b.length()-1;
        while(aIndex>=0&&bIndex>=0){
            int sum=a[aIndex]-'0'+(b[bIndex]-'0')+flag;
            flag=sum/2;
            sum=sum%2;
            c=(char)(sum+'0')+c;
            aIndex--;
            bIndex--;
        }
        while(aIndex>=0){
            int sum=a[aIndex]-'0'+flag;
            flag=sum/2;
            sum=sum%2;
            c=(char)(sum+'0')+c;
            aIndex--;
        }
        while(bIndex>=0){
            int sum=b[bIndex]-'0'+flag;
            flag=sum/2;
            sum=sum%2;
            c=(char)(sum+'0')+c;
            bIndex--;
        } 
        if(flag>0) c=(char)(flag+'0')+c;
        return c;           
    }
};
