use std::io;

fn main(){
    let mut number = String::new();
    io::stdin()
    .read_line(&mut number).expect("Failed to read line");
    
    let n: i32 = number.trim().parse().expect("Failed to parse number");
    
    for i in 1..=10{
        println!("{0} x {1} = {2}", n, i, n*i); 
    }
}
