#include <gui/bulbon_screen/bulbonView.hpp>

bulbonView::bulbonView()
{

}

void bulbonView::setupScreen()
{
    bulbonViewBase::setupScreen();
}

void bulbonView::tearDownScreen()
{
    bulbonViewBase::tearDownScreen();
}
void bulbonView::ledtoggle()
{
    presenter->ledtoggle();
}
void bulbonView::imgbulbtoggle()
{
    if(bulboff.isVisible())
    {
        bulboff.setVisible(false);
        bulbon.setVisible(true);
    }
    else
    {
        bulboff.setVisible(true);
        bulbon.setVisible(false);
    }
    bulboff.invalidate();
    bulbon.invalidate();
}
