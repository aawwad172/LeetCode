function flippingMatrix(matrix) {
    // Write your code here
    // First we need to find the biggers 4 numbers in the array.
    // Then we should put those elements in the top-left corner in the 2 * 2.
    // If the matrix a matrix of 2 * 2 you should find the biggers elements and then move it to the [0][0]
    
    if(matrix.length < 2) {
        return matrix[0][0];
    }
    
    if(matrix.length == 2) {
        var max;
        max = matrix[0][0];
        for(let i = 0; i < matrix.length; i++) {
            for(let j = 0; j < matrix; j++) {
                if(max < matrix[i][j]) { max = matrix[i][j]; }
            }
        }
        
        return max;
    }
    
    if(matrix.length > 2) {
        let max = new Array(4).fill(0);
        for(let i = 0; i < matrix.length; i++) {
            for(let j = 0; j < matrix[i].length; j++) {
                if(max[0] < matrix[i][j]) { 
                    max[0] = matrix[i][j]; 
                    max.sort();
                }
            }
        }
        return max[0] + max[1] + max[2] + max[3];
    }
}

var arr = [[1, 2], [3, 4], [5, 7], [100, 200]];

console.log(flippingMatrix(arr));