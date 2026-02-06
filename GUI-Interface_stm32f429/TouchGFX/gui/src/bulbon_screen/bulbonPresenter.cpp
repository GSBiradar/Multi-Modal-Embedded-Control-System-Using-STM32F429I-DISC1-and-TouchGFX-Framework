#include <gui/bulbon_screen/bulbonView.hpp>
#include <gui/bulbon_screen/bulbonPresenter.hpp>

bulbonPresenter::bulbonPresenter(bulbonView& v)
    : view(v)
{

}

void bulbonPresenter::activate()
{

}

void bulbonPresenter::deactivate()
{

}
void bulbonPresenter::ledtoggle()
{
    model->ledtoggle();
}

void bulbonPresenter::imgbulbtoggle()
{
    view.imgbulbtoggle();
}