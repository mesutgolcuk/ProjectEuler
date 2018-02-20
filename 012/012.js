(function () {
    const DIVISOR = 500;
    var lastAddedNaturalNumber = 1;
    var triangleNumber = 0;
    var divisorCount = 0;

    while (divisorCount < DIVISOR) {
        divisorCount = 0;
        calculateNextTriangleNumber();
        for (var i = 1; i <= triangleNumber/2; i++) {
            if(triangleNumber % i === 0) {
                divisorCount++;
            }
        }
        divisorCount++;
    }
    console.log(triangleNumber);

    function calculateNextTriangleNumber() {
        triangleNumber =  triangleNumber + lastAddedNaturalNumber;
        lastAddedNaturalNumber++;
    }
}());