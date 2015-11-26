#pragma once

#include <string>
#include "../pcscreaderunit.hpp"

namespace logicalaccess
{
class ID3ReaderUnit : public PCSCReaderUnit
{
    ID3ReaderUnit(const std::string &name);
};
}
