#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class SaveActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SaveActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDIPEBG111I_KI2I@Z
    void StartActivity(char const *, unsigned int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned int, uint64_t, unsigned int, uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SaveActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD_KAEBU_GUID@@_N@Z
    void Stop(char const *, uint64_t, _GUID const &, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SaveActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~SaveActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SaveActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SaveActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
