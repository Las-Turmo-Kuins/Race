#pragma once
#include "Module.h"
#include "p2DynArray.h"
#include "Globals.h"
#include "Primitive.h"

#define MAX_SNAKE 2

struct PhysBody3D;
struct PhysMotor3D;

class ModuleSceneIntro : public Module
{
public:
	ModuleSceneIntro(Application* app, bool start_enabled = true);
	~ModuleSceneIntro();

	bool Start();
	update_status Update(float dt);
	bool CleanUp();

	void OnCollision(PhysBody3D* body1, PhysBody3D* body2);

public:
	/*
	PhysBody3D* pb_snake[MAX_SNAKE];
	Sphere s_snake[MAX_SNAKE];

	PhysBody3D* pb_snake2[MAX_SNAKE];
	Sphere s_snake2[MAX_SNAKE];
	*/

	PhysBody3D* pb_chassis;
	Cube p_chassis;

	PhysBody3D* pb_wheel;
	Cylinder p_wheel;

	PhysBody3D* pb_wheel2;
	Cylinder p_wheel2;

	PhysMotor3D* left_wheel;
	PhysMotor3D* right_wheel;

	PhysBody3D* pBodyCube;


	Cube c0;
	Cube c1;
	Cube c2;
	Cube c3;
	Cube c4;
	Cube c5;
	Cube c6;
	Cube c7;
	Cube c8;
	Cube c9;
	Cube c10;
	Cube c11;
	Cube c12;
	Cube c13;
	Cube c14;
	Cube c15;
	Cube c16;
	Cube c17;
	Cube c18;
	Cube c19;
	Cube c20;
	Cube c21;
	Cube c22;
	Cube c23;
	Cube c24;
	Cube c25;
	Cube c26;
	Cube c27;
	Cube c28;
	Cube c29;
	Cube c30;
	Cube c31;
	Cube c32;
	Cube c33;
	Cube c34;
	Cube c35;
	Cube c36;
	Cube c37;
	Cube c38;
	Cube c39;
	Cube c40;
	Cube c41;
	Cube c42;
	Cube c43;
	Cube c44;
	Cube c45;
	Cube c46;
	Cube c47;
	Cube c48;
	Cube c49;
	Cube c50;
	Cube c51;
	Cube c52;
	Cube c53;
	Cube c54;
	Cube c55;
	Cube c56;
	Cube c57;
	Cube c58;
	Cube c59;
	Cube c60;
	Cube c61;
	Cube c62;
	Cube c63;
	Cube c64;
	Cube c65;
	Cube c66;
	Cube c67;
	Cube c68;
	Cube c69;
	Cube c70;
	Cube c71;
	Cube c72;
	Cube c73;
	Cube c74;
	Cube c75;
	Cube c76;
	Cube c77;
	Cube c78;
	Cube c79;
	Cube c80;
	Cube c81;
	Cube c82;
	Cube c83;
	Cube c84;
	Cube c85;
	Cube c86;
	Cube c87;
	Cube c88;
	Cube c89;
	Cube c90;
	Cube c91;
	Cube c92;
	Cube c93;
	Cube c94;
	Cube c95;
	Cube c96;
	Cube c97;
	Cube c98;
	Cube c99;
	Cube c100;
	Cube c101;
	Cube c102;
	Cube c103;
	Cube c104;
	Cube c105;
	Cube c106;
	Cube c107;
	Cube c108;
	Cube c109;
	Cube c110;
	Cube c111;
	Cube c112;
	Cube c113;
	Cube c114;
	Cube c115;
	Cube c116;
	Cube c117;
	Cube c118;
	Cube c119;
	Cube c120;
	Cube c121;
	Cube c122;
	Cube c123;
	Cube c124;
	Cube c125;
	Cube c126;
	Cube c127;
	Cube c128;
	Cube c129;
	Cube c130;
	Cube c131;
	Cube c132;
	Cube c133;
	Cube c134;
	Cube c135;
	Cube c136;
	Cube c137;
	Cube c138;
	Cube c139;
	Cube c140;
	Cube c141;
	Cube c142;
	Cube c143;
	Cube c144;
	Cube c145;
	Cube c146;
	Cube c147;
	Cube c148;
	Cube c149;
	Cube c150;
	Cube c151;
	Cube c152;
	Cube c153;
	Cube c154;
	Cube c155;
	Cube c156;
	Cube c157;
	Cube c158;
	Cube c159;
	Cube c160;
	Cube c161;
	Cube c162;
	Cube c163;
	Cube c164;
	Cube c165;
	Cube c166;
	Cube c167;
	Cube c168;
	Cube c169;
	Cube c170;
	Cube c171;
	Cube c172;
	Cube c173;

	PhysBody3D* sensor_cube;
};
