#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/DetId/interface/DetId.h"

namespace L1Trigger {
  namespace L1CaloTrigger {
    std::vector<std::pair<DetId,float> > v_detid_flt;
    edm::Wrapper<std::vector<std::pair<DetId,float> > > w_v_detid_flt;
  }
};
