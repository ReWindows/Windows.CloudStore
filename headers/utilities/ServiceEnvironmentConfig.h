#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 7 member(s).
namespace Windows::Internal::Storage::Cloud {
class ServiceEnvironmentConfig {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeServiceContext@ServiceEnvironmentConfig@Cloud@Storage@Internal@Windows@@UEAAXPEBG@Z
    virtual void ChangeServiceContext(unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ServiceEnvironmentConfig@Cloud@Storage@Internal@Windows@@QEAA@UPrivate@01234@PEBG@Z
    ServiceEnvironmentConfig(WindissectOpaque, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ServiceEnvironmentConfig@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~ServiceEnvironmentConfig();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheConfiguration@ServiceEnvironmentConfig@Cloud@Storage@Internal@Windows@@AEAAXXZ
    void CacheConfiguration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupServiceEnvironmentConfigurations@ServiceEnvironmentConfig@Cloud@Storage@Internal@Windows@@AEAAXXZ
    void SetupServiceEnvironmentConfigurations();
};
} // namespace Windows::Internal::Storage::Cloud
