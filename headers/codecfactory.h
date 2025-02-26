/**
 * This code is released under the
 * Apache License Version 2.0 http://www.apache.org/licenses/.
 *
 * (c) Daniel Lemire, http://lemire.me/en/
 */

#ifndef CODECFACTORY_H_
#define CODECFACTORY_H_

#include "codecs.h"

namespace FastPForLib {

typedef std::map<std::string, std::shared_ptr<IntegerCODEC>> CodecMap;

/**
 * You should have at least one factory per thread.
 */
class CODECFactory {
public:
  CODECFactory();

  std::vector<std::shared_ptr<IntegerCODEC>> allSchemes() const;

  std::vector<std::string> allNames() const;

  std::shared_ptr<IntegerCODEC> const& getFromName(std::string name) const;
private:
  CodecMap scodecmap;
};

} // namespace FastPForLib

#endif /* CODECFACTORY_H_ */
