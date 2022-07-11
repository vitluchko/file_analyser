#include "Users.h"
#include "IFileSystem.h"

void Users::FileReading(IFileSystem& method)
{
	method.GetFiles();
}

void Users::Countig(IFileSystem& method)
{
	method.CountExpansion();
}
