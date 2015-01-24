#pragma once

#include <math.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <glm.hpp>
#include <sstream>
#include <string>
#include <GL\GLU.h>

class ObjLoader
{
public:
	//public data
	vector<glm::vec4> vertices;
	vector<glm::vec3> normals;
	vector<GLushort> elements;

	glm::vec3 *ptrToNormal = normals.data();

	//public methods
	ObjLoader();

	ObjLoader(const char*);

	void load_obj(const char* filename, vector<glm::vec4> &vertices, vector<glm::vec3> &normals, vector<GLushort> &elements);
	
	~ObjLoader();
};

