class Solution:
    def getLucky(self, s: str, k: int) -> int:
        con = ""
        for i in s:
            temp = ord(i)-ord('a')+1;
            # print(temp)
            con=con+str(temp)
            
        
        
        while(k):
            s = 0
            for i in con:
                temp = int(i)
                s = s + temp
            con= str(s)
            k=k-1;
        print(con)
        
        return int(con);