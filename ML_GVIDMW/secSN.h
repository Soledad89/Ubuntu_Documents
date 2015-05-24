

#ifndef __SECSN__
#define __SECSN__


long getHardDriveComputerID ();

int AUChecking(long * id,int st,int jump,int clen,char * filename);

int SNFileMaker(int st,int jump,int clen,char * filename);

int AUFileMaker();

#endif