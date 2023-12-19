#include "types.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <stdlib.h>

typedef SDL_Surface* HBITMAP;

int initWindows(void);
void assertFailed(const char* srcFilename, int lineNumber);
int showErrorMessage(LPCSTR text);
BOOL allocateMemory(void);
// BOOL loadSoundFunc(void);
// BOOL loadSound(uint32_t resourceId, Sound* sound);
void statusWindowFindLongestTextString(HDC hdc, short* maxLength, LPCSTR textStr, int textLength);
void paintStatusWindow(HWND hWnd);
BOOL calculateStatusWindowDimensions(HWND hWnd);
void statusWindowReleaseDC(HWND hWnd);
// LRESULT CALLBACK skiMainWndProc(HWND hWnd, uint32_t message, WPARAM wParam, LPARAM lParam);
// LRESULT CALLBACK skiStatusWndProc(HWND hWnd, uint32_t message, WPARAM wParam, LPARAM lParam);
void paintActors(HDC hdc, RECT* paintRect);
void pauseGame(void);
void togglePausedState(void);
// void freeSoundResource(Sound* sound);
void cleanupSound(void);
// void playSound(Sound* sound);
Actor* addActor(Actor* actor, BOOL insertBack);
HBITMAP loadBitmapResource(uint32_t resourceId);
BOOL loadBitmaps(HWND hWnd);
void handleWindowMoveMessage(HWND hWnd);
void updateWindowsActiveStatus(void);
void setPointerToNull(PermObjectList* param_1);
Actor* getFreeActor(void);
BOOL setupGame(void);
short ski_random(short maxValue);
Actor* updateActorPositionWithVelocityMaybe(Actor* actor);
Actor* addActorOfTypeWithSpriteIdx(int actorType, uint16_t spriteIdx);
void actorSetFlag8IfFlag1IsUnset(Actor* actor);
void removeFlag8ActorsFromList(void);
BOOL changeScratchBitmapSize(short newWidth, short newHeight);
void actorClearFlag10(Actor* actor1, Actor* actor2);
Actor* setActorFrameNo(Actor* actor, uint32_t frameNo);
Actor* actorSetSpriteIdx(Actor* actor, uint16_t spriteIdx);
Actor* duplicateAndLinkActor(Actor* actor);
void updateActorRectsAfterPlayerMove(short newPlayerX, short newPlayerY);
void getRandomOffscreenStartingPosition(int borderType, short* xPos, short* yPos);
int randomActorType1(void);
int randomActorType2(void);
int randomActorType3(void);
int areaBasedActorType(void);
Actor* updateActorType1_Beginner(Actor* actor);
Actor* updateActorType2_dog(Actor* actor);
Actor* updateActorType9_treeOnFire(Actor* actor);
Actor* updateActor(Actor* actor);
Actor* updatePlayerActor(Actor* actor);
void updateSsGameMode(Actor* actor, short xPos, short yPos);
int FUN_00402e30(int param_1, int param_2, int param_3, int param_4, int param_5);
void resetPlayerFrameNo(void);
void updateFsGameMode(Actor* actor, short xPos, short yPos);
void updateGsGameMode(Actor* actor, short xPos, short yPos);
Actor* updateActorTypeA_walkingTree(Actor* actor);
Actor* updateActorType3_snowboarder(Actor* actor);
Actor* handleActorCollision(Actor* actor1, Actor* actor2);
Actor* addActorForPermObject(PermObject* permObject);
void updatePermObjectActorType4(PermObject* permObject);
void updateYeti(PermObject* permObject);
void FUN_004046e0(PermObjectList* permObjList);
void deleteWindowObjects(void);
void handleMouseClick(void);
int getSkierGroundSpriteFromMousePosition(short param_1, short param_2);
int getSkierInAirSpriteFromMousePosition(short param_1, short param_2);
void handleMouseMoveMessage(short xPos, short yPos);
void updateActorsAfterWindowResize(short centreX, short centreY);
void updateRectForSpriteAtLocation(RECT* rect, Sprite* sprite, short newX, short newY, short param_5);
void formatAndPrintStatusStrings(HDC windowDC);
int resetGame(void);
void updatePermObject(PermObject* permObject);
Actor* updateActorPositionMaybe(Actor* actor, short newX, short newY, short inAir);
void updateWindowSize(HWND hWnd);
Actor* updateActorVelMaybe(Actor* actor, const ActorVelStruct* param_2);
PermObject* addPermObject(PermObjectList* objList, PermObject* permObject);
void setupPermObjects(void);
void handleKeydownMessage(SDL_Event* e);
void updateGameState(void);
BOOL createBitmapSheets(HDC param_1);
void drawWindow(HDC hdc, RECT* rect);
void drawActor(HDC hdc, Actor* actor);
void updateEntPackIniKeyValue(LPCSTR configKey, int value, int isTime);
void permObjectSetSpriteIdx(PermObject* permObject, uint16_t spriteIdx);
void mainWindowPaint(HWND param_1);

void HandleWindowMessage(SDL_Event* e);

void timerUpdateFunc(void);
