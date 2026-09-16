#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 7 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class LoadActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LoadActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDIPEBG111I@Z
    void StartActivity(char const *, unsigned int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@LoadActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDI_KAEBU_GUID@@_N@Z
    void Stop(char const *, unsigned int, uint64_t, _GUID const &, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LoadActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~LoadActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LoadActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LoadActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
