//#include <graphics.h>
//#include <Windows.h>
//#include <mmsystem.h>    //����������Ҫ��ͷ�ļ�
//#pragma comment(lib,"winmm.lib")    //���߱�����������winmm.lib���ļ���lib��ʾ���ļ�
//
//
//int main(void) {
//	initgraph(800, 513);
//	loadimage(0, _T("_0000_ͼ��-148.jpg"));
//	//�ظ����š����־���.mp3"
//	mciSendString(_T("play ���־���.mp3 repeat"), 0, 0, 0);
//	system("pause");
//	closegraph();
//	return 0;
//}






#include <graphics.h>
#include <Windows.h>
#include <MMSystem.h>
#pragma comment(lib, "winmm.lib ")


int main(void) {
	initgraph(800, 513);
	loadimage(0, _T("_0000_ͼ��-148.jpg"));
	mciSendString(_T("play ���־���.mp3 repeat"), 0, 0, 0);
	system("pause");
	closegraph();
	return 0;
}