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


	//x es la y de blender
	//y es la z
	//z es la x
	/*c0 = Cube(1, 4, 10);
	c0.SetPos(5.5, 9.17637, 23.0329);
	c0.SetRotation(-15, vec3 (1, 0, 0));
	pBodyCube = App->physics->AddBody(c0,0);
	c0.physbody = pBodyCube;*/

	//x es la z
	//y es la x
	//z es la y
	c1 = Cube(10, 1, 10);
	c1.SetPos(0, 4.67638, 28.0328);
	c1.SetRotation(0, vec3(1, 0, 0));
	pBodyCube = App->physics->AddBody(c1, 0);
	c1.physbody = pBodyCube;

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

	c1.Render();
	c2.Render();

	return UPDATE_CONTINUE;
}

void ModuleSceneIntro::OnCollision(PhysBody3D* body1, PhysBody3D* body2)
{
}