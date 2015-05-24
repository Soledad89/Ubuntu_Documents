#ifndef __PCICTLDEF_H__
#define __PCICTLDEF_H__

//start and reset register
#define IB_REG_START 0x8
#define IB_CMD_START 0xff
#define IB_CMD_RESET 0x0

//video select register
#define IB_REG_VIDEOSEL 0x14
#define IB_CMD_VIDEO1 1
#define IB_CMD_VIDEO2 3
#define IB_CMD_VIDEOTEST 0
#define IB_CMD_VIDEOBCK 4

//video gain register
#define IB_REG_VIDEOGAIN 0x18

#endif
