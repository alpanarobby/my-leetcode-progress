class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0, temp=x;
        if(x<0)
        return false;
        else{
        while(temp!=0){
            int pop=temp%10;
            rev=(rev*10)+pop;
            temp=temp/10;
        }
        return rev==x;
    }}
};