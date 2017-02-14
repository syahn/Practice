// 1. Reflection

// - I failed to solve it. 
// - Logic if sth exists, choose it could be expressed a || c. It's powerful.

// 2. Problem

// Convert the characters &, <, >, " (double quote), and ' (apostrophe),
// in a string to their corresponding HTML entities.


// 3. Initial solution

function convertHTML(str) {
  return str.replace(/&/g, '&amp;')
            .replace(/</g, '&lt;')
            .replace(/>/g, '&gt;')
            .replace(/"/g, '&quot;')
            .replace(/'/g, '&apos;');
}

// 4. Improved solution

function convertHTML(str) {
  let dict = { '&': '&amp;', '<': '&lt;', '>': '&gt;', '"': '&quot;', "'": '&apos;'};
  return str.split('').map(v => dict[v] || v).join('');
}
