use rand::Rng;
use std::cmp::Ordering;
use std::io;

fn main() {
    println!("猜数字游戏！");
    let secret_number = rand::thread_rng().gen_range(1..=100);

    loop {
        println!("请输入一个数字：");

        let mut guess = String::new();
        io::stdin()
            .read_line(&mut guess)
            .expect("读取失败");

        let guess: u32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };

        match guess.cmp(&secret_number) {
            Ordering::Less => println!("太小了！"),
            Ordering::Greater => println!("太大了！"),
            Ordering::Equal => {
                println!("你赢了！");
                break;
            }
        }
    }
}
