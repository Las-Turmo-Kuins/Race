#pragma once
#include "Module.h"
#include "Globals.h"
#include "p2Point.h"
#include "Primitive.h"
#include "PhysVehicle3D.h"
#include "PhysBody3D.h"

struct PhysVehicle3D;

#define MAX_ACCELERATION 2500.0f
#define TURN_DEGREES 15.0f * DEGTORAD
#define BRAKE_POWER 1000.0f

class ModulePlayer : public Module
{
public:
	ModulePlayer(Application* app, bool start_enabled = true);
	virtual ~ModulePlayer();

	bool Start();
	update_status Update(float dt);
	void OnCollision(PhysBody3D* body1, PhysBody3D* body2) override;
	bool CleanUp();

public:
	PhysVehicle3D* vehicle;
	VehicleInfo car;

	float turn;
	float acceleration;
	float brake;

	bool marchaatras = false;

	float altura = 1.0f;

	const btVector3 newg = { 0.0f, -1.0f, 0.0f };
};