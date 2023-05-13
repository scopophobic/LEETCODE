/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let prev = init;
    function increment(){
        return ++prev;
    }
    function decrement(){
        return --prev;
    }
    function reset (){return prev=init;}
    
    return {increment,decrement,reset};
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */