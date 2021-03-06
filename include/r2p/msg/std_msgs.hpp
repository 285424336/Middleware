#pragma once

namespace r2p {

class Int32Msg: public Message {
public:
	int32_t data;
}R2P_PACKED;

class Float32Msg: public Message {
public:
	float data;
}R2P_PACKED;

class String32Msg: public Message {
public:
	char data[32];
}R2P_PACKED;

class String64Msg: public Message {
public:
	char data[64];
}R2P_PACKED;

} /* namespace r2p */
