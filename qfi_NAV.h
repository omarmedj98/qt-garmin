#ifndef QFI_NAV_H
#define QFI_NAV_H

////////////////////////////////////////////////////////////////////////////////

#include <QGraphicsView>
#include <QGraphicsSvgItem>

////////////////////////////////////////////////////////////////////////////////

/** This class provides Navigation Display widget. */
class qfi_NAV : public QGraphicsView
{
    Q_OBJECT

public:

    /** Constructor. */
    explicit qfi_NAV( QWidget *parent = 0 );

    /** Destructor. */
    virtual ~qfi_NAV();

    /** Reinitiates widget. */
    void reinit();

    /** Refreshes (redraws) widget. */
    void update();

    /** @param heading [deg] */
    void setHeading( float heading );

    /** @param heading bug [deg] */
    void setHeadingBug( float headingBug );

    /** @param course [deg] */
    void setCourse( float course );

    /** @param bearing [deg] */
    void setBearing( float bearing, bool visible = false );

    /** @param deviation [-] */
    void setDeviation( float deviation, bool visible = false );

    /** @param distance [nm] */
    void setDistance( float distance, bool visible = false );

protected:

    /** */
    void resizeEvent( QResizeEvent *event );

private:

    QGraphicsScene *m_scene;            ///< graphics scene

    QGraphicsSvgItem *m_itemBack;       ///< NAV background
    QGraphicsSvgItem *m_itemMask;       ///< NAV mask
    QGraphicsSvgItem *m_itemMark;

    QGraphicsSvgItem *m_itemBrgArrow;
    QGraphicsSvgItem *m_itemCrsArrow;
    QGraphicsSvgItem *m_itemDevBar;
    QGraphicsSvgItem *m_itemDevScale;
    QGraphicsSvgItem *m_itemHdgBug;
    QGraphicsSvgItem *m_itemHdgScale;

    QGraphicsTextItem *m_itemCrsText;
    QGraphicsTextItem *m_itemHdgText;
    QGraphicsTextItem *m_itemDmeText;

    QColor m_crsTextColor;
    QColor m_hdgTextColor;
    QColor m_dmeTextColor;

    QFont  m_crsTextFont;
    QFont  m_hdgTextFont;
    QFont  m_dmeTextFont;

    float m_heading;                    ///< [deg]
    float m_headingBug;                 ///< [deg]
    float m_course;
    float m_bearing;
    float m_deviation;
    float m_distance;

    bool m_bearingVisible;
    bool m_deviationVisible;
    bool m_distanceVisible;

    float m_devBarDeltaX_new;
    float m_devBarDeltaX_old;
    float m_devBarDeltaY_new;
    float m_devBarDeltaY_old;

    float m_scaleX; ///<
    float m_scaleY; ///<

    float m_originalPixPerDev;

    QPointF m_originalNavCtr;

    QPointF m_originalCrsTextCtr;
    QPointF m_originalHdgTextCtr;
    QPointF m_originalDmeTextCtr;

    const int m_originalHeight;         ///< [px]
    const int m_originalWidth;          ///< [px]

    const int m_backZ;
    const int m_maskZ;
    const int m_markZ;

    const int m_brgArrowZ;
    const int m_crsArrowZ;
    const int m_crsTextZ;
    const int m_devBarZ;
    const int m_devScaleZ;
    const int m_hdgBugZ;
    const int m_hdgScaleZ;
    const int m_hdgTextZ;
    const int m_dmeTextZ;

    /** */
    void init();

    /** */
    void reset();

    /** */
    void updateView();
};

////////////////////////////////////////////////////////////////////////////////

#endif // QFI_NAV_H
