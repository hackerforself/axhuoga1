def calculator():
    print("简单计算器")
    print("选择操作：")
    print("1. 加法")
    print("2. 减法")
    print("3. 乘法")
    print("4. 除法")
    
    # 用户输入选择
    choice = input("输入选择(1/2/3/4): ")
    
    # 用户输入数字
    if choice in ['1', '2', '3', '4']:
        num1 = float(input("输入第一个数字: "))
        num2 = float(input("输入第二个数字: "))
        
        if choice == '1':
            print(f"结果: {num1} + {num2} = {num1 + num2}")
        elif choice == '2':
            print(f"结果: {num1} - {num2} = {num1 - num2}")
        elif choice == '3':
            print(f"结果: {num1} × {num2} = {num1 * num2}")
        elif choice == '4':
            if num2 != 0:
                print(f"结果: {num1} ÷ {num2} = {num1 / num2}")
            else:
                print("错误: 除数不能为零")
    else:
        print("无效输入，请选择 1/2/3/4")

# 调用计算器函数
calculator()
