#ifndef CSS_CONSTANTS_H
#define CSS_CONSTANTS_H

/**
 * @brief The need for this file is due to the lack of support to retrieve CSS
 * values of Qt Widgets. Such deficiency means every code that depend on a CSS
 * values need to be updated on change to that value. This file makes it so that
 * a dependent CSS value only need to be updated here instead of its every use.
 * 
 * - The CSS values in this file should create appropriate namespaces similar to
 *   a CSS hierarchy. 
 * - The classes are defined in resources/style.css unless specified. 
 * - Naming convention should follow Javascript's style naming.
 * - Comments should be added to the duplicated css properties in css files.
 */
namespace CSS
{

namespace QTabBar {
namespace tab {
    const int padding = 4;
    const int border = 1;
}
}

namespace SearchBar{
    const int margin = 2;
    const int border = 1;
}

namespace MultiZimButton {
namespace QListWidget {
namespace item {
    const int paddingHorizontal = 5;
    const int border = 1;
}
    const int paddingVertical = 5;
}

namespace QScrollBar {
    const int width = 5;
}
}

namespace ZimItemWidget {
namespace QLabel {
    const int lineHeight = 24;
}
}

namespace TopWidget {
namespace QToolButton {
namespace backButton {
    const int marginLeft = 6;
}
}
}

/* In _contentManager.css */
namespace ContentManagerCSS {
namespace QTreeView {
    const int padding = 4;
}
}

/* In popup.css */
namespace PopupCSS {
namespace QHeaderView {
namespace section {
    const int marginTop = 5;
    const int lineHeight = 24;
    const int paddingVertical = 5;
    const int paddingLeft = 10;
}
}
}

}

#endif // CSS_CONSTANTS_H
