// yt2mp3 ~ Command line YouTube to MP3
// Anton Koetzler-Faust
// 2023

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void convert(string, string);

int main(int argc, char** argv) {
  switch(argc) {
    // Convert to current directory
    case 2:
      convert(argv[1], "");
      break;
    // Convert to specific directory
    case 3:
      convert(argv[1], argv[2]);
      break;
    // Manual
    default:
      #ifdef linux
        system("clear");
      #endif
      #ifdef _WIN32
        system("cls");
      #endif
      cout << "yt2mp3 ~ Command line YouTube to MP3" << endl;
      cout << "yt2mp3 <link>              -     Convert to current directory" << endl;
      cout << "yt2mp3 <link> <directory>  -     Convert to specified directory" << endl;
      break;
  }
}

void convert(string link, string directory) {
  #ifdef _WIN32
    replace(directory.begin(), directory.end(), '\\', '/');
  #endif

  if(directory.length() > 0 && directory[directory.length() - 1] != '/')
    directory += '/';

  string command =
    "yt-dlp -f bestaudio -x --audio-format mp3 "
    + string(link)
    + " -o \"" + directory + "%(title)s.%(ext)s\"";
  system(command.c_str());
}
