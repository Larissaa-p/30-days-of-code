use std::io;

fn binary(mut n: i32){
   let mut ones = 0;
   let mut max_ones = 0;
    while n > 0{
        let remainder = n % 2;
        n /= 2;
        if remainder == 1 {
            ones += 1;
            if ones > max_ones {
                max_ones = ones;
            }
        } else {
            ones = 0;
        }
    }
    println!("{}", max_ones);
}

fn main(){
    let mut input = String::new();
    
    io::stdin().read_line(&mut input).expect("Failed to read line");
    
    let mut n: i32 = input
        .trim()
        .parse() 
        .expect("Please type a valid number!"); 
    
    binary(n);
}
