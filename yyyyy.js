<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>简单计算器</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
            background-color: #f5f5f5;
        }
        .calculator {
            background: #fff;
            padding: 20px;
            border-radius: 10px;
            box-shadow: 0 4px 10px rgba(0, 0, 0, 0.1);
            max-width: 300px;
            width: 100%;
        }
        .display {
            width: 100%;
            height: 50px;
            margin-bottom: 20px;
            text-align: right;
            font-size: 1.5em;
            border: none;
            border-bottom: 2px solid #ddd;
            outline: none;
            padding-right: 10px;
        }
        .buttons {
            display: grid;
            grid-template-columns: repeat(4, 1fr);
            gap: 10px;
        }
        button {
            height: 50px;
            font-size: 1.2em;
            border: none;
            background: #f0f0f0;
            border-radius: 5px;
            cursor: pointer;
            transition: background-color 0.3s;
        }
        button:hover {
            background-color: #ddd;
        }
        .equals {
            grid-column: span 4;
            background-color: #007bff;
            color: #fff;
        }
        .equals:hover {
            background-color: #0056b3;
        }
    </style>
</head>
<body>
    <div class="calculator">
        <input type="text" id="display" class="display" disabled>
        <div class="buttons">
            <button onclick="appendNumber('7')">7</button>
            <button onclick="appendNumber('8')">8</button>
            <button onclick="appendNumber('9')">9</button>
            <button onclick="chooseOperator('/')">÷</button>
            <button onclick="appendNumber('4')">4</button>
            <button onclick="appendNumber('5')">5</button>
            <button onclick="appendNumber('6')">6</button>
            <button onclick="chooseOperator('*')">×</button>
            <button onclick="appendNumber('1')">1</button>
            <button onclick="appendNumber('2')">2</button>
            <button onclick="appendNumber('3')">3</button>
            <button onclick="chooseOperator('-')">−</button>
            <button onclick="appendNumber('0')">0</button>
            <button onclick="clearDisplay()">C</button>
            <button onclick="calculate()">=</button>
            <button onclick="chooseOperator('+')">+</button>
        </div>
    </div>

    <script>
        let display = document.getElementById('display');
        let currentNumber = '';
        let previousNumber = '';
        let operator = '';

        function appendNumber(number) {
            currentNumber += number;
            updateDisplay();
        }

        function chooseOperator(op) {
            if (currentNumber === '') return;
            if (previousNumber !== '') {
                calculate();
            }
            operator = op;
            previousNumber = currentNumber;
            currentNumber = '';
        }

        function calculate() {
            if (currentNumber === '' || previousNumber === '' || operator === '') return;
            let result;
            const prev = parseFloat(previousNumber);
            const current = parseFloat(currentNumber);

            switch (operator) {
                case '+':
                    result = prev + current;
                    break;
                case '-':
                    result = prev - current;
                    break;
                case '*':
                    result = prev * current;
                    break;
                case '/':
                    result = current !== 0 ? prev / current : 'Error';
                    break;
                default:
                    return;
            }

            currentNumber = result.toString();
            operator = '';
            previousNumber = '';
            updateDisplay();
        }

        function clearDisplay() {
            currentNumber = '';
            previousNumber = '';
            operator = '';
            updateDisplay();
        }

        function updateDisplay() {
            display.value = currentNumber;
        }
    </script>
</body>
</html>
