#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 1 member(s).
namespace Windows::Internal::Storage::Cloud {
class Common {
public:
    class AfcStatusChecker;
    class CurrentUserAccountInfo;
    class IAfcStatusChecker;
    class ISystemOps;
    class SystemOps;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWebAccountType@Common@Cloud@Storage@Internal@Windows@@YA?AW4UserAccountType@12345@PEAUIWebAccount@Credentials@Security@5@@Z
    int GetWebAccountType(::Windows::Security::Credentials::IWebAccount *);
};
} // namespace Windows::Internal::Storage::Cloud
