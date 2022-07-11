//
// Created by appetitus on 05.03.2022.
//
#pragma once

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
