function addArray(arr){
    const result = arr.reduce((sum,nxt)=> {
        return nxt %2 ===0 ? sum : sum + nxt;
    });
    return result;
}

result = addArray([1,2,3,4,5]);
console.log(result);