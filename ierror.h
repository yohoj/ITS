﻿#ifndef IERROR_H
#define IERROR_H

enum ERROR_CODE{
    RESPONSE_OK = 0,
    ERR_USER_PASS,
    ERR_ACCESS_FILE,
    ERR_ACCESS_DB,
    ERR_ZIGBEE_COMM,
    ERR_CMD_INVALID
};
#endif // IERROR_H