#ifndef GAME_H
#define GAME_H

//代表了当前游戏的状态
enum GameState {
	GAME_ACTIVE,
	GAME_MENU,
	GAME_WIN
};
 
#include <glad/glad.h>
#include <glfw/glfw3.h>
/*包含所有相关的渲染和游戏代码
管理游戏代码
将所有的窗口代码从游戏中解耦
*/
class Game
{
public:
	// 游戏状态
	GameState  State;
	GLboolean  Keys[1024];//储存输入
	GLuint     Width, Height;
	// 构造函数/析构函数
	Game(GLuint width, GLuint height);
	~Game();
	// 初始化游戏状态（加载所有的着色器/纹理/关卡）
	void Init();
	// 游戏循环
	void ProcessInput(GLfloat dt);//处理输入
	void Update(GLfloat dt);//更新游戏设置状态
	void Render();//渲染
};

#endif