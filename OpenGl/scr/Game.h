#ifndef GAME_H
#define GAME_H

//�����˵�ǰ��Ϸ��״̬
enum GameState {
	GAME_ACTIVE,
	GAME_MENU,
	GAME_WIN
};
 
#include <glad/glad.h>
#include <glfw/glfw3.h>
/*����������ص���Ⱦ����Ϸ����
������Ϸ����
�����еĴ��ڴ������Ϸ�н���
*/
class Game
{
public:
	// ��Ϸ״̬
	GameState  State;
	GLboolean  Keys[1024];//��������
	GLuint     Width, Height;
	// ���캯��/��������
	Game(GLuint width, GLuint height);
	~Game();
	// ��ʼ����Ϸ״̬���������е���ɫ��/����/�ؿ���
	void Init();
	// ��Ϸѭ��
	void ProcessInput(GLfloat dt);//��������
	void Update(GLfloat dt);//������Ϸ����״̬
	void Render();//��Ⱦ
};

#endif