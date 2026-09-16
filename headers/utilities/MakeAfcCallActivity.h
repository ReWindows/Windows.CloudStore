#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 14 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class MakeAfcCallActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@MakeAfcCallActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD00I@Z
    void StartActivity(char const *, char const *, char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@MakeAfcCallActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD@Z
    void Stop(char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MakeAfcCallActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~MakeAfcCallActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@MakeAfcCallActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@MakeAfcCallActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
