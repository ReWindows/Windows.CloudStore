#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 7 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class DeleteAsyncActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DeleteAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDIPEBG111I_K@Z
    void StartActivity(char const *, unsigned int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@DeleteAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD_K_NJ1@Z
    void Stop(char const *, uint64_t, bool, long, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeleteAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~DeleteAsyncActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DeleteAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DeleteAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
