#pragma once
#include "simulation_state.h"
#include "learning_physics_system.h"

class BaracState : public SimulationState {
public:
	void InitState() override;
};