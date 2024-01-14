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

	//x es la z
	//y es la x
	//z es la y
	c73 = Cube(20, 1, 40);
	c73.SetPos(84.1326 , 4.69342 , 28.3756 );
	c73.SetRotation(-15, vec3(0, 0 , 1));
	pBodyCube = App->physics->AddBody(c73, 0);
	c73.physbody = pBodyCube;

	//x es la z 
	//y es la x
	//z es la y
	c74 = Cube(20, 1, 40);
	c74.SetPos(-279.575 , 15.0462 , 28.3756);
	c74.SetRotation(-15, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c74, 0);
	c74.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c75 = Cube(20, 1, 40);
	c75.SetPos(-316.335, 30.2725 , 28.3756);
	c75.SetRotation(-30, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c75, 0);
	c75.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c76 = Cube(20, 1, 40);
	c76.SetPos(-352.853 , 45.3989 , 28.3756);
	c76.SetRotation(-15, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c76, 0);
	c76.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c77 = Cube(20, 1, 40);
	c77.SetPos(-392.042 , 50.5583 , 28.3756);
	c77.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c77, 0);
	c77.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c78 = Cube(100, 1, 100);
	c78.SetPos(-462.042 , 50.5583 , 68.3756 );
	c78.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c78, 0);
	c78.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c79 = Cube(20, 1, 40);
	c79.SetPos(-502.042 , 50.5583 , 138.376 );
	c79.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c79, 0);
	c79.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c80 = Cube(20, 1, 40);
	c80.SetPos(-502.042 , 55.7517 , 177.824 );
	c80.SetRotation(-15, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c80, 0);
	c80.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c81 = Cube(20, 1, 40);
	c81.SetPos(-502.042 , 70.978 , 214.583 );
	c81.SetRotation(-30, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c81, 0);
	c81.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c82 = Cube(20, 1, 40);
	c82.SetPos(-502.042 , 95.1996 , 246.149 );
	c82.SetRotation(-45, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c82, 0);
	c82.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c83 = Cube(20, 1, 40);
	c83.SetPos(-502.042 , 119.262 , 277.508 );
	c83.SetRotation(-30, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c83, 0);
	c83.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c84 = Cube(20, 1, 40);
	c84.SetPos(-502.042 , 134.389 , 314.027 );
	c84.SetRotation(-15, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c84, 0);
	c84.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c85 = Cube(100, 1, 100);
	c85.SetPos(-462.042 , 139.55, 383.216 );
	c85.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c85, 0);
	c85.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c86 = Cube(20, 1, 40);
	c86.SetPos(-392.042, 139.548, 423.216);
	c86.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c86, 0);
	c86.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c87 = Cube(20, 1, 40);
	c87.SetPos(-352.594 , 144.742 , 423.216 );
	c87.SetRotation( 15, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c87, 0);
	c87.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c88 = Cube(20, 1, 40);
	c88.SetPos(-315.835 , 159.968 , 423.216 );
	c88.SetRotation(30, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c88, 0);
	c88.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c89 = Cube(20, 1, 40);
	c89.SetPos(-284.268, 184.189 , 423.216 );
	c89.SetRotation(45, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c89, 0);
	c89.physbody = pBodyCube;


	//x es la z
	//y es la x
	//z es la y
	c90 = Cube(20, 1, 40);
	c90.SetPos(-260.047 , 215.756 , 423.216 );
	c90.SetRotation(60, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c90, 0);
	c90.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c91 = Cube(20, 1, 40);
	c91.SetPos(-235.984 , 247.115 , 423.216 );
	c91.SetRotation(45, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c91, 0);
	c91.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c92 = Cube(40, 1, 20);
	c92.SetPos(-204.625 , 271.177 , 423.216);
	c92.SetRotation(30, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c92, 0);
	c92.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c93 = Cube(20, 1, 40);
	c93.SetPos(-168.107 , 286.304 , 423.216 );
	c93.SetRotation(15, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c93, 0);
	c93.physbody = pBodyCube;

	//x es la z 
	//y es la x
	//z es la y
	c94 = Cube(100, 1, 100);
	c94.SetPos(-98.9175 , 291.463 , 383.216 );
	c94.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c94, 0);
	c94.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c95 = Cube(20, 1, 40);
	c95.SetPos(-58.9175 , 291.463 , 313.216 );
	c95.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c95, 0);
	c95.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c96 = Cube(20, 1, 40);
	c96.SetPos( -58.9175 , 296.657 , 273.768 );
	c96.SetRotation(15, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c96, 0);
	c96.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c97 = Cube(20, 1, 40);
	c97.SetPos(-58.9175 , 311.883 , 237.008 );
	c97.SetRotation(30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c97, 0);
	c97.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c98 = Cube(20, 1, 40);
	c98.SetPos(-58.9175 , 336.104 , 205.442 );
	c98.SetRotation(45, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c98, 0);
	c98.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c99 = Cube(20, 1, 40);
	c99.SetPos(-58.9175 , 367.671 , 181.221 );
	c99.SetRotation(60, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c99, 0);
	c99.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c100 = Cube(20, 1, 40);
	c100.SetPos(-58.9175 , 399.03 , 157.158 );
	c100.SetRotation(45, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c100, 0);
	c100.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c101 = Cube(20, 1, 40);
	c101.SetPos(-58.9175, 423.092 , 125.799 );
	c101.SetRotation(30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c101, 0);
	c101.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c102 = Cube(20, 1, 40);
	c102.SetPos(-58.9175, 438.219 , 89.2804 );
	c102.SetRotation(15, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c102, 0);
	c102.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c103 = Cube(100, 1, 100);
	c103.SetPos(-18.9175 , 443.412 , 19.8325 );
	c103.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c103, 0);
	c103.physbody = pBodyCube;
	//x es la z
	//y es la x
	//z es la y
	c105 = Cube(20, 1, 40);
	c104.SetPos(51.0825 , 443.412 , -20.1675 );
	c104.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c104, 0);
	c104.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c105 = Cube(20, 1, 40);
	c105.SetPos(88.653 , 453.479 , -20.1675 );
	c105.SetRotation(30, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c105, 0);
	c105.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c106 = Cube(20, 1, 40);
	c106.SetPos(125.723 , 463.412 , -20.1675 );
	c106.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c106, 0);
	c106.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c107 = Cube(20, 1, 40);
	c107.SetPos(162.794 , 453.479 , -20.1675 );
	c107.SetRotation(-30, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c107, 0);
	c107.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c108 = Cube(20, 1, 40);
	c108.SetPos(200.365 , 443.412 , -20.1675 );
	c108.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c108, 0);
	c108.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c109 = Cube(100, 1, 100);
	c109.SetPos(270.365 , 443.412 , 19.8325 );
	c109.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c109, 0);
	c109.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c110 = Cube(20, 1, 40);
	c110.SetPos(310.365 , 443.412 , 89.8325 );
	c110.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c110, 0);
	c110.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c111 = Cube(20, 1, 40);
	c111.SetPos(310.365 , 438.253 , 129.022 );
	c111.SetRotation(15, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c111, 0);
	c111.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c112 = Cube(20, 1, 40);
	c112.SetPos(310.365 , 423.127 , 165.54 );
	c112.SetRotation(30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c112, 0);
	c112.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c113 = Cube(20, 1, 40);
	c113.SetPos(310.365 , 399.064 , 196.899 );
	c113.SetRotation(45, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c113, 0);
	c113.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c114 = Cube(20, 1, 40);
	c114.SetPos(310.365, 367.705 , 220.962 );
	c114.SetRotation(60, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c114, 0);
	c114.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c115 = Cube(20, 1, 100);
	c115.SetPos(310.365, 302.209 , 243.853 );
	c115.SetRotation(75, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c115, 0);
	c115.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c116 = Cube(20, 1, 40);
	c116.SetPos(310.365 , 236.471 , 266.844 );
	c116.SetRotation(60, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c116, 0);
	c116.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c117 = Cube(20, 1, 40);
	c117.SetPos(310.365, 204.905 , 291.065 );
	c117.SetRotation(45, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c117, 0);
	c117.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c118 = Cube(20, 1, 40);
	c118.SetPos(310.365, 180.683 , 322.632 );
	c118.SetRotation(30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c118, 0);
	c118.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c119 = Cube(20, 1, 40);
	c119.SetPos(310.365, 165.457 , 359.391 );
	c119.SetRotation(15, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c119, 0);
	c119.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c120 = Cube(20, 1, 100);
	c120.SetPos(310.365, 160.264 , 428.839 );
	c120.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c120, 0);
	c120.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c121 = Cube(100, 1, 100);
	c121.SetPos(270.365 , 160.264 , 528.839 );
	c121.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c121, 0);
	c121.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c122 = Cube(100, 1, 100);
	c122.SetPos(170.365 , 160.264 , 528.839 );
	c122.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c122, 0);
	c122.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c123 = Cube(20, 1, 100);
	c123.SetPos(130.365 , 160.264 , 428.839 );
	c123.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c123, 0);
	c123.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c124 = Cube(20, 1, 5);
	c124.SetPos(130.365 , 161.581 , 376.424 );
	c124.SetRotation(30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c124, 0);
	c124.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c125 = Cube(20, 1, 5);
	c125.SetPos(130.365 , 162.764 , 372.009 );
	c125.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c125, 0);
	c125.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c126 = Cube(20, 1, 5);
	c126.SetPos(130.365 , 161.581 , 367.594 );
	c126.SetRotation(-30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c126, 0);
	c126.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c127 = Cube(20, 1, 10);
	c127.SetPos(130.365 , 160.264 , 360.179 );
	c127.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c127, 0);
	c127.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c128 = Cube(20, 1, 5);
	c128.SetPos(130.365, 161.581 , 352.764 );
	c128.SetRotation(30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c128, 0);
	c128.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c129 = Cube(20, 1, 5);
	c129.SetPos(130.365, 162.764, 348.349 );
	c129.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c129, 0);
	c129.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c130 = Cube(20, 1, 5);
	c130.SetPos(130.365, 161.581, 343.934 );
	c130.SetRotation(-30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c130, 0);
	c130.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c131 = Cube(20, 1, 10);
	c131.SetPos(130.365 , 161.581 , 336.518 );
	c131.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c131, 0);
	c131.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c132 = Cube(20, 1, 5);
	c132.SetPos(130.365 , 423.127, 329.103 );
	c132.SetRotation(30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c132, 0);
	c132.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c133 = Cube(20, 1, 5);
	c133.SetPos(130.365 , 162.764 , 324.688 );
	c133.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c133, 0);
	c133.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c134 = Cube(20, 1, 40);
	c134.SetPos(130.365 , 161.581 , 320.273 );
	c134.SetRotation(-30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c134, 0);
	c134.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c135 = Cube(20, 1, 10);
	c135.SetPos(130.365 , 160.264 , 312.858 );
	c135.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c135, 0);
	c135.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c136 = Cube(20, 1, 5);
	c136.SetPos(130.365 , 161.581 , 305.443 );
	c136.SetRotation(30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c136, 0);
	c136.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c137 = Cube(20, 1, 5);
	c137.SetPos(130.365 , 162.764 , 301.028 );
	c137.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c137, 0);
	c137.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c138 = Cube(20, 1, 5);
	c138.SetPos(130.365, 161.581 , 296.613 );
	c138.SetRotation(-30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c138, 0);
	c138.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c139 = Cube(20, 1, 10);
	c139.SetPos(130.365, 160.264 , 289.198 );
	c139.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c139, 0);
	c139.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c140 = Cube(20, 1, 5);
	c140.SetPos(130.365, 161.581 , 281.783 );
	c140.SetRotation(30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c140, 0);
	c140.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c141 = Cube(20, 1, 5);
	c141.SetPos(130.365, 162.764 , 277.368 );
	c141.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c141, 0);
	c141.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c142 = Cube(20, 1, 5);
	c142.SetPos(130.365, 161.581 , 272.953 );
	c142.SetRotation(-30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c142, 0);
	c142.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c143 = Cube(20, 1, 10);
	c143.SetPos(130.365, 160.264 , 265.538 );
	c143.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c143, 0);
	c143.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c144 = Cube(20, 1, 5);
	c144.SetPos(130.365, 161.581, 258.123 );
	c144.SetRotation(30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c144, 0);
	c144.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c145 = Cube(20, 1, 5);
	c145.SetPos(130.365, 162.764, 253.708 );
	c145.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c145, 0);
	c145.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c146 = Cube(20, 1, 5);
	c146.SetPos(130.365, 161.581, 249.292 );
	c146.SetRotation(-30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c146, 0);
	c146.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c147 = Cube(20, 1, 10);
	c147.SetPos(130.365, 160.264, 241.877 );
	c147.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c147, 0);
	c147.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c148 = Cube(20, 1, 5);
	c148.SetPos(130.365, 161.581, 234.462 );
	c148.SetRotation(30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c148, 0);
	c148.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c149 = Cube(20, 1, 5);
	c149.SetPos(130.365, 162.764, 230.047 );
	c149.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c149, 0);
	c149.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c150 = Cube(20, 1, 5);
	c150.SetPos(130.365, 161.581, 225.632 );
	c150.SetRotation(-30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c150, 0);
	c150.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c151 = Cube(20, 1, 100);
	c151.SetPos(130.365 , 160.264 , 173.217 );
	c151.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c151, 0);
	c151.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c152 = Cube(20, 1, 40);
	c152.SetPos(130.365, 165.457 , 103.769 );
	c152.SetRotation(15, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c152, 0);
	c152.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c153 = Cube(20, 1, 40);
	c153.SetPos(130.365, 180.683 , 67.0096 );
	c153.SetRotation(30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c153, 0);
	c153.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c154 = Cube(20, 1, 100);
	c154.SetPos(130.365, 190.75 , -131.589 );
	c154.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c154, 0);
	c154.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c155 = Cube(100, 1, 100);
	c155.SetPos(170.365 , 190.75 , -231.589 );
	c155.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c155, 0);
	c155.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c156 = Cube(100, 1, 100);
	c156.SetPos(270.365 , 190.75 , -231.589 );
	c156.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c156, 0);
	c156.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c157 = Cube(100, 1, 100);
	c157.SetPos(270.365 , 190.75 , -131.589 );
	c157.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c157, 0);
	c157.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c158 = Cube(20, 1, 40);
	c158.SetPos(200.365 , 190.75 , -91.5889 );
	c158.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c158, 0);
	c158.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c159 = Cube(20, 1, 40);
	c159.SetPos(160.917 , 195.944 , -91.5889 );
	c159.SetRotation(-15, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c159, 0);
	c159.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c160 = Cube(20, 1, 100);
	c160.SetPos(-59.8899 , 201.137 , -91.5889 );
	c160.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c160, 0);
	c160.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c161 = Cube(100, 1, 100);
	c161.SetPos(-159.89 , 201.137 , -51.5889 );
	c161.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c161, 0);
	c161.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c162 = Cube(100, 1, 100);
	c162.SetPos(-159.89 , 201.137 , 48.4111 );
	c162.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c162, 0);
	c162.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c163 = Cube(20, 1, 100);
	c163.SetPos(-59.8899 , 201.137 , 88.4111 );
	c163.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c163, 0);
	c163.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c164 = Cube(100, 1, 100);
	c164.SetPos(-40.1101 , 201.137 , 128.411 );
	c164.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c164, 0);
	c164.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c165 = Cube(100, 1, 100);
	c165.SetPos(120.11, 201.137 , 228.411 );
	c165.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c165, 0);
	c165.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c166 = Cube(100, 1, 100);
	c166.SetPos(220.11 , 201.137, 228.411 );
	c166.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c166, 0);
	c166.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c167 = Cube(100, 1, 100);
	c167.SetPos(300.11 , 201.137, 128.411 );
	c167.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c167, 0);
	c167.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c168 = Cube(20, 1, 40);
	c168.SetPos(370.11 , 201.137 , 88.4111 );
	c168.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c168, 0);
	c168.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c169 = Cube(20, 1, 40);
	c169.SetPos(400.11 , 201.137 , 98.4111 );
	c169.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c169, 0);
	c169.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c170 = Cube(20, 1, 40);
	c170.SetPos(373.039 , 191.204 , 108.411 );
	c170.SetRotation(30, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c170, 0);
	c170.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c171 = Cube(20, 1, 40);
	c171.SetPos(345.469 , 181.137 , 118.411 );
	c171.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c171, 0);
	c171.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c172 = Cube(20, 1, 40);
	c172.SetPos(372.539 , 171.204 , 128.411 );
	c172.SetRotation(-30, vec3(0, 0, 1));
	pBodyCube = App->physics->AddBody(c172, 0);
	c172.physbody = pBodyCube;

	//x es la z
	//y es la x
	//z es la y
	c173 = Cube(20, 1, 40);
	c173.SetPos(400.11 , 161.137 , 138.411 );
	c173.SetRotation(0, vec3(0, 0, 0));
	pBodyCube = App->physics->AddBody(c173, 0);
	c173.physbody = pBodyCube;

	c300 = Cube(5, 20, 1);
	c300.SetPos(191.25, -169.76, 319.9);
	c300.SetRotation(-3.8698, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c300, 0);
	c300.physbody = pBodyCube;

	c301 = Cube(5, 20, 1);
	c301.SetPos(191.25, -150.93, 317.55);
	c301.SetRotation(-11.452, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c301, 0);
	c301.physbody = pBodyCube;

	c302 = Cube(5, 20, 1);
	c302.SetPos(191.25, -132.3, 312);
	c301.SetRotation(-22.156, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c302, 0);
	c302.physbody = pBodyCube;

	c303 = Cube(5, 20, 1);
	c303.SetPos(191.25, -115.67, 302.95);
	c303.SetRotation(-35.594, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c303, 0);
	c303.physbody = pBodyCube;

	c304 = Cube(5, 20, 1);
	c304.SetPos(191.25, -101.82, 191.25);
	c304.SetRotation(-50.733, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c304, 0);
	c304.physbody = pBodyCube;

	c305 = Cube(5, 20, 1);
	c305.SetPos(191.25, -91.769, 273.99);
	c305.SetRotation(-64.829, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c305, 0);
	c305.physbody = pBodyCube;

	c306 = Cube(5, 20, 1);
	c306.SetPos(191.25, -85.433, 255.61);
	c306.SetRotation(-76.253, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c306, 0);
	c306.physbody = pBodyCube;

	c307 = Cube(5, 20, 1);
	c307.SetPos(191.25, -82.437, 236.88);
	c307.SetRotation(-84.436, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c307, 0);
	c307.physbody = pBodyCube;

	c308 = Cube(5, 20, 1);
	c308.SetPos(191.25, -101.99, 230.74);
	c308.SetRotation(-85.579, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c308, 0);
	c308.physbody = pBodyCube;

	c309 = Cube(5, 20, 1);
	c309.SetPos(191.25, -105.62, 251.14);
	c309.SetRotation(-73.54, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c309, 0);
	c309.physbody = pBodyCube;

	c310 = Cube(5, 20, 1);
	c310.SetPos(191.25, -114.21, 269.94);
	c310.SetRotation(-56, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c310, 0);
	c310.physbody = pBodyCube;

	c311 = Cube(5, 20, 1);
	c311.SetPos(191.25, -128.64, 284.69);
	c311.SetRotation(-35.106, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c311, 0);
	c311.physbody = pBodyCube;

	c312 = Cube(5, 20, 1);
	c312.SetPos(191.25, -147.27, 293.68);
	c312.SetRotation(-17.52, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c312, 0);
	c312.physbody = pBodyCube;

	c313 = Cube(5, 20, 1);
	c313.SetPos(191.25, -167.62, 297.61);
	c313.SetRotation(-5.6095, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c313, 0);
	c313.physbody = pBodyCube;

	c314 = Cube(5, 20, 1);
	c314.SetPos(191.25, -188.26, 298.04);
	c314.SetRotation(2.9257, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c314, 0);
	c314.physbody = pBodyCube;

	c315 = Cube(5, 20, 1);
	c315.SetPos(191.25, -209.28, 295.18);
	c315.SetRotation(13.786, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c315, 0);
	c315.physbody = pBodyCube;

	c316 = Cube(5, 20, 1);
	c316.SetPos(191.25, -228.55, 287.69);
	c316.SetRotation(29.84, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c316, 0);
	c316.physbody = pBodyCube;

	c317 = Cube(5, 20, 1);
	c317.SetPos(191.25, -244.4, 274.48);
	c317.SetRotation(50.294, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c317, 0);
	c317.physbody = pBodyCube;

	c318 = Cube(5, 20, 1);
	c318.SetPos(191.25, -254.61, 256.24);
	c318.SetRotation(68.889, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c318, 0);
	c318.physbody = pBodyCube;

	c319 = Cube(5, 20, 1);
	c319.SetPos(191.25, -259.59, 236.04);
	c319.SetRotation(82.571, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c319, 0);
	c319.physbody = pBodyCube;

	c320 = Cube(5, 20, 1);
	c320.SetPos(191.25, -260.56, 214.55);
	c320.SetRotation(91.9, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c320, 0);
	c320.physbody = pBodyCube;

	c321 = Cube(5, 20, 1);
	c321.SetPos(191.25, -258.1, 193.28);
	c321.SetRotation(102.46, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c321, 0);
	c321.physbody = pBodyCube;

	c322 = Cube(5, 20, 1);
	c322.SetPos(191.25, -251.27, 174.27);
	c322.SetRotation(117.79, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c322, 0);
	c322.physbody = pBodyCube;

	c323 = Cube(5, 20, 1);
	c323.SetPos(191.25, -238.94, 158.38);
	c323.SetRotation(137.7, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c323, 0);
	c323.physbody = pBodyCube;

	c324 = Cube(5, 20, 1);
	c324.SetPos(191.25, -221.83, 147.53);
	c324.SetRotation(156.74, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c324, 0);
	c324.physbody = pBodyCube;

	c325 = Cube(5, 20, 1);
	c325.SetPos(191.25, -202.27, 141.99);
	c325.SetRotation(170.57, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c325, 0);
	c325.physbody = pBodyCube;

	c326 = Cube(5, 20, 1);
	c326.SetPos(191.25, -181.59, 140.36);
	c326.SetRotation(91.9, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c326, 0);
	c326.physbody = pBodyCube;

	c327 = Cube(5, 20, 1);
	c327.SetPos(201.64, -101.3, -119.62);
	c327.SetRotation(-86.914, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c327, 0);
	c327.physbody = pBodyCube;

	c328 = Cube(5, 20, 1);
	c328.SetPos(201.64, -98.819, -140.22);
	c328.SetRotation(-78.699, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c328, 0);
	c328.physbody = pBodyCube;

	c329 = Cube(5, 20, 1);
	c329.SetPos(201.64, -92.463, -160.97);
	c329.SetRotation(-66.603, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c329, 0);
	c329.physbody = pBodyCube;

	c330 = Cube(5, 20, 1);
	c330.SetPos(201.64, -81.53, -179.3);
	c330.SetRotation(-50.979, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c330, 0);
	c330.physbody = pBodyCube;

	c331 = Cube(5, 20, 1);
	c331.SetPos(201.64, -64.943, -194.18);
	c331.SetRotation(-33.243, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c331, 0);
	c331.physbody = pBodyCube;


	c332 = Cube(5, 20, 1);
	c332.SetPos(201.64, -45.41, -203.57);
	c332.SetRotation(-18.582, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c332, 0);
	c332.physbody = pBodyCube;

	c333 = Cube(5, 20, 1);
	c333.SetPos(201.64, -24.879, -208.27);
	c333.SetRotation(-8.2048, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c333, 0);
	c333.physbody = pBodyCube;

	c334 = Cube(5, 20, 1);
	c334.SetPos(201.64, -4.1852, -209.81);
	c334.SetRotation(-0.79932, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c334, 0);
	c334.physbody = pBodyCube;

	c335 = Cube(5, 20, 1);
	c335.SetPos(201.64, 16.873, -208.89);
	c335.SetRotation(6.2442, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c335, 0);
	c335.physbody = pBodyCube;

	c336 = Cube(5, 20, 1);
	c336.SetPos(201.64, 38.187, -204.77);
	c336.SetRotation(16.262, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c336, 0);
	c336.physbody = pBodyCube;

	c337 = Cube(5, 20, 1);
	c337.SetPos(201.64, 57.35, -196.9);
	c337.SetRotation(28.294, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c337, 0);
	c337.physbody = pBodyCube;

	c338 = Cube(5, 20, 1);
	c338.SetPos(201.64, 74.017, -184.12);
	c338.SetRotation(45.781, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c338, 0);
	c338.physbody = pBodyCube;

	c339 = Cube(5, 20, 1);
	c339.SetPos(201.64, 86.716, -166.57);
	c339.SetRotation(62.495, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c339, 0);
	c339.physbody = pBodyCube;

	c340 = Cube(5, 20, 1);
	c340.SetPos(201.64, 94.068, -146.85);
	c340.SetRotation(75.293, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c340, 0);
	c340.physbody = pBodyCube;

	c341 = Cube(5, 20, 1);
	c341.SetPos(201.64, 97.637, -125.77);
	c341.SetRotation(84.703, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c341, 0);
	c341.physbody = pBodyCube;

	c342 = Cube(5, 20, 1);
	c342.SetPos(201.64, 77.79, -122.57);
	c342.SetRotation(84.676, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c342, 0);
	c342.physbody = pBodyCube;

	c343 = Cube(5, 20, 1);
	c343.SetPos(201.64, 73.977, -142.91);
	c343.SetRotation(72.808, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c343, 0);
	c343.physbody = pBodyCube;

	c344 = Cube(5, 20, 1);
	c344.SetPos(201.64, 65.124, -161.57);
	c344.SetRotation(55.393, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c344, 0);
	c344.physbody = pBodyCube;

	c345 = Cube(5, 20, 1);
	c345.SetPos(201.64, 50.329, -176.28);
	c345.SetRotation(34.567, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c345, 0);
	c345.physbody = pBodyCube;

	c346 = Cube(5, 20, 1);
	c346.SetPos(201.64, 31.675, -185.12);
	c346.SetRotation(17, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c346, 0);
	c346.physbody = pBodyCube;

	c347 = Cube(5, 20, 1);
	c347.SetPos(201.64, 11.356, -189.05);
	c347.SetRotation(5, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c347, 0);
	c347.physbody = pBodyCube;

	c348 = Cube(5, 20, 1);
	c348.SetPos(201.64, -9.6177, -189.35);
	c348.SetRotation(-3, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c348, 0);
	c348.physbody = pBodyCube;

	c349 = Cube(5, 20, 1);
	c349.SetPos(201.64, -30.627, -186.37);
	c349.SetRotation(-14, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c349, 0);
	c349.physbody = pBodyCube;

	c350 = Cube(5, 20, 1);
	c350.SetPos(201.64, -49.828, -178.71);
	c350.SetRotation(-30, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c350, 0);
	c350.physbody = pBodyCube;

	c351 = Cube(5, 20, 1);
	c351.SetPos(201.64, -65.185, -165.71);
	c351.SetRotation(-50, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c351, 0);
	c351.physbody = pBodyCube;

	c352 = Cube(5, 20, 1);
	c352.SetPos(201.64, -75.369, -148.05);
	c352.SetRotation(-68, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c352, 0);
	c352.physbody = pBodyCube;

	c353 = Cube(5, 20, 1);
	c353.SetPos(201.64, -80.392, -127.98);
	c353.SetRotation(-82, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c353, 0);
	c353.physbody = pBodyCube;

	c354 = Cube(5, 20, 1);
	c354.SetPos(201.64, 98.829, 0.62167);
	c354.SetRotation(85, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c354, 0);
	c354.physbody = pBodyCube;

	c355 = Cube(5, 20, 1);
	c355.SetPos(201.64, 102.8, 21.236);
	c355.SetRotation(72, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c355, 0);
	c355.physbody = pBodyCube;

	c356 = Cube(5, 20, 1);
	c356.SetPos(201.64, 111.37, 39.064);
	c356.SetRotation(55, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c356, 0);
	c356.physbody = pBodyCube;

	c357 = Cube(5, 20, 1);
	c357.SetPos(201.64, 125.95, 54.052);
	c357.SetRotation(35, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c357, 0);
	c357.physbody = pBodyCube;

	c358 = Cube(5, 20, 1);
	c358.SetPos(201.64, 144.63, 63.558);
	c358.SetRotation(19, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c358, 0);
	c358.physbody = pBodyCube;

	c359 = Cube(5, 20, 1);
	c359.SetPos(201.64, 165.04, 68.459);
	c359.SetRotation(8, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c359, 0);
	c359.physbody = pBodyCube;

	c360 = Cube(5, 20, 1);
	c360.SetPos(201.64, 187.17, 70.055);
	c360.SetRotation(2.5, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c360, 0);
	c360.physbody = pBodyCube;

	c361 = Cube(5, 20, 1);
	c361.SetPos(201.64, 209.29, 71.766);
	c361.SetRotation(9, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c361, 0);
	c361.physbody = pBodyCube;

	c362 = Cube(5, 20, 1);
	c362.SetPos(201.64, 230.1, 77.388);
	c362.SetRotation(22.274, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c362, 0);
	c362.physbody = pBodyCube;

	c363 = Cube(5, 20, 1);
	c363.SetPos(201.64, 257.77, 87.531);
	c363.SetRotation(38, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c363, 0);
	c363.physbody = pBodyCube;

	c364 = Cube(5, 20, 1);
	c364.SetPos(201.64, 261.91, 102.98);
	c364.SetRotation(56, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c364, 0);
	c364.physbody = pBodyCube;

	c365 = Cube(5, 20, 1);
	c365.SetPos(201.64, 271.17, 121.8);
	c365.SetRotation(70, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c365, 0);
	c365.physbody = pBodyCube;

	c366 = Cube(5, 20, 1);
	c366.SetPos(201.64, 276.18, 141.59);
	c366.SetRotation(80, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c366, 0);
	c366.physbody = pBodyCube;

	c367 = Cube(5, 20, 1);
	c367.SetPos(201.64, 278.25, 162.51);
	c367.SetRotation(87, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c367, 0);
	c367.physbody = pBodyCube;

	c368 = Cube(5, 20, 1);
	c368.SetPos(201.64, 277.87, 183.54);
	c368.SetRotation(94, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c368, 0);
	c368.physbody = pBodyCube;

	c369 = Cube(5, 20, 1);
	c369.SetPos(201.64, 275.08, 204.36);
	c369.SetRotation(102, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c369, 0);
	c369.physbody = pBodyCube;

	c370 = Cube(5, 20, 1);
	c370.SetPos(201.64, 268.84, 224.41);
	c370.SetRotation(113, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c370, 0);
	c370.physbody = pBodyCube;

	c371 = Cube(5, 20, 1);
	c371.SetPos(201.64, 258.42, 241.91);
	c371.SetRotation(128, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c371, 0);
	c371.physbody = pBodyCube;

	c372 = Cube(5, 20, 1);
	c372.SetPos(201.64, 243.01, 256.07);
	c372.SetRotation(146, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c372, 0);
	c372.physbody = pBodyCube;

	c373 = Cube(5, 20, 1);
	c373.SetPos(201.64, 224.63, 264.9);
	c373.SetRotation(161.8, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c373, 0);
	c373.physbody = pBodyCube;

	c374 = Cube(5, 20, 1);
	c374.SetPos(201.64, 204.08, 269.23);
	c374.SetRotation(173, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c374, 0);
	c374.physbody = pBodyCube;
	
	


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
	c66.Render();
	c67.Render();
	c68.Render();
	c69.Render();
	c70.Render();
	c71.Render();
	c72.Render();
	c73.Render();
	c74.Render();
	c75.Render();
	c76.Render();
	c77.Render();
	c78.Render();
	c79.Render();
	c80.Render();
	c81.Render();
	c82.Render();
	c83.Render();
	c84.Render();
	c85.Render();
	c86.Render();
	c87.Render();
	c88.Render();
	c89.Render();
	c90.Render();
	c91.Render();
	c92.Render();
	c93.Render();
	c94.Render();
	c95.Render();
	c96.Render();
	c97.Render();
	c98.Render();
	c99.Render();
	c100.Render();
	c101.Render();
	c102.Render();
	c103.Render();
	c104.Render();
	c105.Render();
	c106.Render();
	c107.Render();
	c108.Render();
	c109.Render();
	c110.Render();
	c111.Render();
	c112.Render();
	c113.Render();
	c114.Render();
	c115.Render();
	c116.Render();
	c117.Render();
	c118.Render();
	c119.Render();
	c120.Render();
	c121.Render();
	c122.Render();
	c123.Render();
	c124.Render();
	c125.Render();
	c126.Render();
	c127.Render();
	c128.Render();
	c129.Render();
	c130.Render();
	c131.Render();
	c132.Render();
	c133.Render();
	c134.Render();
	c135.Render();
	c136.Render();
	c137.Render();
	c138.Render();
	c139.Render();
	c140.Render();
	c141.Render();
	c142.Render();
	c143.Render();
	c144.Render();
	c145.Render();
	c146.Render();
	c147.Render();
	c148.Render();
	c149.Render();
	c150.Render();
	c151.Render();
	c152.Render();
	c153.Render();
	c154.Render();
	c155.Render();
	c156.Render();
	c157.Render();
	c158.Render();
	c159.Render();
	c160.Render();
	c161.Render();
	c162.Render();
	c163.Render();
	c164.Render();
	c165.Render();
	c166.Render();
	c167.Render();
	c168.Render();
	c169.Render();
	c170.Render();
	c171.Render();
	c172.Render();
	c173.Render();

	c300.Render();
	c301.Render();
	c302.Render();
	c303.Render();
	c304.Render();
	c305.Render();
	c306.Render();
	c307.Render();
	c308.Render();
	c309.Render();
	c310.Render();
	c311.Render();
	c312.Render();
	c313.Render();
	c314.Render();
	c315.Render();
	c316.Render();
	c317.Render();
	c318.Render();
	c319.Render();
	c320.Render();
	c321.Render();
	c322.Render();
	c323.Render();
	c324.Render();
	c325.Render();
	c326.Render();
	c327.Render();
	c328.Render();
	c329.Render();
	c330.Render();
	c331.Render();
	c332.Render();
	c333.Render();
	c334.Render();
	c335.Render();
	c336.Render();
	c337.Render();
	c338.Render();
	c339.Render();
	c340.Render();
	c341.Render();
	c342.Render();
	c343.Render();
	c344.Render();
	c345.Render();
	c346.Render();
	c347.Render();
	c348.Render();
	c349.Render();
	c350.Render();
	c351.Render();
	c352.Render();
	c353.Render();
	c354.Render();
	c355.Render();
	c356.Render();
	c357.Render();
	c358.Render();
	c359.Render();
	c360.Render();
	c361.Render();
	c362.Render();
	c363.Render();
	c364.Render();
	c365.Render();
	c366.Render();
	c367.Render();
	c368.Render();
	c369.Render();
	c370.Render();
	c371.Render();
	c372.Render();
	c373.Render();
	c374.Render();

	return UPDATE_CONTINUE;
}

void ModuleSceneIntro::OnCollision(PhysBody3D* body1, PhysBody3D* body2)
{
}

