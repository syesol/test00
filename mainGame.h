#pragma once
#include "gameNode.h"
#include "starcraftScene.h"
#include "selectScene.h"

class mainGame : public gameNode
{
private:
	gameNode* _currentScene;


	gameNode* _starScene;
	gameNode* _selectScene;
	
public:
	virtual HRESULT init(void);		
	virtual void release(void);		
	virtual void update(void);		
	virtual void render(void);

	

	mainGame();
	~mainGame();
};

