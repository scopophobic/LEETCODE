class Solution {
    public boolean isPalindrome(String s) {
        s = s.toLowerCase();
        int n = s.length();
        int i=0,j=n-1;
        boolean flag = true;
        while(i<j){
            char ch1 = s.charAt(i);
            char ch2 = s.charAt(j);
            if(!Character.isLetterOrDigit(ch1)) i++;
            else if(!Character.isLetterOrDigit(ch2)) j--;
            else{
                if(ch1!=ch2) return false;
                i++;
                j--;
            }
        }
        
        return true;
    }
}