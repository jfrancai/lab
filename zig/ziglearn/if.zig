const expect = @import("std").testing.expect;

// Run this code with zig test if.zig

test "if statement" {
    const a = false;
    var x: u16 = 0;
    if (a) {
        x += 1;
    } else {
        x += 2;
    }
    try expect(x == 1);
}
