const box = document.getElementById("moving-box");
const scoreDisplay = document.getElementById("score");
let score = 0;

// 生成随机位置
function getRandomPosition(max) {
  return Math.random() * max + "px";
}

// 移动方块
function moveBox() {
  const container = document.getElementById("game-container");
  const containerWidth = container.clientWidth - 50; // 减去方块的宽度
  const containerHeight = container.clientHeight - 50; // 减去方块的高度
  
  const randomX = getRandomPosition(containerWidth);
  const randomY = getRandomPosition(containerHeight);
  
  box.style.left = randomX;
  box.style.top = randomY;
}

// 点击事件
box.addEventListener("click", () => {
  score++;
  scoreDisplay.textContent = score;
  moveBox();
});

// 初始化位置
moveBox();
