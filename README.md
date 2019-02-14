# C++ study용
[모두의 코드](https://modoocode.com/)에서 제공하는 강좌 스터디용. ubuntu 기준.


# 사전 작업(ubuntu)

## build-essential 설치

```bash
$ sudo apt -y update
$ sudo apt -y upgrade
$ sudo apt install build-essential
```

## cmake 소스 다운로드 및 설치

[cmake.rg](http://www.cmake.org/download/)에서 최신 버전 다운로드

```bash
$ wget http://www.cmake.org/files/v3.x/cmake-3.x.x.tar.gz
$ tar xzf cmake-3.x.x.tar.gz
$ cd cmake-3.x.x
$ ./configure
$ make
$ sudo make install
```

# 소스 다운로드

```bash
$ git clone git@github.com:JoonHoSon/starcraft_study.git starcraft
```

## cmake 초기화

```bash
$ cd starcraft
$ mkdir build && cd $_
$ cmake ../
```

## 빌드

```bash
$ cd ..
$ cmake --build ./build --target all -- -j 6
```
