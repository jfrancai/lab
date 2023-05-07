"use strict";
const a = "Hello world";
const n = 42;
const b = true;
const d = null;
const arr = ["qew", "qew"];
const s = 42;
const user = { firstname: "toto", lastname: "from42" };
const date = new Date();
const cb = (e) => {
    console.log("hello");
};
cb();
function printId(id) {
    console.log(id.toString());
}
printId(42);
