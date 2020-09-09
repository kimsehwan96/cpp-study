# 클래스와 인스턴스

내용 없음

```console
(base)  ✘  ~/Desktop/ingkle/cpp-study/class_instance  g++ constructor_pass.cpp -o constructor_pass && ./constructor_pass
constructor_pass.cpp:12:20: error: delegating constructors are permitted only in
      C++11
Circle::Circle() : Circle(1) { } // 위임 생성자
```

이거 보니까 위임 생성자는 C++11 이상부터 허용 된다고 함 그래서

task.json 수정함

```json
{
	"version": "2.0.0",
	"tasks": [
		{
			"type": "shell",
			"label": "C/C++: g++ build active file",
			"command": "/usr/bin/g++ -std=c++11", //c++ 11로 컴파일 하기 위한 옵션
			"args": [
				"-g",
				"${file}",
				"-o",
				"${fileDirname}/${fileBasenameNoExtension}"
			],
			"options": {
				"cwd": "${workspaceFolder}"
			},
			"problemMatcher": [
				"$gcc"
			],
			"group": "build"
		}
	]
}
```

`g++ -std=c+11` 이렇게 c++ 버전 명시해라.


```console
(base)  ✘  ~/Desktop/ingkle/cpp-study/class_instance  g++ -std=c++11 constructor_pass.cpp -o constructor_pass && ./constructor_pass
반지름1원 생성
donut 면적은 3.14
반지름30원 생성
pizza 면적은2826
```

이렇게 됐음.