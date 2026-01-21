use std::io;

fn main(){
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let n: i32 = input.trim().parse().expect("Input not an integer");

    if n % 2 == 0{
        if n >=2 && n <=5{
            println!("Not Weird");
        }
        else if n >=6 && n <=20{
            println!("Weird");
        }
        else{
            println!("Not Weird");
        }
    } else {
        println!("Weird");
    }

}

