#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 7 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class LoadAsyncActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LoadAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDIPEBG111I@Z
    void StartActivity(char const *, unsigned int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@LoadAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDI_K_N@Z
    void Stop(char const *, unsigned int, uint64_t, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LoadAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~LoadAsyncActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LoadAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LoadAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
