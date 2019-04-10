#pragma once

#include "define_types.h"


#include "../i_update_draw.h"
#include "../Event/Event.h"
#include "core/Texture.h"
#include "game_map.h"
#include "../actor/Player.h"
#include "base_scene.h"

class UIScene : public BaseScene
{
public:
	enum State
	{
		Splash,
		Game
	};

	UIScene(int id, String name);
	~UIScene();
	void OnLoad() override;
	void OnUnLoad() override;
	void Update() override;
	void Draw() override;
private:
//	int m_State;
//	bool m_bDragStart;
};

