#pragma once
#ifndef LAWN_H
#define LAWN_H
#include "Shader.h"
 
#include<string>
class Lawn
{
public:
	float vertices[8*4] = {
		// positions          // colors           // texture coords
		 1.0f,  1.0f, 0.0f,   1.0f, 0.0f, 0.0f,   1.0f, 1.0f, // top right
		 1.0f, -1.0f, 0.0f,   0.0f, 1.0f, 0.0f,   1.0f, 0.0f, // bottom right
		-1.0f, -1.0f, 0.0f,   0.0f, 0.0f, 1.0f,   0.0f, 0.0f, // bottom left
		-1.0f,  1.0f, 0.0f,   1.0f, 1.0f, 0.0f,   0.0f, 1.0f  // top left 
	};
	unsigned int indices[2*3] = {
		0, 1, 3, // first triangle
		1, 2, 3  // second triangle
	};
	std::string vs, fs;
	//Shader  ;//( vs.data(), fs.data() );
	Lawn(std::string vs, std::string fs) {
		  Shader LawnShader(vs.data(), fs.data());
		 // Shader(vs.data(), fs.data());
	}
	Lawn();
};
#endif

