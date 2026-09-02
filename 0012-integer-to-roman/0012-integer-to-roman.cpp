class Solution {
public:
    string intToRoman(int num) {
        vector<int>val={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string>sym={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string res="";
        int times , rem, x,y;
        while(num>0){
               for(int i=0;i<13;i++){
                if(val[i]<=num){
                     x= val[i];
                     y=i;
                    break;
                }
               }
             times=num/x;
             rem=num%x;
             num=rem;
             for(int i=0;i<times;i++){
                res=res+sym[y];
             }  
             
        }
return res;
    }
};