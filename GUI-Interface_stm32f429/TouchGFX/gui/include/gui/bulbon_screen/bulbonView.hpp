#ifndef BULBONVIEW_HPP
#define BULBONVIEW_HPP

#include <gui_generated/bulbon_screen/bulbonViewBase.hpp>
#include <gui/bulbon_screen/bulbonPresenter.hpp>

class bulbonView : public bulbonViewBase
{
public:
    bulbonView();
    virtual ~bulbonView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void ledtoggle() override;
    void imgbulbtoggle();
protected:
};

#endif // BULBONVIEW_HPP
