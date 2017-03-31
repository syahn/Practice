// 1. Reflection


// 2. Problem


// 3. Initial solution

function sym(...args) {
  return args.reduce((a,c) => {
    return a.filter(v => c.indexOf(v) < 0)
            .concat(c.filter(v=>a.indexOf(v) < 0))
            .filter((v, i, arr) => arr.indexOf(v) == i);
});


// 4. Improved solution
