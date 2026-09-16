#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 1 member(s).
namespace winrt::Windows::Security::Authentication::Web::Core {
class WebAuthenticationCoreManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTokenSilentlyAsync@WebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@winrt@@SA@AEBUWebTokenRequest@234567@AEBUWebAccount@Credentials@567@@Z
    static GetTokenSilentlyAsync(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Windows::Security::Authentication::Web::Core
