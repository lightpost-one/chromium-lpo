// browser/ui/views/side_panel/lpo_side_panel_view.h 
#ifndef CHROME_BROWSER_UI_VIEWS_SIDE_PANEL_LPO_SIDE_PANEL_VIEW_H_
#define CHROME_BROWSER_UI_VIEWS_SIDE_PANEL_LPO_SIDE_PANEL_VIEW_H_

#include "ui/views/view.h"

// Simple “Hello World” side-panel view.
class LpoSidePanelView : public views::View {
 public:
  LpoSidePanelView();                 // defined in the .cc
  ~LpoSidePanelView() override = default;

  LpoSidePanelView(const LpoSidePanelView&) = delete;
  LpoSidePanelView& operator=(const LpoSidePanelView&) = delete;
};

#endif  // CHROME_BROWSER_UI_VIEWS_SIDE_PANEL_LPO_SIDE_PANEL_VIEW_H_

