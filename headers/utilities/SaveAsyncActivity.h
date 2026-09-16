#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 7 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class SaveAsyncActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SaveAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDIPEBG111I_KI2I1@Z
    void StartActivity(char const *, unsigned int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned int, uint64_t, unsigned int, uint64_t, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SaveAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD_K_NPEBGJ1@Z
    void Stop(char const *, uint64_t, bool, unsigned short const *, long, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SaveAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~SaveAsyncActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SaveAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SaveAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
