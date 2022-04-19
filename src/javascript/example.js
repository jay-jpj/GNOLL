// 'use strict';
// const common = require('../../common');
// const assert = require('assert');
// const bindingPath = require.resolve(`./build/${common.buildType}/binding`);
const dtPath = require.resolve(`./build/Release/dicetower`);
const dt = require(dtPath);

value = dt.roll("1d6");

console.log('Rolling a d6... Got:', value);
