#include "Globals.h"
#include "Application.h"
#include "ModulePlayer.h"
#include "Primitive.h"
#include "PhysVehicle3D.h"
#include "PhysBody3D.h"

ModulePlayer::ModulePlayer(Application* app, bool start_enabled) : Module(app, start_enabled), vehicle(NULL)
{
	turn = acceleration = brake = 0.0f;
}

ModulePlayer::~ModulePlayer()
{}

// Load assets
bool ModulePlayer::Start()
{
	LOG("Loading player");

	 //Car properties ----------------------------------------
	 //Hitbox
	car.chassis1_size.Set(3.5f, 3, 7);
	// Respaldo
	car.chassis2_size.Set(2, 2, 0.5f);
	// Asiento
	car.chassis3_size.Set(2, 0.5f, 2);
	// Marco Volante
	car.chassis4_size.Set(2, 1.75f, 0.5f);
	// Zona motor
	car.chassis5_size.Set(2, 0.75f, 3);
	// aleron delantero
	car.chassis6_size.Set(4, 0.25, 1);
	// lateral der
	car.chassis7_size.Set(0.9f, 0.5f, 3);
	// lateral iz
	car.chassis8_size.Set(0.9f, 0.5f, 3);
	// maletero
	car.chassis9_size.Set(2.5f, 1.5f, 1.5f);
	// aleron
	car.chassis10_size.Set(3.25f, 0.25f, 1);
	// pata aleron der
	car.chassis11_size.Set(0.25f, 0.5f, 0.25f);
	// pata aleron iz
	car.chassis12_size.Set(0.25f, 0.5f, 0.25f);
	// tubo der
	car.chassis13_size.Set(0.75f, 0.5f, 1);
	// tubo iz
	car.chassis14_size.Set(0.75f, 0.5f, 1);
	// Volante
	car.chassis15_size.Set(1, 0.5f, 0.25f);
	// aleron delante delante
	car.chassis16_size.Set(2.5f, 0.25f, 1.5f);
	// Zona motor up
	car.chassis17_size.Set(2, 0.5f, 2);
	// tubo der up
	car.chassis18_size.Set(0.75f, 1, 0.5f);
	// tubo iz up
	car.chassis19_size.Set(0.75f, 1, 0.5f);

	// Hitbox
	car.chassis1_offset.Set(0, 1, 0);
	// Respaldo
	car.chassis2_offset.Set(0, 1.5f, -1.5f);
	// Asiento
	car.chassis3_offset.Set(0, 0.5f, -0.5f);
	// Marco Volante
	car.chassis4_offset.Set(0, 0.75f, 0.75f);
	// Zona motor
	car.chassis5_offset.Set(0, 0.25f, 2.5f);
	// aleron delantero
	car.chassis6_offset.Set(0, 0, 3.5f);
	// lateral der
	car.chassis7_offset.Set(-1.5f, 0, 0);
	// lateral iz
	car.chassis8_offset.Set(1.5f, 0, 0);
	// maletero
	car.chassis9_offset.Set(0, 0.75f, -2.5f);
	// aleron
	car.chassis10_offset.Set(0, 2, -2.75f);
	// pata aleron der
	car.chassis11_offset.Set(-0.75f, 1.75f, -2.75f);
	// pata aleron iz
	car.chassis12_offset.Set(0.75f, 1.75f, -2.75f);
	// tubo der
	car.chassis13_offset.Set(-1, 0, -3.25f);
	// tubo iz
	car.chassis14_offset.Set(1, 0, -3.25f);
	// Volante
	car.chassis15_offset.Set(0, 1.75f, 0.25f);
	// aleron delantero delante
	car.chassis16_offset.Set(0, 0, 4);
	// zona motor up
	car.chassis17_offset.Set(0, 0.75f, 2);
	// tubo der up
	car.chassis18_offset.Set(-1, 0.5f, -3.5f);
	// tubo iz up
	car.chassis19_offset.Set(1, 0.5f, -3.5f);

	car.mass = 500.0f;
	car.suspensionStiffness = 15.88f;
	car.suspensionCompression = 0.83f;
	car.suspensionDamping = 10.88f;
	car.maxSuspensionTravelCm = 1000.0f;
	car.frictionSlip = 50.5;
	car.maxSuspensionForce = 6000.0f;


	// Wheel properties ---------------------------------------
	float connection_height = 1.2f;
	float wheel_radius = 1;
	float wheel_width = 0.5f;
	float suspensionRestLength = 1.2f;

	// Don't change anything below this line ------------------

	float half_width = car.chassis1_size.x * 0.5f;
	float half_length = car.chassis1_size.z * 0.5f;

	
	vec3 direction(0,-1,0);
	vec3 axis(-1,0,0);
	
	car.num_wheels = 4;
	car.wheels = new Wheel[4];

	// FRONT-LEFT ------------------------
	car.wheels[0].connection.Set(half_width - 0.3f * wheel_width, connection_height, half_length - wheel_radius);
	car.wheels[0].direction = direction;
	car.wheels[0].axis = axis;
	car.wheels[0].suspensionRestLength = suspensionRestLength;
	car.wheels[0].radius = wheel_radius;
	car.wheels[0].width = wheel_width;
	car.wheels[0].front = true;
	car.wheels[0].drive = true;
	car.wheels[0].brake = false;
	car.wheels[0].steering = true;

	// FRONT-RIGHT ------------------------
	car.wheels[1].connection.Set(-half_width + 0.3f * wheel_width, connection_height, half_length - wheel_radius);
	car.wheels[1].direction = direction;
	car.wheels[1].axis = axis;
	car.wheels[1].suspensionRestLength = suspensionRestLength;
	car.wheels[1].radius = wheel_radius;
	car.wheels[1].width = wheel_width;
	car.wheels[1].front = true;
	car.wheels[1].drive = true;
	car.wheels[1].brake = false;
	car.wheels[1].steering = true;

	// REAR-LEFT ------------------------
	car.wheels[2].connection.Set(half_width - 0.3f * wheel_width, connection_height, -half_length + wheel_radius);
	car.wheels[2].direction = direction;
	car.wheels[2].axis = axis;
	car.wheels[2].suspensionRestLength = suspensionRestLength;
	car.wheels[2].radius = wheel_radius;
	car.wheels[2].width = wheel_width;
	car.wheels[2].front = false;
	car.wheels[2].drive = false;
	car.wheels[2].brake = true;
	car.wheels[2].steering = false;

	// REAR-RIGHT ------------------------
	car.wheels[3].connection.Set(-half_width + 0.3f * wheel_width, connection_height, -half_length + wheel_radius);
	car.wheels[3].direction = direction;
	car.wheels[3].axis = axis;
	car.wheels[3].suspensionRestLength = suspensionRestLength;
	car.wheels[3].radius = wheel_radius;
	car.wheels[3].width = wheel_width;
	car.wheels[3].front = false;
	car.wheels[3].drive = false;
	car.wheels[3].brake = true;
	car.wheels[3].steering = false;

	vehicle = App->physics->AddVehicle(car);
	vehicle->collision_listeners.add(this); // Add this module as listener to callbacks from vehicle
	vehicle->SetPos(0, 0, 10);

	return true;
}

// Unload assets
bool ModulePlayer::CleanUp()
{
	LOG("Unloading player");

	return true;
}

// Update: draw background
update_status ModulePlayer::Update(float dt)
{
	turn = acceleration = brake = 0.0f;
	if (App->input->GetKey(SDL_SCANCODE_R) == KEY_DOWN)
	{
		marchaatras = !marchaatras;
	}
	if(App->input->GetKey(SDL_SCANCODE_UP) == KEY_REPEAT)
	{
		marchaatras = false;
		if (!marchaatras)
		{
			if (App->input->GetKey(SDL_SCANCODE_LSHIFT) == KEY_REPEAT)
			{
				acceleration = MAX_ACCELERATION * 20;
			}
			else
			{
				acceleration = MAX_ACCELERATION;
			}
		}
		else
		{
			brake = BRAKE_POWER;
		}
	}

	if(App->input->GetKey(SDL_SCANCODE_LEFT) == KEY_REPEAT)
	{
		if(turn < TURN_DEGREES)
			turn +=  TURN_DEGREES;
	}

	if(App->input->GetKey(SDL_SCANCODE_RIGHT) == KEY_REPEAT)
	{
		if(turn > -TURN_DEGREES)
			turn -= TURN_DEGREES;
	}

	if(App->input->GetKey(SDL_SCANCODE_DOWN) == KEY_REPEAT)
	{
		marchaatras = true;
		if (marchaatras)
		{
			acceleration = -MAX_ACCELERATION;
		}
		else
		{
			brake = BRAKE_POWER;
		}
	}

	if (App->input->GetKey(SDL_SCANCODE_F1) == KEY_DOWN)
	{
		 car.mass = 20.0f;
	}

	if (App->input->GetKey(SDL_SCANCODE_F2) == KEY_DOWN)
	{
		App->physics->world->setGravity(newg);
	}

	if (App->input->GetKey(SDL_SCANCODE_F3) == KEY_DOWN)
	{
		vehicle->ApplyEngineForce(0.0f);
	}

	if (App->input->GetKey(SDL_SCANCODE_F4) == KEY_DOWN)
	{
		vehicle->SetPos(0, 0, 10);
	}

	vehicle->ApplyEngineForce(acceleration);
	vehicle->Turn(turn);
	vehicle->Brake(brake);

	vehicle->Render();

	char title[80];
	sprintf_s(title, "%.1f Km/h", vehicle->GetKmh());
	App->window->SetTitle(title);

	return UPDATE_CONTINUE;
}


void ModulePlayer::OnCollision(PhysBody3D* body1, PhysBody3D* body2)
{
	// Randomly teleport the sensor cube around 1st quadrant
	if (body1 == App->scene_intro->sensor_cube)	body1->SetPos(20 * rand() / RAND_MAX, 3, 20 * rand() / RAND_MAX);
	if (body2 == App->scene_intro->sensor_cube)	body2->SetPos(20 * rand() / RAND_MAX, 3, 20 * rand() / RAND_MAX);
}

