#ifndef IP_PARSER_PARSER_PARSE_IP
#define IP_PARSER_PARSER_PARSE_IP

#include <string>

#include "./IP.h"
#include "./parseIPv4.h"
#include "./parseIPv6.h"

namespace casbin {

IP parseIP(std::string s);

} // namespace casbin

#endif