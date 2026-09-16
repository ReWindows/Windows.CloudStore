#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class SaveBulkActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SaveBulkActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD0000@Z
    void StartActivity(char const *, char const *, char const *, char const *, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SaveBulkActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBG_K@Z
    void Stop(unsigned short const *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SaveBulkActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~SaveBulkActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SaveBulkActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SaveBulkActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
