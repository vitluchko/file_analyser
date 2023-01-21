//
// Created by appetitus on 27.07.22.
//

#ifndef LINUXPREVIEW_IFILESYSTEM_H
#define LINUXPREVIEW_IFILESYSTEM_H

class IFileSystem
{
public:
    void virtual getFilesByExpansions() = 0;
};

#endif //LINUXPREVIEW_IFILESYSTEM_H