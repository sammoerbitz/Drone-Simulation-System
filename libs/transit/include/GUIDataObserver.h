#ifndef GUI_DATA_OBSERVER_
#define GUI_DATA_OBSERVER_

#include "./util/json.h"
//getjson
//update
class GUIDataObserver {
    public:
     /**
      * @brief Destroy the GUIDataObserver object
      * 
      */
     ~GUIDataObserver();
     /**
      * @brief 
      * 
      * @return JsonObject 
      */
     JsonObject GetJSON();
     /**
      * @brief Get the Instance object
      * 
      * @return GUIDataObserver* 
      */
     static GUIDataObserver* GetInstance();
     /**
      * @brief 
      * 
      */
     void Update(JsonObject);

    private:
     /**
     * @brief Construct a new GUIDataObserver object
     * 
     */
     GUIDataObserver();
     JsonObject obj;
     static GUIDataObserver* instancePtr;
};
#endif