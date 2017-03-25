// 1. Reflection

// - Solved
// - I didn't fully understand improved version

// 2. Problem

// Find the total area covered by two rectilinear rectangles in a 2D plane.
//
// Each rectangle is defined by its bottom left corner and top right corner as shown in the figure.
//
// Rectangle Area
// Assume that the total area is never beyond the maximum possible value of int.

// 3. Initial solution( complexity: time=>O(1) space=>O(1))

var computeArea = function(A, B, C, D, E, F, G, H) {
    const sum = (C-A) * (D-B) + (G-E) * (H-F);
    const leftX = Math.max(A,E), leftY = Math.max(B,F);
    const rightX = Math.min(C,G), rightY = Math.min(D,H);
    const shared = (rightX - leftX) * (rightY - leftY);
    return sum - ((rightX - leftX) < 0 || (rightY - leftY) < 0 ? 0 : shared);
};

// 4. Improved solution( complexity: time=>O(1) space=>O(1) )

var computeArea = function(A, B, C, D, E, F, G, H) {
    const left = Math.max(A,E), right = Math.max(Math.min(C,G), left);
    const bottom = Math.max(B,F), top = Math.max(Math.min(D,H), bottom);
    return (C-A)*(D-B) - (right-left)*(top-bottom) + (G-E)*(H-F);
};
