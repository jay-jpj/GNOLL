
extern {
    fn roll_and_write(s: *const u8) -> i32;
}
fn main(){
    let _x = unsafe{ roll_and_write("1d20".as_ptr()) };
    println!("Test Rust");
}
