#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>  

#include <cstdint>



extern "C" 
{
    extern uint8_t imgbulb;
    extern void LED_Toggle_Touch_Button(void);
    // void LED_Toggle_Touch_Button(void);
}

Model::Model() : modelListener(0)
{

}

void Model::tick()
{ 
    if(imgbulb == 1)
    {
        modelListener->imgbulbtoggle();
        imgbulb = 0;

    }
    

}
void Model::ledtoggle()
{
    LED_Toggle_Touch_Button();
}    