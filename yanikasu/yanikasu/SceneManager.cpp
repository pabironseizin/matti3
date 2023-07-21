#include"SceneManager.h"
#include"TitleScene.h"
#include"GameMainScene.h"
#include"GameClearScene.h"
#include"GameOverScene.h"

/****************************************

*�}�N����`

****************************************/


/************************************

���^��`

*************************************/


/************************************

*�ϐ��錾

*************************************/

GAME_MODE Game_Mode;
GAME_MODE Next_Mode;

/************************************

*�v���g�^�C�v�錾

*************************************/


/****************************************

*�V�[���Ǘ��@�\�F����������

* ���@���F�Q�[�����[�h���

*�߂�l�F�Ȃ�

****************************************/

int SceneManager_Initialize(GAME_MODE mode)
{
	int Read_Error;

	//�V�[���ǂݍ��ݏ���
	//�^�C�g�����
	Read_Error = TitleScene_Initialize();
	if (Read_Error == D_ERROR)
	{
		return D_ERROR;
	}

	//�Q�[�����C�����
	Read_Error = GameMainScene_Initialize();
	if (Read_Error == D_ERROR)
	{
		return D_ERROR;
	}

	//�Q�[���N���A���
	Read_Error = GameClearScene_Initialize();
	if (Read_Error == D_ERROR)
	{
		return D_ERROR;
	}

	//�Q�[���I�[�o�[���
	Read_Error = GameOverscene_Initialize();
	if (Read_Error == D_ERROR)
	{
		return D_ERROR;
	}

	Game_Mode = mode;
	Next_Mode = Game_Mode;

	return Read_Error;
}
