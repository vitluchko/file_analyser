#pragma once

class IFileSystem
{
public:
	void virtual GetFiles() = 0;
	void virtual CountExpansion() = 0;
};