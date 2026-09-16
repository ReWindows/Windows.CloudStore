#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 3 member(s).
namespace winrt::Windows::Security::Authentication::Web::Core {
class WebTokenRequest {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WebTokenRequest@Core@Web@Authentication@Security@Windows@winrt@@QEAA@AEBUWebAccountProvider@Credentials@456@AEBUhstring@param@6@1@Z
    WebTokenRequest(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WebTokenRequest@Core@Web@Authentication@Security@Windows@winrt@@QEAA@AEBUWebAccountProvider@Credentials@456@AEBUhstring@param@6@1AEBW4WebTokenRequestPromptType@123456@@Z
    WebTokenRequest(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebTokenRequest@Core@Web@Authentication@Security@Windows@winrt@@QEAA@XZ
    ~WebTokenRequest();
};
} // namespace winrt::Windows::Security::Authentication::Web::Core
