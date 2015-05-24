///////////////////////////////////////////////////////////////////////////////////////
//
// define ioctl
//
///////////////////////////////////////////////////////////////////////////////////////
#ifndef _IB_IOCTL_H_
#define _IB_IOCTL_H_

typedef struct iodata
{
    unsigned long offset;
    unsigned long value;
}iodata;

#define IB_PCI_IOC_MAGIC 'k'

#define IB_PCI_READ      0
//_IOR( IB_PCI_IOC_MAGIC,0,sizeof( unsigned long ) )
//32bits mem read
#define IB_PCI_WRITE     1
//_IOW( IB_PCI_IOC_MAGIC,1,sizeof( unsigned long ) )
//32bits mem write

#endif
