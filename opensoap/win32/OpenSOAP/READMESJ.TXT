=begin
= �͂��߂�
 ���̃f�B���N�g���ɂ���t�@�C���S�́Awin32 ����API�̃R���p�C����
�g�p����AVisual Studio �̃v���W�F�N�g�t�@�C������у��[�N�X�y�[�X
�t�@�C���ł��B

= �t�@�C�����X�g
 ���̃f�B���N�g���ɂ͈ȉ��̃t�@�C�����܂܂�Ă���B
  * READMESJ.TXT		���̃t�@�C���B
  * OpenSOAP.dsw		API �\�z�p���[�N�X�y�[�X�t�@�C��
  * *.dsp			API �\�z�p�v���W�F�N�g�t�@�C���S
  * OpenSOAPAPIInstall.bat	API �C���X�g�[���p BAT �t�@�C��
  * Makefile*			OpenSOAP �p�b�P�[�W�쐬�p�t�@�C��

= �R���p�C���O�̏���
���̃p�b�P�[�W�̃R���p�C���ɂ́A�ȉ��̂��̂��K�v�ł��B

 (1) libxml2
 (2) openssl

== libxml2 �̏���
 libxml2 �́A�܂��A�ȉ��̃f�B���N�g�����쐬����B
  * C:\LIBXML2
  * C:\LIBXML2\BIN
  * C:\LIBXML2\LIB
 �p�b�P�[�W(libxml2-verion.tar.gz �Ƃ���)�̓����A�W�J���A
libxml2-version\win32\libxml2\libxml2_so.dsp ��p���āA�R���p�C�����A
libxml2-version\include �� �f�B���N�g������ C:\LIBXML2 �ɁA
libxml2-version\win32\libxml2\libxml2_so\libxml2.dll ���AC:\LIBXML2\BIN �ɁA
libxml2-version\win32\libxml2\libxml2_so\libxml2.lib ���AC:\LIBXML2\LIB ��
���ꂼ��R�s�[���AC:\LIBXML2\BIN �փp�X��ݒ肷��B

== openssl �̏���
 openssl �̓h�L�������g�ɏ]���AMSC�ł�C:\OPENSSL �փC���X�g�[������B

= �R���p�C�����@
 OpenSOAP.dsw ���J���A�R���p�C������B�r���h(B)���o�b�`�r���h(U)...
 �Ńo�b�`�r���h�̃_�C�A���O���J���A�v���W�F�N�g�̍\��(P)�Ƀ`�F�b�N���A
 ���r���h(R)�{�^������������API�̍\�z���\�ł���B

= �C���X�g�[��
 OpenSOAPAPIInstall.bat �����s����B����ɂ��AC:\OpenSOAP �ȉ��Ƀt�@�C����
 �C���X�g�[�������B�C���X�g�[����AC:\OpenSOAP\bin �� PATH �ɐݒ肷�邱��
 �ɂ��AOpenSOAP API �� DLL �Ƃ��ė��p�����A�v���P�[�V�����̎��s���\�ƂȂ�B

= ���p���@
 Visual Studio �ɂāA�v���W�F�N�g(P)���ݒ�(S)... �ŁA�v���W�F�N�g�̐ݒ�
 �_�C�A���O���J���AC/C++�^�u��I�����A�J�e�S��(Y)���v���v���Z�b�T�ɂ��āA
 �C���N���[�h�t�@�C���̃p�X(N)�ɁAC:\OpenSOAP\include ��ǉ�����B
 �܂��A�J�e�S�����R�[�h�����ɂ��A�g�p���郉���^�C�����C�u����(L)��
 �}���`�X���b�h(DLL)�ɕύX����B
 ���Ƀ����N�^�u��I�����A�J�e�S�����C���v�b�g�ɂ���B
 �I�u�W�F�N�g�^���C�u�������W���[��(M)�Ƀ��C�u������ǉ�����B
 �ǉ����郉�C�u�����͍쐬����A�v���P�[�V�����ɂ��قȂ�B
 Client ���쐬����ꍇ�́AOpenSOAPClient.lib ��ǉ�����B
 Service ���쐬����ꍇ�́A����ɉ����āAOpenSOAPService.lib ��ǉ�����B
 �܂��A�Z�L�����e�B���W���[�����g�p����ꍇ�́AOpenSOAPSecurity.lib ��
 �ǉ�����B
 ���ɁA�ǉ����C�u�����̃p�X(D)�Ƀ��C�u�����̃p�X��ǉ�����B
 DLL ���g�p����ꍇ�́AC:\OpenSOAP\lib\DLL ��ǉ�����B�X�^�e�B�b�N���C�u����
 ���g�p����ꍇ�́AC:\OpenSOAP\lib ��ǉ�����B�����ǉ������ꍇ�́A���
 �ǉ����������D�悳���̂ŁA���ӂ��鎖�B
 ���ƁAService ���쐬����ꍇ�AConsole �A�v���P�[�V�����Ƃ��č쐬���邱�ƁB

=end