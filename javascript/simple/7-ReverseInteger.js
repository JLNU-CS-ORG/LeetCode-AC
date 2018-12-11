/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    var result = 0; 
    var para = x;
    x = x > 0 ? x : -x;
    var int_max = 0x7fffffff;
    while (x != 0) {
        result = result * 10 + (x % 10);
        x = Math.floor(x / 10);
    }
    if (result > int_max)
        return 0;
    return para > 0 ? result : -result;
};
