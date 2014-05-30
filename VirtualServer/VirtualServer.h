//
//  VirtualServer.h
//  VirtualServer
//
//  Created by zhaozhengchu on 5/26/14.
//  Copyright (c) 2014 home. All rights reserved.
//

class VirtualServer
{
public:
    //string API
    bool getRandomStringFromServer(char* string);
    bool getRandomStringFromServer(char* string, unsigned int len);
    bool getStringFromServer(char* string, unsigned stringID);
    bool setStringToServer(char* string, unsigned stringID);

    //number API
    bool getRandomNumberFromServer(int &string);
    bool getRandomNumberFromServer(int &string, unsigned int &len);
    bool getNumberFromServer(char* string, unsigned stringID);
    bool setNumberToServer(char* string, unsigned stringID);
    
};