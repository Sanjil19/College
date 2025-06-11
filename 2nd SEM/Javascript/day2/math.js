// Math constants and functions
document.writeln("Math.PI: " + Math.PI + "<br>");
document.writeln("Math.round(4.6): " + Math.round(4.6) + "<br>");
document.writeln("Math.ceil(4.2): " + Math.ceil(4.2) + "<br>");
document.writeln("Math.pow(2, 3): " + Math.pow(2, 3) + "<br>");
document.writeln("Math.cbrt(125): " + Math.cbrt(125) + "<br>");
document.writeln("Math.sqrt(25): " + Math.sqrt(25) + "<br>");
document.writeln("Math.min(5, 23, 11, 2, 9): " + Math.min(5, 23, 11, 2, 9) + "<br>");
document.writeln("Random (1-1000000): " + Math.ceil(Math.random() * 1000000) + "<br><br>");

// Type coercion and operations
let results = [
    { desc: `"10" + 2`, value: "10" + 2 },
    { desc: `"10" - 2`, value: "10" - 2 },
    { desc: `'Hello' - 'world'`, value: 'Hello' - 'world' },
    { desc: `'5' * '3'`, value: '5' * '3' },
    { desc: `'abc' / 2`, value: 'abc' / 2 },
    { desc: `'20' + true`, value: '20' + true },
    { desc: `null + 10`, value: null + 10 },
    { desc: `undefined + 1`, value: undefined + 1 },
    { desc: `'100' / '2'`, value: '100' / '2' },
    { desc: `'50' - 10`, value: '50' - 10 },
    { desc: `'7' % 2`, value: '7' % 2 },
    { desc: `true + 5`, value: true + 5 },
    { desc: `false * 10`, value: false * 10 },
    { desc: `'15px' - 5`, value: '15px' - 5 },
    { desc: `'8' * 2`, value: '8' * 2 },
    { desc: `'30' + false`, value: '30' + false },
    { desc: `null - 3`, value: null - 3 },
    { desc: `undefined / 2`, value: undefined / 2 },
    { desc: `'abc' * 3`, value: 'abc' * 3 },
    { desc: `10 + undefined`, value: 10 + undefined },
    { desc: `'20' / true`, value: '20' / true },
    { desc: `'5' + null`, value: '5' + null },
    { desc: `false - '2'`, value: false - '2' },
    { desc: `true * '4'`, value: true * '4' },
    { desc: `'10px' / 2`, value: '10px' / 2 },
    { desc: `'100' % '3'`, value: '100' % '3' }
];

results.forEach(item => {
    document.writeln(item.desc + " = " + item.value + "<br>");
});

document.writeln("<br>");
