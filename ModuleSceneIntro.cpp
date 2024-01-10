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


	return UPDATE_CONTINUE;
}

void ModuleSceneIntro::OnCollision(PhysBody3D* body1, PhysBody3D* body2)
{
}

