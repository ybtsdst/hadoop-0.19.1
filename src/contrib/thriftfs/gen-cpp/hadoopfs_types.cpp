/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#include "hadoopfs_types.h"



const char* ThriftHandle::ascii_fingerprint = "2317B51D4172A111734AAB85F990F7C6";
const uint8_t ThriftHandle::binary_fingerprint[16] = {0x23,0x17,0xB5,0x1D,0x41,0x72,0xA1,0x11,0x73,0x4A,0xAB,0x85,0xF9,0x90,0xF7,0xC6};

uint32_t ThriftHandle::read(facebook::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  facebook::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using facebook::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == facebook::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case -1:
        if (ftype == facebook::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ThriftHandle::write(facebook::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ThriftHandle");
  xfer += oprot->writeFieldBegin("id", facebook::thrift::protocol::T_I64, -1);
  xfer += oprot->writeI64(this->id);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* Pathname::ascii_fingerprint = "E2167DA91A8F7459A2FE1B5F56D14B5D";
const uint8_t Pathname::binary_fingerprint[16] = {0xE2,0x16,0x7D,0xA9,0x1A,0x8F,0x74,0x59,0xA2,0xFE,0x1B,0x5F,0x56,0xD1,0x4B,0x5D};

uint32_t Pathname::read(facebook::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  facebook::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using facebook::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == facebook::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case -1:
        if (ftype == facebook::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->pathname);
          this->__isset.pathname = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Pathname::write(facebook::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Pathname");
  xfer += oprot->writeFieldBegin("pathname", facebook::thrift::protocol::T_STRING, -1);
  xfer += oprot->writeString(this->pathname);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* FileStatus::ascii_fingerprint = "68FE7242A6727149B291A86FB9570D2B";
const uint8_t FileStatus::binary_fingerprint[16] = {0x68,0xFE,0x72,0x42,0xA6,0x72,0x71,0x49,0xB2,0x91,0xA8,0x6F,0xB9,0x57,0x0D,0x2B};

uint32_t FileStatus::read(facebook::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  facebook::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using facebook::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == facebook::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == facebook::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->path);
          this->__isset.path = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == facebook::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->length);
          this->__isset.length = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == facebook::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->isdir);
          this->__isset.isdir = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == facebook::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->block_replication);
          this->__isset.block_replication = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == facebook::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->blocksize);
          this->__isset.blocksize = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == facebook::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->modification_time);
          this->__isset.modification_time = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == facebook::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->permission);
          this->__isset.permission = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == facebook::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->owner);
          this->__isset.owner = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == facebook::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->group);
          this->__isset.group = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t FileStatus::write(facebook::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("FileStatus");
  xfer += oprot->writeFieldBegin("path", facebook::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->path);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("length", facebook::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->length);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("isdir", facebook::thrift::protocol::T_BOOL, 3);
  xfer += oprot->writeBool(this->isdir);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("block_replication", facebook::thrift::protocol::T_I16, 4);
  xfer += oprot->writeI16(this->block_replication);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("blocksize", facebook::thrift::protocol::T_I64, 5);
  xfer += oprot->writeI64(this->blocksize);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("modification_time", facebook::thrift::protocol::T_I64, 6);
  xfer += oprot->writeI64(this->modification_time);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("permission", facebook::thrift::protocol::T_STRING, 7);
  xfer += oprot->writeString(this->permission);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("owner", facebook::thrift::protocol::T_STRING, 8);
  xfer += oprot->writeString(this->owner);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("group", facebook::thrift::protocol::T_STRING, 9);
  xfer += oprot->writeString(this->group);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* BlockLocation::ascii_fingerprint = "8BF3B16BED96367B21783389BDF8B1C0";
const uint8_t BlockLocation::binary_fingerprint[16] = {0x8B,0xF3,0xB1,0x6B,0xED,0x96,0x36,0x7B,0x21,0x78,0x33,0x89,0xBD,0xF8,0xB1,0xC0};

uint32_t BlockLocation::read(facebook::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  facebook::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using facebook::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == facebook::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == facebook::thrift::protocol::T_LIST) {
          {
            this->hosts.clear();
            uint32_t _size0;
            facebook::thrift::protocol::TType _etype3;
            iprot->readListBegin(_etype3, _size0);
            this->hosts.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += iprot->readString(this->hosts[_i4]);
            }
            iprot->readListEnd();
          }
          this->__isset.hosts = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == facebook::thrift::protocol::T_LIST) {
          {
            this->names.clear();
            uint32_t _size5;
            facebook::thrift::protocol::TType _etype8;
            iprot->readListBegin(_etype8, _size5);
            this->names.resize(_size5);
            uint32_t _i9;
            for (_i9 = 0; _i9 < _size5; ++_i9)
            {
              xfer += iprot->readString(this->names[_i9]);
            }
            iprot->readListEnd();
          }
          this->__isset.names = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == facebook::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->offset);
          this->__isset.offset = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == facebook::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->length);
          this->__isset.length = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t BlockLocation::write(facebook::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("BlockLocation");
  xfer += oprot->writeFieldBegin("hosts", facebook::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(facebook::thrift::protocol::T_STRING, this->hosts.size());
    std::vector<std::string> ::const_iterator _iter10;
    for (_iter10 = this->hosts.begin(); _iter10 != this->hosts.end(); ++_iter10)
    {
      xfer += oprot->writeString((*_iter10));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("names", facebook::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(facebook::thrift::protocol::T_STRING, this->names.size());
    std::vector<std::string> ::const_iterator _iter11;
    for (_iter11 = this->names.begin(); _iter11 != this->names.end(); ++_iter11)
    {
      xfer += oprot->writeString((*_iter11));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("offset", facebook::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->offset);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("length", facebook::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->length);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* MalformedInputException::ascii_fingerprint = "E2167DA91A8F7459A2FE1B5F56D14B5D";
const uint8_t MalformedInputException::binary_fingerprint[16] = {0xE2,0x16,0x7D,0xA9,0x1A,0x8F,0x74,0x59,0xA2,0xFE,0x1B,0x5F,0x56,0xD1,0x4B,0x5D};

uint32_t MalformedInputException::read(facebook::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  facebook::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using facebook::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == facebook::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case -1:
        if (ftype == facebook::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t MalformedInputException::write(facebook::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MalformedInputException");
  xfer += oprot->writeFieldBegin("message", facebook::thrift::protocol::T_STRING, -1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* ThriftIOException::ascii_fingerprint = "E2167DA91A8F7459A2FE1B5F56D14B5D";
const uint8_t ThriftIOException::binary_fingerprint[16] = {0xE2,0x16,0x7D,0xA9,0x1A,0x8F,0x74,0x59,0xA2,0xFE,0x1B,0x5F,0x56,0xD1,0x4B,0x5D};

uint32_t ThriftIOException::read(facebook::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  facebook::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using facebook::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == facebook::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case -1:
        if (ftype == facebook::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ThriftIOException::write(facebook::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ThriftIOException");
  xfer += oprot->writeFieldBegin("message", facebook::thrift::protocol::T_STRING, -1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


