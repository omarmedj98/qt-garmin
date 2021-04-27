
#ifndef WIDGETNAV_CPP
#define WIDGETNAV_CPP
#endif

#include "WidgetNAV.h"
#include "ui_WidgetNAV.h"

////////////////////////////////////////////////////////////////////////////////

WidgetNAV::WidgetNAV( QWidget *parent ) :
    QWidget( parent ),
    m_ui( new Ui::WidgetNAV ),
    m_nav ( 0 ),
    m_layoutSq ( 0 )
{
    m_ui->setupUi( this );

    setupUi();

    m_nav = m_ui->graphicsNAV;
}

////////////////////////////////////////////////////////////////////////////////

WidgetNAV::~WidgetNAV()
{
    if ( m_layoutSq ) delete m_layoutSq; m_layoutSq = 0;

    if ( m_ui ) delete m_ui; m_ui = 0;
}

////////////////////////////////////////////////////////////////////////////////

void WidgetNAV::setupUi()
{
    m_layoutSq = new LayoutSquare( this );

    m_layoutSq->setContentsMargins( 0, 0, 0, 0 );
    m_layoutSq->addWidget( m_ui->frameNAV );

    setLayout( m_layoutSq );
}
