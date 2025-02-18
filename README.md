# MultiplayerFPS
多人第一人称射击游戏
# 游戏介绍
UE5空白项目开发，是一款第一人称射击多人游戏。每个客户端可以使用三种武器并在不同武器之间进行切换，用户可以在地图中拾取武器、弹药、护甲和生命，当一方通过射击击杀另外一名角色时，会在屏幕中进行播报和记录。用户可以查看比赛计分板，上面记录玩家的名称，击杀，死亡与延迟信息。当某一方达成击杀目标数时，将停止游戏并显示最终成绩，作为游戏的结束。
# 游戏截图
![pho1](https://github.com/bgsheep/MultiplayerFPS/blob/main/demos/screen%20shot1.png)
![pho1](https://github.com/bgsheep/MultiplayerFPS/blob/main/demos/screen%20shot2.png)
![pho1](https://github.com/bgsheep/MultiplayerFPS/blob/main/demos/screen%20shot3.png)
![pho1](https://github.com/bgsheep/MultiplayerFPS/blob/main/demos/screen%20shot4.png)

# 功能实现
1. 使用2D混合空间实现角色类的移动功能，并更改摄像机组件插槽实现第一人称视角；
2. 实现用户角色类的护甲计算、血量增减及死亡逻辑；
3. 为角色射击的不同武器动作制作动画蒙太奇，以及完成数字按键和鼠标滚轮切换武器的输入操作；
4. 使用UMG控件实现击杀播报、用户护甲、武器、血量显示及计分板显示玩家状态的功能；
5. 为击中敌人、角色落地与射击添加音频特效，并为不同效果实现对应的RPC调用；
6. 创建自定义玩家控制器、玩家状态及游戏状态类，并存储对应的游戏信息；
7. 实现拾取物类的创建，及用户拾取物品的逻辑；

# 游戏截图
![pho1](https://github.com/bgsheep/MultiplayerFPS/blob/main/demos/demo1.gif)
![pho1](https://github.com/bgsheep/MultiplayerFPS/blob/main/demos/demo2.gif)
![pho1](https://github.com/bgsheep/MultiplayerFPS/blob/main/demos/demo3.gif)
