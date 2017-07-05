#include "stdafx.h"
#include "starcraftScene.h"
#include "battle.h"

starcraftScene::starcraftScene()
{
}


starcraftScene::~starcraftScene()
{

}

HRESULT starcraftScene::init()
{
	_battle = new battle;
	_battle->init("battle", WINSIZEX / 2, WINSIZEY / 2);

	return S_OK;
}
void starcraftScene::release()
{

}

void starcraftScene::update() 
{
	_battle->update();
}

void starcraftScene::render() 
{
	char str[128];

	sprintf(str, "½ºÅ¸ ¾À");
	TextOut(getMemDC(), WINSIZEX / 2 + 200, WINSIZEY / 2, str, strlen(str));

	_battle->render();


}
