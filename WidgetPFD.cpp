
#ifndef WIDGETPFD_CPP
#define WIDGETPFD_CPP
#endif

#include "WidgetPFD.h"
#include "ui_WidgetPFD.h"

////////////////////////////////////////////////////////////////////////////////

WidgetPFD::WidgetPFD( QWidget *parent ) :
    QWidget( parent ),
    m_ui( new Ui::WidgetPFD ),
    m_pfd ( 0 ),
    m_layoutSq ( 0 )
{
    m_ui->setupUi( this );

    setupUi();

    m_pfd = m_ui->graphicsPFD;
}

////////////////////////////////////////////////////////////////////////////////

WidgetPFD::~WidgetPFD()
{
    if ( m_layoutSq ) delete m_layoutSq; m_layoutSq = 0;

    if ( m_ui ) delete m_ui; m_ui = 0;
}

////////////////////////////////////////////////////////////////////////////////

void WidgetPFD::setupUi()
{
    m_layoutSq = new LayoutSquare( this );

    m_layoutSq->setContentsMargins( 0, 0, 0, 0 );
    m_layoutSq->addWidget( m_ui->framePFD );

    setLayout( m_layoutSq );
}
