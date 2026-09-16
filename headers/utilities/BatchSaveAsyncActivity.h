#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 10 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class BatchSaveAsyncActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@BatchSaveAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDIPEBG11I_K@Z
    void StartActivity(char const *, unsigned int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@BatchSaveAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDJ_K11@Z
    void Stop(char const *, long, uint64_t, uint64_t, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BatchSaveAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~BatchSaveAsyncActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@BatchSaveAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@BatchSaveAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
