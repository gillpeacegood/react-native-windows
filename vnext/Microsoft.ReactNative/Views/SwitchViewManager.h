// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#pragma once

#include <Views/ControlViewManager.h>

namespace react::uwp {

class SwitchViewManager : public ControlViewManager {
  using Super = ControlViewManager;

 public:
  SwitchViewManager(const Mso::React::IReactContext &context);

  const char *GetName() const override;
  folly::dynamic GetNativeProps() const override;
  facebook::react::ShadowNode *createShadow() const override;
  void DispatchCommand(const XamlView &viewToUpdate, const std::string &commandId, const folly::dynamic &commandArgs)
      override;

 protected:
  bool UpdateProperty(
      ShadowNodeBase *nodeToUpdate,
      const std::string &propertyName,
      const folly::dynamic &propertyValue) override;

  XamlView CreateViewCore(int64_t tag) override;

  friend class SwitchShadowNode;
};

} // namespace react::uwp
