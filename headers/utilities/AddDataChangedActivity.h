#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class AddDataChangedActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AddDataChangedActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXIPEBG00I@Z
    void StartActivity(unsigned int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@AddDataChangedActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAX_K@Z
    void Stop(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AddDataChangedActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~AddDataChangedActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AddDataChangedActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AddDataChangedActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
