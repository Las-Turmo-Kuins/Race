#include "Globals.h"
#include "Application.h"
#include "ModuleSceneIntro.h"
#include "Primitive.h"
#include "PhysBody3D.h"

ModuleSceneIntro::ModuleSceneIntro(Application* app, bool start_enabled) : Module(app, start_enabled)
{
}

ModuleSceneIntro::~ModuleSceneIntro()
{}

// Load assets
bool ModuleSceneIntro::Start()
{
	LOG("Loading Intro assets");
	bool ret = true;

	App->camera->Move(vec3(1.0f, 20.0f, 40.0f));
	App->camera->LookAt(vec3(0, 0, 0));

	// Create sensor cube (will trigger with car)
	sensor_cube = App->physics->AddBody(Cube(5, 5, 5), 0.0);
	sensor_cube->SetAsSensor(true);
	sensor_cube->SetPos(0, 3, 0);

#pragma region cubes
	//x es la z
	//y es la x
	//z es la y
	c0 = Cube(1, 4, 10);
	c0.SetPos(5.5, 7.17637, 28.0329);
	c0.SetRotation(-360, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c0, 0);
	c0.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c1 = Cube(10, 1, 20);
	c1.SetPos(-10, 2.10523, 13.503);
	c1.SetRotation(-15, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c1, 0);
	c1.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c2 = Cube(20, 1, 10);
	c2.SetPos(-5, 4.67638, 28.0328);
	c2.SetRotation(0, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c2, 0);
	c2.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c3 = Cube(10, 1, 10);
	c3.SetPos(0, 5.98752, 37.9919);
	c3.SetRotation(-15, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c3, 0);
	c3.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c4 = Cube(10, 1, 10);
	c4.SetPos(0, 9.83156, 47.2722);
	c4.SetRotation(-30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c4, 0);
	c4.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c5 = Cube(10, 1, 10);
	c5.SetPos(0, 15.9466, 55.2415);
	c5.SetRotation(-45, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c5, 0);
	c5.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c6 = Cube(10, 1, 10);
	c6.SetPos(0, 23.9158, 61.3564);
	c6.SetRotation(-60, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c6, 0);
	c6.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c7 = Cube(10, 1, 10);
	c7.SetPos(0, 33.1961, 65.2005);
	c7.SetRotation(-75, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c7, 0);
	c7.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c8 = Cube(10, 1, 10);
	c8.SetPos(0, 43.1552, 66.5116);
	c8.SetRotation(-90, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c8, 0);
	c8.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c9 = Cube(10, 1, 10);
	c9.SetPos(0, 53.1142, 65.2005);
	c9.SetRotation(-105, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c9, 0);
	c9.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c10 = Cube(10, 1, 10);
	c10.SetPos(0, 62.3945, 61.3564);
	c10.SetRotation(-120, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c10, 0);
	c10.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c11 = Cube(10, 1, 10);
	c11.SetPos(0, 70.3638, 55.2415);
	c11.SetRotation(-135, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c11, 0);
	c11.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c12 = Cube(10, 1, 10);
	c12.SetPos(0, 76.4787, 47.2722 );
	c12.SetRotation(-150, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c12, 0);
	c12.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c13 = Cube(10, 1, 10);
	c13.SetPos(0, 80.3228, 37.9919);
	c13.SetRotation(-165, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c13, 0);
	c13.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c14 = Cube(10, 1, 10);
	c14.SetPos(0, 81.6339, 28.0329 );
	c14.SetRotation(-180, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c14, 0);
	c14.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c15 = Cube(10, 1, 10);
	c15.SetPos(0, 80.3228, 18.0738);
	c15.SetRotation(-195, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c15, 0);
	c15.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c16 = Cube(10, 1, 10);
	c16.SetPos(0, 76.4787, 8.79347);
	c16.SetRotation(-210, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c16, 0);
	c16.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c17 = Cube(10, 1, 10);
	c17.SetPos(0, 70.3637, 0.824249);
	c17.SetRotation(-225, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c17, 0);
	c17.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c18 = Cube(10, 1, 10);
	c18.SetPos(0, 62.3945 , -5.29074);
	c18.SetRotation(-240, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c18, 0);
	c18.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c19 = Cube(10, 1, 10);
	c19.SetPos(0, 53.1142 , -9.13478);
	c19.SetRotation(-255, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c19, 0);
	c19.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c20 = Cube(10, 1, 10);
	c20.SetPos(0, 43.1552, -10.4459 );
	c20.SetRotation(-270, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c20, 0);
	c20.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c21 = Cube(10, 1, 10);
	c21.SetPos(0, 33.1961, -9.13478 );
	c21.SetRotation(-285, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c21, 0);
	c21.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c22 = Cube(10, 1, 10);
	c22.SetPos(0, 23.9158, -5.29073);
	c22.SetRotation(-300, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c22, 0);
	c22.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c23 = Cube(10, 1, 10);
	c23.SetPos(0, 15.9465 , 0.824259);
	c23.SetRotation(-315, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c23, 0);
	c23.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c24 = Cube(10, 1, 10);
	c24.SetPos(0, 9.83156 , 8.79347 );
	c24.SetRotation(-330, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c24, 0);
	c24.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c25 = Cube(10, 1, 10);
	c25.SetPos(0, 5.98752 , 18.0738 );
	c25.SetRotation(-345, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c25, 0);
	c25.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c26 = Cube(1, 4, 10);
	c26.SetPos(-5.5, 8.40233, 37.3448);
	c26.SetRotation(-15, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c26, 0);
	c26.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c27 = Cube(1, 4, 10);
	c27.SetPos(5.5, 8.40233, 37.3448);
	c27.SetRotation(-15, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c27, 0);
	c27.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c28 = Cube(1, 4, 10);
	c28.SetPos(-5.5, 11.9966, 46.0222);
	c28.SetRotation(-30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c28, 0);
	c28.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c29 = Cube(1, 4, 10);
	c29.SetPos(5.5, 11.9966, 46.0222);
	c29.SetRotation(-30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c29, 0);
	c29.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c30 = Cube(1, 4, 10);
	c30.SetPos(-5.5, 17.7143 , 53.4737 );
	c30.SetRotation(-45, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c30, 0);
	c30.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c31 = Cube(1, 4, 10);
	c31.SetPos(5.5, 17.7143 , 53.4737 );
	c31.SetRotation(-45, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c31, 0);
	c31.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c32 = Cube(1, 4, 10);
	c32.SetPos(-5.5, 25.1658, 59.1914);
	c32.SetRotation(-60, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c32, 0);
	c32.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c33 = Cube(1, 4, 10);
	c33.SetPos(5.5, 25.1658, 59.1914);
	c33.SetRotation(-60, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c33, 0);
	c33.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c34 = Cube(1, 4, 10);
	c34.SetPos(-5.5, 33.8432, 62.7857);
	c34.SetRotation(-75, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c34, 0);
	c34.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c35 = Cube(1, 4, 10);
	c35.SetPos(5.5, 33.8432, 62.7857);
	c35.SetRotation(-75, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c35, 0);
	c35.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c36 = Cube(1, 4, 10);
	c36.SetPos(-5.5, 43.1552, 64.0116);
	c36.SetRotation(-90, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c36, 0);
	c36.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c37 = Cube(1, 4, 10);
	c37.SetPos(5.5, 43.1552, 64.0116);
	c37.SetRotation(-90, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c37, 0);
	c37.physbody = pBodyCube;


	//x es la z
	//y es la x
	//z es la y
	c38 = Cube(1, 4, 10);
	c38.SetPos(-5.5, 52.4672 , 62.7857);
	c38.SetRotation(-105, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c38, 0);
	c38.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c39 = Cube(1, 4, 10);
	c39.SetPos(5.5, 52.4672, 62.7857);
	c39.SetRotation(-105, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c39, 0);
	c39.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c40 = Cube(1, 4, 10);
	c40.SetPos(-5.5, 61.1445, 59.1914 );
	c40.SetRotation(-120, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c40, 0);
	c40.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c41 = Cube(1, 4, 10);
	c41.SetPos(5.5, 61.1445, 59.1914);
	c41.SetRotation(-120, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c41, 0);
	c41.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c42 = Cube(1, 4, 10);
	c42.SetPos(-5.5, 68.596, 53.4737);
	c42.SetRotation(-135, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c42, 0);
	c42.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c43 = Cube(1, 4, 10);
	c43.SetPos(5.5, 68.596, 53.4737);
	c43.SetRotation(-135, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c43, 0);
	c43.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c44 = Cube(1, 4, 10);
	c44.SetPos(-5.5, 74.3137, 46.0222 );
	c44.SetRotation(-150, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c44, 0);
	c44.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c45 = Cube(1, 4, 10);
	c45.SetPos(5.5, 74.3137, 46.0222);
	c45.SetRotation(-150, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c45, 0);
	c45.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c46 = Cube(1, 4, 10);
	c46.SetPos(-5.5, 77.908 , 37.3448);
	c46.SetRotation(-165, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c46, 0);
	c46.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c47 = Cube(1, 4, 10);
	c47.SetPos(5.5, 77.908 , 37.3448);
	c47.SetRotation(-165, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c47, 0);
	c47.physbody = pBodyCube;


	//x es la z
	//y es la x
	//z es la y
	c48 = Cube(1, 4, 10);
	c48.SetPos(-5.5, 79.1339 , 28.0329);
	c48.SetRotation(-180, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c48, 0);
	c48.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c48 = Cube(1, 4, 10);
	c48.SetPos(5.5, 79.1339, 28.0329);
	c48.SetRotation(-180, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c48, 0);
	c48.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c49 = Cube(1, 4, 10);
	c49.SetPos(-5.5, 79.1339, 28.0329);
	c49.SetRotation(-180, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c49, 0);
	c49.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c50 = Cube(1, 4, 10);
	c50.SetPos(-5.5, 77.908, 18.7209);
	c50.SetRotation(-195, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c50, 0);
	c50.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c51 = Cube(1, 4, 10);
	c51.SetPos(5.5, 77.908, 18.7209 );
	c51.SetRotation(-195, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c51, 0);
	c51.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c52 = Cube(1, 4, 10);
	c52.SetPos(-5.5, 74.3137, 10.0435);
	c52.SetRotation(-210, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c52, 0);
	c52.physbody = pBodyCube;


	//x es la z
	//y es la x
	//z es la y
	c53 = Cube(1, 4, 10);
	c53.SetPos(5.5, 74.3137, 10.0435 );
	c53.SetRotation(-210, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c53, 0);
	c53.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c54 = Cube(1, 4, 10);
	c54.SetPos(-5.5, 68.596, 2.59203);
	c54.SetRotation(-225, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c54, 0);
	c54.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c55 = Cube(1, 4, 10);
	c55.SetPos(5.5, 68.596, 2.59203);
	c55.SetRotation(-225, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c55, 0);
	c55.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c56 = Cube(1, 4, 10);
	c56.SetPos(-5.5, 61.1446 , -3.12568 );
	c56.SetRotation(-240, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c56, 0);
	c56.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c57 = Cube(1, 4, 10);
	c57.SetPos(5.5, 61.1446, -3.12568);
	c57.SetRotation(-240, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c57, 0);
	c57.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c58 = Cube(1, 4, 10);
	c58.SetPos(-5.5, 52.4672, -6.71998);
	c58.SetRotation(-255, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c58, 0);
	c58.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c59 = Cube(1, 4, 10);
	c59.SetPos(5.5, 52.4672, -6.71998);
	c59.SetRotation(-255, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c59, 0);
	c59.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c60 = Cube(1, 4, 10);
	c60.SetPos(-5.5, 43.1552, -7.94592);
	c60.SetRotation(-270, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c60, 0);
	c60.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c61 = Cube(1, 4, 10);
	c61.SetPos(5.5, 43.1552, -7.94592);
	c61.SetRotation(-270, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c61, 0);
	c61.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c62 = Cube(1, 4, 10);
	c62.SetPos(-5.5, 33.8432 , -6.71997);
	c62.SetRotation(-285, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c62, 0);
	c62.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c63 = Cube(1, 4, 10);
	c63.SetPos(5.5, 33.8432, -6.71997);
	c63.SetRotation(-285, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c63, 0);
	c63.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c64 = Cube(1, 4, 10);
	c64.SetPos(-5.5, 25.1658 , -3.12567);
	c64.SetRotation(-300, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c64, 0);
	c64.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c65 = Cube(1, 4, 10);
	c65.SetPos(5.5, 25.1658, -3.12567);
	c65.SetRotation(-300, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c65, 0);
	c65.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c66 = Cube(1, 4, 10);
	c66.SetPos(-5.5, 17.7143, 2.59202 );
	c66.SetRotation(-315, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c66, 0);
	c66.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c67 = Cube(1, 4, 10);
	c67.SetPos(5.5, 17.7143, 2.59202);
	c67.SetRotation(-315, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c67, 0);
	c67.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c68 = Cube(1, 4, 10);
	c68.SetPos(-5.5, 11.9966, 10.0435);
	c68.SetRotation(-330, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c68, 0);
	c68.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c69 = Cube(1, 4, 10);
	c69.SetPos(5.5, 11.9966, 10.0435);
	c69.SetRotation(-330, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c69, 0);
	c69.physbody = pBodyCube;


	//x es la z
	//y es la x
	//z es la y
	c70 = Cube(1, 4, 10);
	c70.SetPos(-5.5, 8.40231, 18.7209);
	c70.SetRotation(-345, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c70, 0);
	c70.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c71 = Cube(1, 4, 10);
	c71.SetPos(5.5, 8.40231, 18.7209);
	c71.SetRotation(-345, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c71, 0);
	c71.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c72 = Cube(40, 1, 20);
	c72.SetPos(-49.0176, 4.41221, 28.0328);
	c72.SetRotation( 15, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c72, 0);
	c72.physbody = pBodyCube;

#pragma endregion

	return ret;
}

// Load assets
bool ModuleSceneIntro::CleanUp()
{
	LOG("Unloading Intro scene");

	return true;
}

// Update
update_status ModuleSceneIntro::Update(float dt)
{
	Plane p(0, 1, 0, 0);
	p.axis = true;
	p.Render();



	c0.Render();
	c1.Render();
	c2.Render();
	c3.Render();
	c4.Render();
	c5.Render();
	c6.Render();
	c7.Render();
	c8.Render();
	c9.Render();
	c10.Render();
	c11.Render();
	c12.Render();
	c13.Render();
	c14.Render();
	c15.Render();
	c16.Render();
	c17.Render();
	c18.Render();
	c19.Render();
	c20.Render();
	c21.Render();
	c22.Render();
	c23.Render();
	c24.Render();
	c25.Render();
	c26.Render();
	c27.Render();
	c28.Render();
	c29.Render();
	c30.Render();
	c31.Render();
	c32.Render();
	c33.Render();
	c34.Render();
	c35.Render();
	c36.Render();
	c37.Render();
	c38.Render();
	c39.Render();
	c40.Render();
	c41.Render();
	c42.Render();
	c43.Render();
	c44.Render();
	c45.Render();
	c46.Render();
	c47.Render();
	c48.Render();
	c49.Render();
	c50.Render();
	c51.Render();
	c52.Render();
	c53.Render();
	c54.Render();
	c55.Render();
	c56.Render();
	c57.Render();
	c58.Render();
	c59.Render();
	c60.Render();
	c61.Render();
	c62.Render();
	c63.Render();
	c64.Render();
	c65.Render();
	c67.Render();
	c68.Render();
	c69.Render();
	c70.Render();
	c71.Render();
	c72.Render();

	return UPDATE_CONTINUE;
}

void ModuleSceneIntro::OnCollision(PhysBody3D* body1, PhysBody3D* body2)
{
}

