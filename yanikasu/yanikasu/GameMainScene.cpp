#include"GameMainScene.h"
#include"DxLib.h"
#include"Stage.h"
#include"SceneManager.h"

/****************************************

*�}�N����`

****************************************/

#define TIMELIMIT    (3600*3)  //��������
#define NUMBER_IMAGE_MAX (10)  //�����摜��

/****************************************

*�^�萔

****************************************/


/****************************************

*�ϐ��錾

****************************************/
int GameScore;
int GameLevel;
int GameMission;
int GameTime;
int GameCount;      //����������Ȃ��悤�ɂ��邽�߂̃J�E���g
int ReStartFlag;

int NumberImage[NUMBER_IMAGE_MAX];   //�����p�摜

/****************************************

*�v���g�^�C�v�錾

****************************************/

/****************************************

*�Q�[�����C����ʁF����������

* ���@���F�Ȃ�

*�߂�l�F�G���[��� 

****************************************/

int GameMainScene_Initialize(void)
{
	int ret = 0;
	int i;

	//�摜�Ǎ���
	LoadDivGraph("images/number.png", NUMBER_IMAGE_MAX, NUMBER_IMAGE_MAX, 1, 60, 120, NumberImage);

	//�G���[�`�F�b�N
	for (i = 0; i < NUMBER_IMAGE_MAX; i++)
	{
		if (NumberImage[i] == D_ERROR)
		{
			ret = D_ERROR;
			break;
		}
	}

//�Q�[���v���C�����񂩂ǂ����H
if(GameCount == 0)
{
	GameScore = 0;   //�X�R�A�̏�����
	GameLevel = 1;  //�Q�[�����x���̏�����
	Set_StageMission(3);  //�~�b�V�����̏�����
	GameCount++;  //����̐ݒ�
}
else
{
	GameLevel++;   //�Q�[�����x���̍X�V
	Set_StageMission(3);  //�~�b�V�����𑝂₷
}
GameTime = TIMELIMIT;   //�������Ԃ̏�����

return ret;
}

/****************************************

*�Q�[�����C����ʁF�X�V����

* ���@���F�Ȃ�

*�߂�l�F�Ȃ�

****************************************/
void GameMainScene_Update(void)
{
	switch (Get_StageState())
	{
	case 0:
		SelectBlock();    //�u���b�N��I������
		break;
	case 2:
		MoveBlock();    //�u���b�N���ړ�������
		break;
	case 3:
		CheckBlock();   //�u���b�N�̊m�F
		break;
	case 4:
		CheckClear();   //�N���A�`�F�b�N
		break;
	difault:
		break;
	}

	//�������Ԃ̍X�V
	GameTime--;

	//
}