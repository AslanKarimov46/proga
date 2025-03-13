#include <iostream>
#include <future>
#include <chrono>


int returnTwo(){
    return 2;
}

int main(){
    
    std::future<int> f = std::async(std::launch::async, returnTwo);
    std::cout << f.get() << '\n';

    std::cout << "Bublik\n";

    return 0;
}

// Tasks: Configure Default Build Task
// Create tasks.json file from template


/*{
	"version": "2.0.0",
	"tasks": [
		{
			"type": "cppbuild",
			"label": "C/C++: g++ build active file",
			"command": "/usr/bin/g++",
			"args": [
				"-std=c++20",
				"-fdiagnostics-color=always",
				"-g",
				"${file}",
				"-o",
				"${fileDirname}/${fileBasenameNoExtension}"
			],
			"options": {
				"cwd": "${fileDirname}"
			},
			"problemMatcher": [
				"$gcc"
			],
			"group": {
				"kind": "build",
				"isDefault": true
			},
			"detail": "compiler: /usr/bin/g++"
		}
	]
}*/