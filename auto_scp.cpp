#include <boost/filesystem.hpp>  
#include "scp_write.h"
#include <iostream>
using namespace std;
namespace fs = boost::filesystem;


//void PrintAllFile(const string&host, const int&port, const string&user, const string&pass, const string&localPath, const  fs::path& full_path)
void PrintAllFile( fs::path full_path)
{
 if(fs::exists(full_path))
 {
  fs::directory_iterator item_begin(full_path);
  fs::directory_iterator item_end;
  for( ;item_begin  != item_end; item_begin++)
  {
   
   if(fs::is_directory(*item_begin))
   {
    cout <<item_begin->path().filename().string()<<"\t[dir]"<<endl;
    PrintAllFile(*item_begin);
   }
   else
   {
    cout <<item_begin->path().filename().string()<<endl;
   }
  }
 }
}

int main( int argc, char* argv[] )
{
	string host = "x";
	string user = "xx";
	string pass = "xk";
	string scppath = "/home/berli";

	int port = 37000;
    //fs::path localPath(string(argv[1]) ,fs::native);
    fs::path localPath(argv[1]);
    //PrintAllFile(host, port, user, pass, scppath, localPath);
    PrintAllFile(localPath);
}

