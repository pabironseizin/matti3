/******************************************

*�v���O���~���O���K
* �}�b�`�R�Q�[������

******************************************/

#include "Dxlib.h"
#include "FreamControl.h"
#include "InputControl.h"
#include "SceneManager.h"

/****************************************

*�}�N����`

****************************************/

#define SCREEN_HEIGHT  (480)  //�X�N���[���T�C�Y�i�����j
#define SCREEN_WIDTH  (640)  //�X�N���[���T�C�Y�i���j
#define SCREEN_COLORBIT  (32)  //�X�N���[���J���[�r�b�g
#define FONT_SIZE  (20)  //�����T�C�Y

/************************************

���^��`

*************************************/


/************************************

*�O���[�o���ϐ��錾

*************************************/

/************************************

*�v���g�^�C�v�錾

*************************************/

/*************************************

*�v���O�����̊J�n

**************************************/

int WINAPI Winmain(_In_HINSTANCE hInstance, _In_opt_HINSTANCE hPrevInstance,
	_In_LPSTR lpCmdLine, _In_int nShowCmd)
{

	//�E�B���h�E�^�C�g���ݒ�
	SetMainWindowText("Match 3 Puzzle");
	//�E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);
	//��ʃT�C�Y�̍ő�T�C�Y�A�J���[�r�b�g����ݒ�
	SetGraphMode(SCREEN_HEIGHT, SCREEN_WIDTH, SCREEN_COLORBIT);

	//Dx���C�u��������������
	//�G���[������������A�I������
	if
}
