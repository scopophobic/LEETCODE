/**
 * @param {number[]} arr
 * @return {boolean}
 */
var threeConsecutiveOdds = function(arr) {
    let count = 0; 
    let n = arr.length;
    for(let i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
        else{
            count = 0;
        }
        
        
        if(count == 3 ) return true;
    }
    
    return false;
};