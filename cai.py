import random

def guess_number():
    # 计算机随机选择一个 1 到 100 之间的数字
    target = random.randint(1, 100)
    
    print("欢迎来到猜数字游戏！")
    print("我已经选择了一个 1 到 100 之间的数字。")
    
    attempts = 0  # 记录尝试次数

    while True:
        # 获取玩家的输入
        guess = int(input("请输入你的猜测: "))
        attempts += 1

        # 判断玩家的猜测
        if guess < target:
            print("太小了！再试一次。")
        elif guess > target:
            print("太大了！再试一次。")
        else:
            print(f"恭喜你，猜对了！你用了 {attempts} 次机会。")
            break  # 猜对了，退出游戏

# 运行游戏
guess_number()
