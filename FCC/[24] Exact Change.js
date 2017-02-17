// 1. Reflection

// - I solved it with a hint. 
// - Be careful to do arithmetic operation on decimal numbers.


// 2. Problem

// Design a cash register drawer function checkCashRegister() that accepts purchase
// price as the first argument (price), payment as the second argument (cash),
// and cash-in-drawer (cid) as the third argument.
//
// cid is a 2D array listing available currency.
//
// Return the string "Insufficient Funds" if cash-in-drawer is less than the change due.
// Return the string "Closed" if cash-in-drawer is equal to the change due.
//
// Otherwise, return change in coin and bills, sorted in highest to lowest order.



// 3. Initial solution

function checkCashRegister(price, cash, cid) {
  let change = cash - price;
  let totalChange = 0;
  let ret = [];

  const table = [['PENNY', 0.01],
                 ['NICKEL', 0.05],
                 ['DIME', 0.10],
                  ['QUARTER', 0.25],
                  ['ONE', 1],
                  ['FIVE', 5],
                  ['TEN', 10],
                  ['TWENTY', 20],
                  ['ONE HUNDRED', 100]];

  let leftCid = cid.map((v, i) => {
    totalChange = +(totalChange + v[1]).toFixed(2);
    console.log(table[i]);
    return [v[0], +(v[1] / table[i][1]).toFixed(2)];
  });

  for(let i=8; i > -1; i--){
    if(change < table[i][1]) continue;
    let num = 0;
    while(change >= table[i][1] && leftCid[i][1] > 0 && totalChange > 0){
      leftCid[i][1] = +(leftCid[i][1]-1).toFixed(2);
      change = +(change - table[i][1]).toFixed(2);
      totalChange = +(totalChange - table[i][1]).toFixed(2);
      num++;
    }
    ret.push([table[i][0], +(table[i][1] * num).toFixed(2)]);
    if(change === 0) break;
  }
  if(change > 0) return 'Insufficient Funds';
  if(totalChange === 0) return 'Closed';
  return ret;
}


// 4. Improved solution
