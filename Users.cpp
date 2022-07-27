//
// Created by appetitus on 27.07.22.
//

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