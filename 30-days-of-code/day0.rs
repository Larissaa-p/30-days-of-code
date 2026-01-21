use std::io;

fn main(){
    let mut inputString = String::new();
     io::stdin()
        .read_line(&mut inputString);
    println!("Hello, World.");
    println!("{}", inputString);
}