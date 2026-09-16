#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 8 member(s).
namespace Windows::Internal::Storage::Cloud::Common {
class AfcStatusChecker {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPolicyStatus@AfcStatusChecker@Common@Cloud@Storage@Internal@Windows@@UEAA?AW4AfcStatus@23456@AEAVMakeAfcCallActivity@CloudStoreTelemetry@3456@W4AfcOperationType@23456@@Z
    virtual int GetPolicyStatus(WindissectOpaque &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetServicesStatus@AfcStatusChecker@Common@Cloud@Storage@Internal@Windows@@UEAA?AW4AfcStatus@23456@AEAVMakeAfcCallActivity@CloudStoreTelemetry@3456@@Z
    virtual int GetServicesStatus(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSingleServiceStatus@AfcStatusChecker@Common@Cloud@Storage@Internal@Windows@@UEAA?AW4AfcStatus@23456@AEAVMakeAfcCallActivity@CloudStoreTelemetry@3456@PEAUSC_HANDLE__@@PEBG@Z
    virtual int GetSingleServiceStatus(WindissectOpaque &, SC_HANDLE__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActivityFeedEnabledByPolicy@AfcStatusChecker@Common@Cloud@Storage@Internal@Windows@@UEAA_NAEAVMakeAfcCallActivity@CloudStoreTelemetry@3456@@Z
    virtual bool IsActivityFeedEnabledByPolicy(WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AfcStatusChecker@Common@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~AfcStatusChecker();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMDMPolicyState@AfcStatusChecker@Common@Cloud@Storage@Internal@Windows@@AEAA_NPEBG@Z
    bool GetMDMPolicyState(unsigned short const *);
};
} // namespace Windows::Internal::Storage::Cloud::Common
