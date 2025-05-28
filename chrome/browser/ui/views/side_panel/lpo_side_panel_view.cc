// browser/ui/views/side_panel/lpo_side_panel_view.cc
#include "chrome/browser/ui/views/side_panel/lpo_side_panel_view.h"

#include <memory>                           // std::make_unique
#include "ui/views/layout/fill_layout.h"    // views::FillLayout
#include "ui/views/controls/label.h"        // views::Label


LpoSidePanelView::LpoSidePanelView() {
  SetLayoutManager(std::make_unique<views::FillLayout>());
  AddChildView(std::make_unique<views::Label>(u"Hello World"));
}

