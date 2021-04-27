
#ifndef WIDGETNAV_H
#define WIDGETNAV_H

////////////////////////////////////////////////////////////////////////////////

#include <QWidget>

#include <qfi_NAV.h>

#include "LayoutSquare.h"

////////////////////////////////////////////////////////////////////////////////

namespace Ui
{
    class WidgetNAV;
}

////////////////////////////////////////////////////////////////////////////////

class WidgetNAV : public QWidget
{
    Q_OBJECT

public:

    explicit WidgetNAV( QWidget *parent = 0 );

    virtual ~WidgetNAV();

    inline void update()
    {
        m_nav->update();
    }

    inline void setHeading( float heading )
    {
        m_nav->setHeading( heading );
    }

    inline void setHeadingBug( float headingBug )
    {
        m_nav->setHeadingBug( headingBug );
    }

    inline void setCourse( float course )
    {
        m_nav->setCourse( course );
    }

    inline void setBearing( float bearing, bool visible = false )
    {
        m_nav->setBearing( bearing, visible );
    }

    inline void setDeviation( float deviation, bool visible = false )
    {
        m_nav->setDeviation( deviation, visible );
    }

    inline void setDistance( float distance, bool visible = false )
    {
        m_nav->setDistance( distance, visible );
    }

private:

    Ui::WidgetNAV *m_ui;
    qfi_NAV       *m_nav;
    LayoutSquare  *m_layoutSq;

    void setupUi();
};

////////////////////////////////////////////////////////////////////////////////

#endif // WIDGETNAV_H
