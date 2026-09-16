#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class DeleteActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DeleteActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDIPEBG111_K@Z
    void StartActivity(char const *, unsigned int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@DeleteActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD_KAEBU_GUID@@_N@Z
    void Stop(char const *, uint64_t, _GUID const &, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeleteActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~DeleteActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DeleteActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DeleteActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
