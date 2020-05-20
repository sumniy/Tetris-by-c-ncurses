# Tetris-by-c-ncurses
simple tetris game by c++ ncurses, 'tetris' file is exe file

#### 개발 환경
##### linux Ubuntu 16.04 LTS 
##### C++ / ncurses

C++ 언어의 ncurses 라이브러리를 활용하여 개발한 테트리스 게임입니다.

터미널에서 실행되며 ncurses 기반의 간단한 그래픽으로 표현됩니다.

블럭 이동, 블럭 회전, 라인 완성 및 파괴, 점수 계산 등의 기본적인 기능들을 구현했습니다.

#### 실행 방법
make 명령어로 컴파일 후 tetris 파일을 실행시키면 프로그램이 실행됩니다. 
(ncurses 라이브러리 설치 필요 : sudo apt-get install libncurses5-dev libncursesw5-dev ) 


#### 조작법
실행 후 유저 이름을 입력한 후 enter를 누르면 게임이 시작됩니다.

좌 우 아래 방향키로 블럭을 이동시키고 위 방향키를 누르면 블럭이 회전합니다.

space키를 누르면 블럭이 즉시 아래로 떨어집니다.
