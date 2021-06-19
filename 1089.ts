var i = 0;
    var zeros = 0;
    for (; i + zeros < arr.length; i++) {
        if (arr[i] === 0)
            zeros++;
    }
    for (i = i - 1; zeros > 0; i--) {
        if (i + zeros < arr.length)
            arr[i + zeros] = arr[i];
        if (arr[i] === 0) {
            --zeros;
            arr[i + zeros] = arr[i];
        }
    }