#include <iostream>
#include<cstdio>
#include<fstream>
#include<cstdlib>
#include"rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include"rapidjson/filereadstream.h"
#include"rapidjson/istreamwrapper.h"


using namespace rapidjson;
using namespace std;
int main() {
	ifstream ifs{ R"(I:\Skills Upgrade\DSA\C++\JsonParser\JsonParserTool\file_coderstool.json)" };
	if (!ifs.is_open()) {
		cerr << "file is not opening" << endl;
		return EXIT_FAILURE;
	}
	IStreamWrapper isw(ifs);
	Document document;
	document.ParseStream(isw);

	//FILE *fp = fopen("C:\Users\1032563\Desktop\example_1.json", "r");
	//char buffer[1024];
	//FileReadStream input(fp, buffer, sizeof(buffer));
	//const char* json = "{\"project\":\"rapidjson\",\"stars\":10}";



	// Stringify the DOM
	StringBuffer buffer;
	Writer<StringBuffer> writer(buffer);
	document.Accept(writer);

	std::cout << buffer.GetString() << std::endl;
	return 0;
}